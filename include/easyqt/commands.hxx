#ifndef EASYQT_COMMANDS_HXX
#define EASYQT_COMMANDS_HXX

#include "command.hxx"

namespace easyqt {
	std::shared_ptr<Command> getCommand(std::string name);
	void addCommand(std::shared_ptr<Command> command);
	void removeCommand(std::string name);
	inline void removeCommand(std::shared_ptr<Command> command) { removeCommand(command->name()); };

	EASYQTCOMMAND_GEN_DEF(CommandQuit)
}
#endif

