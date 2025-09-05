#include "encryptor.h"
#include <openssl/aes.h>
#include <openssl/evp.h>
#include <openssl/rand.h>
#include <iostream>
#include <vector>
#include <string>

Encryptor::Encryptor() {}

vector<unsigned char> Encryptor::aes_encrypt(const vector<uint8_t>& data, const vector<unsigned char>& key) {
    EVP_CIPHER_CTX* ctx = EVP_CIPHER_CTX_new();
    if (!ctx) {
        throw runtime_error("Failed to create cipher context");
    }

    // Generate random IV (Initialization Vector)
    unsigned char iv[AES_BLOCK_SIZE];
    if (RAND_bytes(iv, AES_BLOCK_SIZE) != 1) {
        EVP_CIPHER_CTX_free(ctx);
        throw runtime_error("Failed to generate IV");
    }

    // Initialize encryption
    if (EVP_EncryptInit_ex(ctx, EVP_aes_256_cbc(), NULL, key.data(), iv) != 1) {
        EVP_CIPHER_CTX_free(ctx);
        throw runtime_error("Failed to initialize encryption");
    }

    // Prepare output buffer
    vector<unsigned char> ciphertext(data.size() + AES_BLOCK_SIZE);
    int len;
    int ciphertext_len;

    // Perform encryption
    if (EVP_EncryptUpdate(ctx, ciphertext.data(), &len,
                          reinterpret_cast<const unsigned char*>(data.data()),
                          data.size()) != 1) {
        EVP_CIPHER_CTX_free(ctx);
        throw runtime_error("Failed to encrypt");
    }
    ciphertext_len = len;

    // Finalize encryption
    if (EVP_EncryptFinal_ex(ctx, ciphertext.data() + len, &len) != 1) {
        EVP_CIPHER_CTX_free(ctx);
        throw runtime_error("Failed to finalize encryption");
    }
    ciphertext_len += len;

    // Resize to actual ciphertext length
    ciphertext.resize(ciphertext_len + AES_BLOCK_SIZE);

    // Prepend IV to ciphertext (common practice)
    for (int i = 0; i < AES_BLOCK_SIZE; ++i) {
        ciphertext.insert(ciphertext.begin() + i, iv[i]);
    }

    EVP_CIPHER_CTX_free(ctx);
    return ciphertext;
}
