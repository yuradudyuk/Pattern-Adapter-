#include "XORCryprographer.h"




std::string XORCryptographer::encryptDecrypt(std::string inpString)
{
    char xorKey = 'P';

    size_t len = inpString.size();

    for (size_t i = 0; i < len; i++)
    {
        inpString[i] = inpString[i] ^ xorKey;
    }
    return inpString;
}

XORCryptographer::XORCryptographer(std::shared_ptr<Logger> logger) : logger(logger) {}
XORCryptographer::~XORCryptographer() = default;

void XORCryptographer::crypto_log(const std::string& info, std::string path_to_file) {
    std::string encrypted = encryptDecrypt(info);
    logger->log(encrypted, path_to_file);

}


