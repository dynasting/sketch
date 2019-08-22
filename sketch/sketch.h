#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_sketch.h"
#include <QFileDialog.h>
#include <core/core.hpp>
#include <imgproc/imgproc.hpp>
#include <highgui\highgui.hpp> 

#include <string.h>

using namespace std;
using namespace cv;

class sketch : public QMainWindow
{
	Q_OBJECT

public:
	sketch(QWidget *parent = Q_NULLPTR);

private:
	Ui::sketchClass ui;



};
