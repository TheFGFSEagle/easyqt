#include "utils.hxx"

namespace easyqt {
	std::string getResourcePath(std::string path) {
		QFile resolver(path.c_str());
		return resolver.fileName().toStdString();
	}
	
	std::string strftime(std::time_t time, const std::string& format) {
		std::tm* local_time = std::localtime(&time);
		char output[256];
		std::strftime(output, sizeof(output), format.c_str(), local_time);
		return output;
	}
	std::string strftime(std::time_t time, const char* format) {
		std::tm* local_time = std::localtime(&time);
		char output[256];
		std::strftime(output, sizeof(output), format, local_time);
		return output;
	}
}

namespace std {
	string tolower(const string& s) {
		string lower;
		for(const char& c: s) {
			lower += tolower(c);
		}
		return lower;
	}
	string toupper(const string& s) {
		string upper;
		for(const char& c: s) {
			upper += std::toupper(c);
		}
		return upper;
	}
}


