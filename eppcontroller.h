#ifndef EPPCONTROLLER_H
#define EPPCONTROLLER_H
#include <string>
#include "encryptor.h"

using namespace std;

class EPPController
{
public:
    EPPController();

    // Construct the PIN
    string constructPIN(string enteredPin);

    // Encrypt the key
    string encryptPIN(string pin);

    // Transmit the key to the bank
    void transmitPIN(string encryptedPIN);

    const string PAN = "43219876543210987";

    Encryptor encryptor;
};
#endif // EPPCONTROLLER_H
