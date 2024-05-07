#include "logging.hxx"

std::string string(easyqt::Logger::LogLevel level) {
	switch (level) {
		case easyqt::Logger::LogLevel::DEBUG:
			return {"DEBUG"};
		case easyqt::Logger::LogLevel::INFO:
			return {"INFO"};
		case easyqt::Logger::LogLevel::WARNING:
			return {"WARNING"};
		case easyqt::Logger::LogLevel::ERROR:
			return {"ERROR"};
		case easyqt::Logger::LogLevel::FATAL:
			return {"FATAL"};
		default:
			return {"UNKNOWN"};
	}
}

namespace easyqt {
	std::ostream& operator<<(std::ostream& s, easyqt::Logger::LogLevel level) {
		s << string(level);
		return s;
	}
	
	const Logger::LogLevel Logger::getLogLevelForString(std::string levelName) {
		std::string upper = toUpper(levelName);
		if (upper == "DEBUG") {
			return Logger::LogLevel::DEBUG;
		} else if (upper == "INFO") {
			return Logger::LogLevel::INFO;
		} else if (upper == "WARNING") {
			return Logger::LogLevel::WARNING;
		} else if (upper == "ERROR") {
			return Logger::LogLevel::ERROR;
		} else if (upper == "FATAL") {
			return Logger::LogLevel::FATAL;
		} else {
			return Logger::LogLevel::UNKNOWN;
		}
	}

	const Logger::LogLevel Logger::getLogLevelForString(char* levelName) {
		std::string s(levelName);
		return getLogLevelForString(s);
	}
}

