/*
 * Canteen.cpp
 *
 *  Created on: Mar 19, 2014
 *      Author: noonnightstorm
 */

#include "Canteen.h"
#include "cocos-ext.h"
#include "Building.h"

using namespace cocos2d;
using namespace cocos2d::extension;
using namespace cocos2d::gui;

Canteen::Canteen() {
	// TODO Auto-generated constructor stub

}

Canteen::~Canteen() {
	// TODO Auto-generated destructor stub
}

bool Canteen::init() {
	Building::init();
	return true;
}

void Canteen::onClick()
{
	Building::showInfoMenu();
}
void Canteen::infoMenuInit()
{
	buildingView->loadTexture("canteen.png");
}
void Canteen::refreshView()
{
	this->initWithFile("canteen.png");
}
