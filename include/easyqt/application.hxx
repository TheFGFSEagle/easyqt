#ifndef EASYQT_APPLICATION_HXX
#define EASYQT_APPLICATION_HXX

#include <QApplication>

namespace easyqt {
	class Application: public QApplication {
		Q_OBJECT
		public:
			Application(int& argc, char **argv);
			static Application* instance() {
				return static_cast<Application*>(QApplication::instance());
			}
	};
}
#endif

