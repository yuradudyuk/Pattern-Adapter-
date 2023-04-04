#ifndef _LOGGER_H_
#define _LOGGER_H_
#include <string>


class Logger {
private:
    std::string sentence;
    std::string currentDateTime();
    void writing_file(std::string path_to_file);
   
public:
    Logger();
    void log(std::string sentence_, std::string path_to_file);

};

#endif // !_LOGGER_H_

