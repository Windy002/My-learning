#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <Windows.h>


void setColor(unsigned short textColor = 0, unsigned short backColor = 7) {
	char command[9] = "color 07";		//默认颜色	
	command[6] = '0' + backColor;		//将backColor变量改为字符型 
	command[7] = '0' + textColor;		//将textColor变量改为字符型 
	system(command);				//调用系统函数 
}
int main()
{

	enum Color
	{
		black, blue, green, lakeBlue, red, purple, yellow, white, gray,
		lightBlue, lightGreen, lightSimpleGreen, lightRed, lightPurple, lightYellow, brightWhite
	};
	int i, j;
	for (j = 0; j < 42; j++)
	{
		printf(" ");
	}
	printf("送给你的最美圣诞树~\n");
	Sleep(1000);
	for (i = 0; i < 4; i++)
	{
		setColor(2, 0);
		for (j = 0; j < 50 - i; j++)//移动树的左右位置
		{
			printf(" ");
		}
		for (j = 0; j <= 2 * i; j++)
		{
			printf("*");
		}
		Sleep(500);
		printf("\n");
	}
	for (i = 0; i < 8; i += 2)
	{
		setColor(5, 7);
		for (j = 0; j < 49 - i; j++)//移动树的左右位置
		{
			printf(" ");
		}
		for (j = 0; j <= 2 * i + 2; j++)
		{
			printf("*");
		}
		Sleep(500);
		printf("\n");
	}
	for (i = 0; i < 16; i += 4)
	{
		setColor(9, 0);
		for (j = 0; j < 48 - i; j++)//移动树的左右位置
		{
			printf(" ");
		}
		for (j = 0; j <= 2 * i + 4; j++)
		{
			printf("*");
		}
		Sleep(500);
		printf("\n");
	}
	for (i = 0; i < 6; i++)
	{
		setColor(2, 7);
		for (j = 0; j < 48; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 5; j++)
		{
			printf("*");
		}
		Sleep(500);
		printf("\n");
	}


	system("pause"); return 0;
}