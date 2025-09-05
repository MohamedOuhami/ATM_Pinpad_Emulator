#ifndef ENCRYPTOR_H
#define ENCRYPTOR_H
#include <vector>
#include <stdint.h>

using namespace std;

class Encryptor
{
public:
    Encryptor();
    vector<unsigned char> aes_encrypt(const vector<uint8_t>& data, const vector<unsigned char>& key);
};

#endif // ENCRYPTOR_H
