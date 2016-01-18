#pragma once
#pragma execution_character_set("utf-8")
#include "ui_main_window.h"
#include<QAction>
#include <QtWidgets>

#include <io.h>
#include <fstream>
#define CONFIG_FILE_NAME "ContractConfig.pb"

#include "ui_config.h"
#include "ContractConfig.pb.h"
MainWindow::MainWindow(QWidget * parent) :QMainWindow(parent){
	createActions();
	createMenus();
	createEvent();
}

void MainWindow::createActions(){

	startCollect = new QAction(tr("开始运行"), this);
	stopCollect = new QAction(tr("停止运行"),this);
	newMonitor = new QAction(tr("新建数据监视"),this);
	statusBar = new QAction(tr("状态图"),this);
	showConfigWindow = new QAction(tr("合约配置"),this);

}

void MainWindow::createMenus(){

	menu = menuBar()->addMenu("操作");

	menu->addAction(startCollect);
	menu->addAction(stopCollect);
	menu->addAction(newMonitor);
	menu->addAction(statusBar);
	menu->addAction(showConfigWindow);
}
MainWindow::~MainWindow(){

}
QSize MainWindow::sizeHint() const{
	return size();
}
QSize MainWindow::size()const{
	
	return QSize(1000, 600);
}

void MainWindow::openConfigWindow()
{
	config_window = new Ui_Config;
	config_window->show();
}

void MainWindow::createEvent()
{
	connect(showConfigWindow, SIGNAL(triggered()), this, SLOT(openConfigWindow()));
}

void MainWindow::readConfig()
{
	using namespace std;
	config_data = new ContractConfig();

	if (access(CONFIG_FILE_NAME, 0) == 0){
		fstream input("ContractConfig.pb", ios::in | ios::binary);
		config_data->ParseFromIstream(&input);
	}
}
