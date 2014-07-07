//===========================================
//  Lumina-DE source code
//  Copyright (c) 2014, Ken Moore
//  Available under the 3-clause BSD license
//  See the LICENSE file for full details
//===========================================
//  This class is a quick sample desktop plugin
//===========================================
#ifndef _LUMINA_DESKTOP_DESKTOP_PLUGIN_SAMPLE_H
#define _LUMINA_DESKTOP_DESKTOP_PLUGIN_SAMPLE_H

#include <QPushButton>
#include <QMessageBox>
#include <QVBoxLayout>
#include "LDPlugin.h"

class SamplePlugin : public LDPlugin{
	Q_OBJECT
public:
	SamplePlugin(QWidget* parent, QRect rect) : LDPlugin(parent, rect, "sample"){
	  this->setLayout( new QVBoxLayout());
	  button = new QPushButton("sample");
	  this->layout()->addWidget(button);
		connect(button, SIGNAL(clicked()), this, SLOT(showMessage()) );
	  this->move(100,100);
	}
	
	~SamplePlugin(){}
	
private:
	QPushButton *button;

private slots:
	void showMessage(){
	  QMessageBox::information(this,"sample","sample desktop plugin works");
	}
};
#endif
