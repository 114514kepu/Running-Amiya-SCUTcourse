#ifndef UNIT_H
#define UNIT_H
#include<easyx.h>
#include<cstring>
#include<string.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<windows.h>
#include<stdio.h>
#include<time.h>
#include<conio.h>
#include<graphics.h> 
#include"Mydefine.h"
class unit {
protected:
	int x;//���ϽǺ�����
	int y;//���Ͻ�������
	int height;//ͼ��߶�
	int width;//ͼ����
	int direction;//���߷���
	int hp_max;//���Ѫ��
	int hp;//��ǰѪ��
	int vx;//�ƶ��ٶ�
	int vy;//ÿһ֡�ƶ��ٶ�
	bool alive;
	bool exist;
	int judging;
	bool onground;
	int stage;
	int state;
public:
	unit();
	//void init(){}
	int& getx();
	int& gety();
	int getxcheck();
	int getycheck();
	int& getvx();
	int& getvy();
	int& getheight();
	int& getwidth();
	int& getdirection();
	int getjudging();
	void showblood(int xM = 0, int tmp = 0);
	bool& getexist();
	bool ifonground();
	void land();
	void fall();
	int& changestate();
	int getstage();
	void init(int a, int b, int h, int w);
};
#endif