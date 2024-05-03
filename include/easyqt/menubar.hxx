#ifndef EASYQT_MENUBAR_HXX
#define EASYQT_MENUBAR_HXX

#include <string>

#include <QMenuBar>
#include "singleton.hxx"

namespace easyqt {
	class MenuBar: public Singleton<MenuBar, QMenuBar> {
		Q_OBJECT
		public:
			MenuBar();
			void loadFromFile(std::string file);
			inline static const std::string name {"menubar"};
	};
}
#endif
