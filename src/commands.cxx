#include <iostream>
#include <map>
#include <string>

#include "application.hxx"
#include "commands.hxx"

namespace easyqt {
	EASYQTCOMMAND_GEN_IMPL(CommandQuit, "quit", Application::instance()->exit())
	
	static std::map<std::string, std::shared_ptr<Command> > _commandMap = {
		{"quit", CommandQuit::instance()},
	};

	std::shared_ptr<Command> getCommand(std::string name) {
		if (!_commandMap.contains(name)) {
			return nullptr;
		}
		return _commandMap[name];
	}
};

