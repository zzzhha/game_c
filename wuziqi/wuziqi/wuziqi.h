#pragma once
#include<stdio.h>

#define ROW 19
#define COL 19
int map[ROW][COL];//�������ĵط�

void menuView(void);//����map���� ��ӡ��Ϸ����
void gameView(void);
void init(void);//��ʼ������
void gameView_ShowMap();//չʾ����
int playerMove(int x, int y);//����ƶ�
int isWin(int x, int y);
void winView(void);
