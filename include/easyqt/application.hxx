#ifndef EASYQT_APPLICATION_HXX
#define EASYQT_APPLICATION_HXX

#include <memory>

#include <QApplication>

namespace easyqt {
	class Application: public QApplication {
		Q_OBJECT
		public:
			Application(int& argc, char **argv);
			static std::shared_ptr<Application> instance() {
				return std::shared_ptr<Application>(qobject_cast<Application*>(QApplication::instance()));
			}
	};
}
#endif

