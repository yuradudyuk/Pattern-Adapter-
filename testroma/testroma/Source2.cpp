#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <fstream>
#include<vector>
#include <memory>
#include "Logger.h"
#include "XORCryprographer.h"


int main() {
    std::string path="./test.log";
    std::vector <std::string> servise={"sssssss","ddddd","ffff","ggggg","hhhhhh","jjjjjjj",
        "kkkkkk","lllllll","wwwwww","eeeeeeee"};

    std::shared_ptr<Logger> logger=std::make_shared<Logger> ();
    XORCryptographer  obj(logger);

    auto it = servise.begin();

    while (it != servise.end()) {
        if ((*it).empty()) {
            continue;
        }
    
        obj.crypto_log(*it, path);
        it++;
    }
    
	return 0;
}