#ifndef FGAUGE_UTILS_HXX
#define FGAUGE_UTILS_HXX

#include <ctime>
#include <string>

#include <QDir>

namespace easyqt {
	std::string getResourcePath(std::string path);
	std::string strftime(std::time_t time, const std::string& format);
	std::string strftime(std::time_t time, const char* format);
}

template<typename T>
std::string& string(T& string);

std::string toLower(std::string& s);
std::string toUpper(std::string& s);
#endif

