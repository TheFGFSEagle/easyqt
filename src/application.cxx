#include <QDir>
#include <QStandardPaths>

#include "application.hxx"

namespace easyqt {
	Application::Application(int& argc, char **argv):
		QApplication(argc, argv)
	{
		QDir::setSearchPaths("res", QStandardPaths::standardLocations(QStandardPaths::AppLocalDataLocation));
	}
}

