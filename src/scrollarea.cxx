#include <QScrollBar>

#include "scrollarea.hxx"

namespace easyqt {
	QPoint ScrollArea::scrollPos() {
		return QPoint(horizontalScrollBar()->value(), verticalScrollBar()->value());
	}
}

