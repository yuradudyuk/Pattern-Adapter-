#define _CRT_SECURE_NO_WARNINGS
#include "Logger.h"

#include <ctime>

#include <fstream>


std::string Logger::currentDateTime() {
    std::time_t t = std::time(nullptr);
    std::tm* now = std::localtime(&t);

    char buffer[128];
    strftime(buffer, sizeof(buffer), "%m-%d-%Y %X", now);
    return buffer;
}
void Logger::writing_file(std::string path_to_file)
{
    std::ofstream file_out;
    file_out.open(path_to_file, std::ios::app);

    file_out << sentence;
    file_out.close();
}
Logger::Logger() = default;

void Logger::log(std::string sentence_, std::string path_to_file) {

    sentence = static_cast<std::string>(currentDateTime()) + "\t" + sentence_ + "\n";

    writing_file(path_to_file);
}
