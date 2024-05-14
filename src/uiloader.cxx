#include <QFile>

#include "menubar.hxx"
#include "uiloader.hxx"

namespace easyqt {
	QWidget* UiLoader::createWidget(const QString& widgetName, QWidget* parentWidget, const QString& name) {
		QWidget* w;
		if (widgetName == "easyqt::MenuBar") {
			w = MenuBar::instance(name.toStdString());
		} else {
			return QUiLoader::createWidget(widgetName, parentWidget, name);
		}
		w->setObjectName(name);
		w->setParent(parentWidget);
		return w;
	}
}

