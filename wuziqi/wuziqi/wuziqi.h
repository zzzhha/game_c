#pragma once
#include<stdio.h>

#define ROW 19
#define COL 19
int map[ROW][COL];//玩家下棋的地方

void menuView(void);//根据map数组 打印游戏棋盘
void gameView(void);
void init(void);//初始化棋盘
void gameView_ShowMap();//展示棋盘
int playerMove(int x, int y);//玩家移动
int isWin(int x, int y);
void winView(void);
