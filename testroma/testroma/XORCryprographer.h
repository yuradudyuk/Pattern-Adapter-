#ifndef _XORCRYPTOGRAPHER_
#define _XORCRYPTOGRAPHER_
#include "Mediator.h"
#include "Logger.h"
#include <memory>
#include <string>

class XORCryptographer : public Mediator {
private:

    std::shared_ptr<Logger> logger;
    std::string encryptDecrypt(std::string inpString);
 
public:
    XORCryptographer(std::shared_ptr<Logger> logger);
    ~XORCryptographer();

    void crypto_log(const std::string& info, std::string path_to_file);


};

#endif // !_XORCRYPTOGRAPHER_

