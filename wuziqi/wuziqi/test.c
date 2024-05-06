#define  _CRT_SECURE_NO_WARNINGS 1
#include"wuziqi.h"

int main()
{
	menuView();
	return 0;
}
//测试题第二题：
//1）游戏逻辑判断 service
//	 用户输入 service
//	 用户输入数据非法判断/类型判断 service
//   界面展示 view
//	 游戏数据修改 service
//2）1 true
//	 2 false
//	 3 false
//	 4 true
//	 5 false
//测试题第三题：
//-------------数据设计---------------
//每张图的大小 int map[10][10];
//关卡 level
//	 0 表示墙壁
//	 1 表示可行动地块
//	 2 表示箱子
//	 5 表示人物
//-------------数据设计---------------
//-------------函数声明---------------
void menuVuew();
void levelView();
void gameView();
void winView();
void setView();
void rankView();