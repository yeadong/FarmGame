/*
 * Building.h
 *
 *  Created on: Mar 18, 2014
 *      Author: C860
 */

#ifndef BUILDING_H_
#define BUILDING_H_

#include "cocos2d.h"
#include "cocos-ext.h"
#include "GameResources.h"
#include <iostream>
#include <string>

using namespace std;
using namespace cocos2d;
using namespace cocos2d::extension;
using namespace cocos2d::gui;

class Building : public CCSprite, public CCTouchDelegate {
public:
	Building();
	virtual ~Building();
	bool init();
	static Building* create(const char *filename);

	CCRect getRect();

	void setMapIndex(int x,int y);
	void setBuildingIndex(int index);
	void building(int MapX,int MapY);
	void doBuilding(int MapX,int MapY);
	void showInfoMenu();
	void closeInfoMenu();
	void setInfoMenu(string about, string price, string wood, string maxPeople, string currentPeople);
	void setPeople(string num);
	CREATE_FUNC(Building);

	virtual bool ccTouchBegan(CCTouch* touch, CCEvent* event);//按下
	virtual void ccTouchMoved(CCTouch* touch, CCEvent* event);//拖动
	virtual void ccTouchEnded(CCTouch* touch, CCEvent* event);//松开

	virtual void onEnter();
	virtual void onExit();

	virtual void onClick();

	virtual void infoMenuInit();
	virtual void refreshView();

	virtual void goToWork();
	virtual void goBackToCastle();

protected:
	//单例
	GameResources* res;
	//建筑的变量
	CCPoint buildingMap;
	int buildingIndex;
	int worker;
	//动画
	CCArmature* _armature;
	//菜单组件
	TouchGroup* menu;
	UIWidget* widget;
	UIImageView* buildingView;
	UIButton* sub_btn;
	UIButton* add_btn;

private:
	void moveToBuilding();
	void beginToBuilding(CCObject* obj);
	void finishBuilding();
	void moveBack();
};

#endif /* BUILDING_H_ */
