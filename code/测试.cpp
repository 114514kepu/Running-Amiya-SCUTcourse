//#include<easyx.h>
//#include<iostream>
//#include<vector>
//#include<windows.h>
//#include<stdio.h>
//#include<time.h>
//#include<conio.h>
//#include<graphics.h>
//#include"Mydefine.h"
//#pragma comment( lib, "MSIMG32.LIB")
//void transparentimage3(IMAGE* dstimg, int x, int y, IMAGE* srcimg) //�°�png
//{
//	HDC dstDC = GetImageHDC(dstimg);
//	HDC srcDC = GetImageHDC(srcimg);
//	int w = srcimg->getwidth();
//	int h = srcimg->getheight();
//	BLENDFUNCTION bf = { AC_SRC_OVER, 0, 255, AC_SRC_ALPHA };
//	AlphaBlend(dstDC, x, y, w, h, srcDC, 0, 0, w, h, bf);
//}
//int main() {
//	IMAGE A[10];
//	IMAGE A1[10];
//	IMAGE TEST;
//	loadimage(&TEST, _T("resourse/boss/test.png"), boss_width, boss_height);
//	IMAGE background;
//	loadimage(&background,_T("resourse/background/background1.jpg"), 1200, 700);
//	loadimage(&A[0], _T("resourse/�չ�Զ��/1.png"), c_height,c_width);//д���ˡ�
//	loadimage(&A1[0], _T("resourse/�չ�Զ��/1-1.png"), c_height, c_width);
//	loadimage(&A[1], _T("resourse/�չ�Զ��/2.png"), c_height, c_width);
//	loadimage(&A1[1], _T("resourse/�չ�Զ��/2-1.png"), c_height, c_width);
//	loadimage(&A[2], _T("resourse/�չ�Զ��/3.png"), c_height, c_width);
//	loadimage(&A1[2], _T("resourse/�չ�Զ��/3-1.png"), c_height, c_width);
//	loadimage(&A[3], _T("resourse/�չ�Զ��/4.png"), c_height, c_width);
//	loadimage(&A1[3], _T("resourse/�չ�Զ��/4-1.png"), c_height, c_width);
//	loadimage(&A[4], _T("resourse/�չ�Զ��/5.png"), c_height, c_width);
//	loadimage(&A1[4], _T("resourse/�չ�Զ��/5-1.png"), c_height, c_width);
//	loadimage(&A[5], _T("resourse/�չ�Զ��/6.png"), c_height, c_width);
//	loadimage(&A1[5], _T("resourse/�չ�Զ��/6-1.png"), c_height, c_width);
//	loadimage(&A[6], _T("resourse/�չ�Զ��/7.png"), c_height, c_width);
//	loadimage(&A1[6], _T("resourse/�չ�Զ��/7-1.png"), c_height, c_width);
//	loadimage(&A[7], _T("resourse/�չ�Զ��/8.png"), c_height, c_width);
//	loadimage(&A1[7], _T("resourse/�չ�Զ��/8-1.png"), c_height, c_width);
//	loadimage(&A[8], _T("resourse/�չ�Զ��/9.png"), c_height, c_width);
//	loadimage(&A1[8], _T("resourse/�չ�Զ��/9-1.png"), c_height, c_width);
//	loadimage(&A[9], _T("resourse/�չ�Զ��/10.png"), c_height, c_width);
//	loadimage(&A1[9], _T("resourse/�չ�Զ��/10-1.png"), c_height, c_width);
//	initgraph(1200, 700);
//	//FlipHorizontalͼƬ��ת
//	int tmp = 0;
//	int x = 0;
//	putimage(0, 0, &background);
//	putimage(0, 0, &TEST);
//	/*transparentimage3(NULL, 500, 400, &TEST);*/
//	//while (1) {
//	//	putimage(0, 0, &background);
//	//	if (GetAsyncKeyState(65))x -= 10;
//	//	if (GetAsyncKeyState(68))x += 10;//�޿���̨����,����������������룬����ע���Ĭ�����Ըĳ�Ӣ�ģ���Ȼ��sbС�׿�΢����������뷨����
//	//	putimage(x, 100, &A1[tmp], SRCAND);
//	//	putimage(x, 100, &A[tmp], SRCPAINT);
//	//		tmp++;
//	//		if (tmp > 9)tmp = 0;
//	//		Sleep(50);
//	//		cleardevice();
//	//}//�򵥵Ķ�̬ͼ
//	system("pause");
//}