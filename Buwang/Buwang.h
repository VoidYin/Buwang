#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Buwang.h"

class Buwang : public QMainWindow
{
	Q_OBJECT

public:
	Buwang(QWidget *parent = Q_NULLPTR);

private:
	Ui::BuwangClass ui;
};
