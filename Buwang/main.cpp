#include "Buwang.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Buwang w;
	w.show();
	return a.exec();
}
