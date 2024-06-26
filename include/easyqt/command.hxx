#ifndef EASYQT_COMMAND_HXX
#define EASYQT_COMMAND_HXX

#include <QObject>

#include <singleton.hxx>

namespace easyqt {
	class Command: public QObject {
		Q_OBJECT
		public:
			Command() {};
			virtual void execute() {};
			virtual const std::string name() { return ""; };
	};
}

#define EASYQTCOMMAND_GEN_DEF(classname) \
class classname: public SmartPtrSingleton<classname, easyqt::Command> { \
	public: \
		void execute() override; \
		const std::string name() override; \
};

#define EASYQTCOMMAND_GEN_IMPL(classname, stringname, exec_code) \
void classname::execute() { \
	exec_code; \
} \
const std::string classname::name() { \
	return stringname; \
} \

#endif

