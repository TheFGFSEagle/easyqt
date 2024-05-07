#ifndef EASYQT_COMMANDS_HXX
#define EASYQT_COMMANDS_HXX

#include "command.hxx"

namespace easyqt {
	std::shared_ptr<Command> getCommand(std::string name);

	EASYQTCOMMAND_GEN_DEF(CommandQuit)
}
#endif

