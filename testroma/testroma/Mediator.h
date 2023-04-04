#ifndef _MEDIATOR_
#define _MEDIATOR_
#include <string>

class Mediator {
public:
    virtual ~Mediator() {}
    virtual void crypto_log(const std::string& info, std::string path_to_file) = 0;
};

#endif // !_MEDIATOR_

