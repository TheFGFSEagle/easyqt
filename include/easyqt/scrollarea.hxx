#ifndef EASYQT_SCROLLAREA_HXX
#define EASYQT_SCROLLAREA_HXX

#include <QScrollArea>

namespace easyqt {
	class ScrollArea: public QScrollArea {
		Q_OBJECT
		
		public:
			QPoint scrollPos();
	};
}

#endif

