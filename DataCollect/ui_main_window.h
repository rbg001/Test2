#pragma once
#pragma execution_character_set("utf-8")
#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H
#include "QMainWindow"
#include "ui_config.h"

class ContractConfig;

class  MainWindow : public QMainWindow
{
	Q_OBJECT;
public:
	MainWindow(QWidget * parent = 0);
	~MainWindow();
protected:
private:
	QSize sizeHint() const;
	QSize size()const;

	void createActions();
	void createMenus();
	void createEvent();
	void readConfig();

	QAction * startCollect;
	QAction * stopCollect;
	QAction * newMonitor;
	QAction * statusBar;
	QAction * showConfigWindow;
	QMenu * menu;
	Ui_Config *  config_window;

	ContractConfig * config_data;

	private slots:

	void openConfigWindow();
};




#endif