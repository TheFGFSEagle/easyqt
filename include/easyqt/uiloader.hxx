#ifndef EASYQT_UILOADER_HXX
#define EASYQT_UILOADER_HXX

#include <iostream>

#include <QUiLoader>
#include <QFile>

#include "logging.hxx"

namespace easyqt {
	class UiLoader: public QUiLoader {
		Q_OBJECT
		public:
			QWidget* createWidget(const QString &widgetName, QWidget* parentWidget, const QString &name);
	};


	template<typename T>
	T* loadWidgetFromFile(const char* path) {
		LOG(DEBUG, "Loading widget from file: " << path << std::endl);
		UiLoader loader;
		QFile file(path);
		file.open(QFile::ReadOnly);
		T* w = qobject_cast<T*>(loader.load(&file));
		file.close();
		
		return w;
	}
}

#endif

