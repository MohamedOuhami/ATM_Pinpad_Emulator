#include "eppcontroller.h"
#include <vector>
#include <stdint.h>
#include <vector>
#include <openssl/rand.h>
#include <istream>
#include <iomanip>

EPPController::EPPController() {}

// Method to construct a PIN from the keystrokes and the card number
string EPPController::constructPIN(string enteredPIN){

    string finalResult;
    string formattedPIN;

    // Format 0
    string PIN;
    // 1- Preparing the PIN
    // The PIN is composed of 16 nibbles (64 bits)
    // The first nibble is 0 for the type of the format
    PIN += "0";

    // The second is the length of the entered PIN
    PIN += '0' + enteredPIN.size();

    // The following is the entered PIN
    PIN += enteredPIN;

    // The rest is completed with F
    for (int i = 0; i < 16 - 2 - enteredPIN.size(); i++) {
        PIN += 'F';
    }

    finalResult += "- Entered PIN : " + enteredPIN + "\n";
    finalResult += "- Constructed PIN Block : " + PIN + "\n";

    // Convert the PIN ASCII to numerical values
    vector<uint8_t> pinNumeric(PIN.size());
    for (size_t i = 0; i < PIN.size(); ++i) {
        pinNumeric[i] = (PIN[i] >= '0' && PIN[i] <= '9') ? (PIN[i] - '0') :
                            (PIN[i] >= 'A' && PIN[i] <= 'F') ? (PIN[i] - 'A' + 10) : 0;
    }

    // To format the PAN, we replace the first 4 nibbles with 0
    string PAN_cp = PAN;
    for (int i = 0; i < 4; i++) {
        PAN_cp[i] = '0';
    }

    finalResult += "- Client PAN : " + PAN + "\n";
    finalResult += "- Constructed PAN Block : " + PAN_cp + "\n";

    // Convert the PAN ASCII to numerical values
    vector<uint8_t> panNumeric(PAN_cp.size());
    for (size_t i = 0; i < PAN_cp.size(); ++i) {
        panNumeric[i] = (PAN_cp[i] >= '0' && PAN_cp[i] <= '9') ? (PAN_cp[i] - '0') :
                            (PAN_cp[i] >= 'A' && PAN_cp[i] <= 'F') ? (PAN_cp[i] - 'A' + 10) : 0;
    }

    // Perform XOR - use the smaller size to avoid out-of-bounds
    size_t minSize = min(pinNumeric.size(), panNumeric.size());
    vector<uint8_t> xorResult(minSize);
    for (size_t i = 0; i < minSize; ++i) {
        xorResult[i] = pinNumeric[i] ^ panNumeric[i];
    }

    // Convert result as hex characters
    string xorResultHex;
    for (size_t i = 0; i < xorResult.size(); ++i) {
        if (xorResult[i] < 10) {
            xorResultHex += '0' + xorResult[i];
        } else {
            xorResultHex += 'A' + (xorResult[i] - 10);
        }
    }

    finalResult += "- The result of XORing the PIN Block and PAN Block : " + xorResultHex + "\n";

    // Generate or use a 256-bit key
    std::vector<unsigned char> key(32);
    RAND_bytes(key.data(), key.size());

    auto encrypted_bytes = encryptor.aes_encrypt(xorResult,key);

    finalResult += "- Encrypting the XORResult bytes using AES\n";

    stringstream ss;
    ss << hex << setfill('0');
    for (unsigned char byte : encrypted_bytes) {
        ss << setw(2) << static_cast<int>(byte);
    }

    finalResult += "- Encrypted Result : " + ss.str() + "\n";
    return finalResult;
}

