#ifndef EASYQT_APPLICATION_HXX
#define EASYQT_APPLICATION_HXX

#include <memory>

#include <QApplication>

namespace easyqt {
	class Application: public QApplication {
		Q_OBJECT
		public:
			Application(int& argc, char **argv);
			static Application* instance() {
				return qobject_cast<Application*>(QApplication::instance());
			}
	};
}
#endif

