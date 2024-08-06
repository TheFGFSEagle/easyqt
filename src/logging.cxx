#include "logging.hxx"

namespace std {
	string to_string(easyqt::Logger::LogLevel level) {
		switch (level) {
			case easyqt::Logger::LogLevel::DEBUG:
				return {"DEBUG"};
			case easyqt::Logger::LogLevel::INFO:
				return {"INFO"};
			case easyqt::Logger::LogLevel::WARN:
				return {"WARN"};
			case easyqt::Logger::LogLevel::ALERT:
				return {"ALERT"};
			case easyqt::Logger::LogLevel::ERROR:
				return {"ERROR"};
			case easyqt::Logger::LogLevel::FATAL:
				return {"FATAL"};
			default:
				return {"UNKNOWN"};
		}
	}
}

std::ostream& operator<<(std::ostream& s, QString value) {
	s << value.toStdString();
	return s;
};

namespace easyqt {
	std::ostream& operator<<(std::ostream& s, easyqt::Logger::LogLevel level) {
		s << std::to_string(level);
		return s;
	}
	
	const Logger::LogLevel Logger::getLogLevelForString(std::string levelName) {
		std::string upper = std::toupper(levelName);
		if (upper == "DEBUG") {
			return Logger::LogLevel::DEBUG;
		} else if (upper == "INFO") {
			return Logger::LogLevel::INFO;
		} else if (upper == "WARNING" || upper == "WARN") {
			return Logger::LogLevel::WARN;
		} else if (upper == "ALERT") {
			return Logger::LogLevel::ALERT;
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

