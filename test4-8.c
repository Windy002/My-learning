#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

//实现一个函数，可以旋转字符串中的K个字符
//方法一：暴力求解
/*
void left_rotate(char arr[], int k)
{
	int len = strlen(arr);
	assert(k <= len);
	int i = 0;
	for (i = 0; i <k ; i++)
	{
		//左旋转一个字符
		char temp = arr[0];//temp 要首元素的地址
		int j = 0;
		//每个元素向前移动一个字符
		for ( j = 0; j <len-1 ; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[len -1] = temp; // temp放到最后一个元素
	}
}

int main()
{
	char arr[20] = { 0 };
	printf("请输入一串字符串:>");
	gets(arr);
	int k = 0;
	printf("请输入你需要左旋转的字符个数:>");
	scanf("%d", &k);
	left_rotate(arr, k);
	puts(arr);
	return 0;
}
*/

reverse(char* left,char* right)
{
	assert(left != NULL);
	assert(right != NULL);
	for (; left < right; left++, right--)//逆序前k个字符
	{
		char t = (*left);
		(*left) = (*right);
		(*right) = t;
	}
}
 //方法二：三步旋翻转
//1.逆序左边
//2.逆序右边
//3.逆序整体
void left_rotate(char arr[], int k)
{
	assert(arr);
	int len=strlen(arr);
	assert(k <= len);
	reverse(arr, arr+k-1);//逆序前k个字符 ，注意：传递的是地址哦！！！不是arr[i]内容哦！！！
	reverse(arr+k, arr+len - 1);//逆序后len-k个字符
	reverse(arr, arr+len - 1);//逆序整体
	 
	//封装成函数更好
	//int left = 0;
	//int right = 0;
	//char t = ' ';
	//for (left = 0,right=k-1; left < right; left++, right--)
	//{	
	//	 t = arr[left];
	//	arr[left] = arr[right];
	//	arr[right] = t;
	//}
	//for (left = k, right = len - 1; left < right; left++, right--)
	//{
	//	 t = arr[left];
	//	arr[left] = arr[right];
	//	arr[right] = t;
	//}
	//for (left = 0, right = len - 1; left < right; left++, right--)
	//{
	//	 t = arr[left];
	//	arr[left] = arr[right];
	//	arr[right] = t;
	//}
}
//int main()
//{
//	char arr[20] = { 0 };
//	printf("请输入一串字符串:>");
//	gets(arr);
//	int k = 0;
//	printf("请输入你需要左旋转的字符个数:>");
//	scanf("%d", &k);
//	left_rotate(arr, k);
//	puts(arr);
//	return 0;
//}
//------------------------------------------------------------------------------------------------


////实现一个函数 判断一个字符是否为另外一个字符旋转而得到的
////abcdef --6/0
////bcdefa --1
////cdefab --2
////defabc --3 
////efabcd --4
////fabcde --5
//int is_left_rotate(char* s1,char* s2)
//{
//	int len=strlen(s1);
//	int len2 = strlen(s2);
//	if (len != len2) //长度不一样肯定不是
//		return 0;
//
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		left_rotate(s1, 1); //旋转len次，每次旋转一个字符，每旋转一次就对比一下
//		int ret=strcmp(s1, s2);
//		if (ret == 0)
//			return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	char arr1[72] = { 0 };
//	char arr2[72] = { 0 };
//	printf("请输入你要判断的字符串:>");
//	gets(arr1); //自动回车的
//	printf("请输入你要与之对比的字符串:>");
//	gets(arr2);
//	int ret = is_left_rotate(arr1, arr2);
//	if (ret == 1)
//		printf("YES\n");
//	else
//		printf("NO\n");
//
//	return 0;
//}


//方法二：
//int is_rotate(char judge[], char compare[])
//{
//	int len1 = strlen(judge);
//	int len2 = strlen(compare);
//	if (len1 != len2)
//		return 0;
//	//1.在judge字符串中追加一个judge字符串
//	//使用strcat（judge，judge）这个函数会报错的：原理看鹏哥视频：P51
//	strncat(judge, judge, len1);
//	//strncat是把后面字符串的前n个字符加到前面的字符串去
//	// 因此不会报错
//	
//	char* ret = strstr;
//	//2.判断judge指向的字符串中是否含有compare
//	//strstr（str1，str2）是找字符串的--库函数
//	if (NULL == ret)
//	{
//		return 0;
//	}
//	else
//		return 1;
//}
//int main()
//{
//	int judge_arr[72] = { 0 };
//	int compare_arr[32] = { 0 };
//	printf("请输入你要判断的字符串:>");
//	gets(judge_arr); //自动回车的
//	printf("请输入你要与之对比的字符串:>");
//	gets(compare_arr);
//	int ret = is_rotate(judge_arr, compare_arr);
//	if (1 == ret)
//		printf("YES!\n");
//	else
//		printf("NO!\n");
//	return 0;
//}
//------------------------------------------------------------------------------------------------

//题目：杨氏矩阵
//内容：有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，
//请编写程序在这样的矩阵中查找某个数字是否存在。
//要求：时间复杂度小于O(N)；
//1 2 3
//4 5 6
//7 8 9
#define ROW 3
#define COL 3

//第一种方法：传值方法，好理解（不够装逼）
//int FindNum(int arr[ROW][COL], int num, int row, int col)
//{
//	int x = 0;
//	int y = COL - 1;
//	while (x<=ROW-1 && COL>=1) //需要多次判断
//	{ 
//		if (arr[x][y] > num)
//			{
//				y--;
//			}
//		else if (arr[x][y] < num)
//			{
//				x++;
//			}	
//		else  //这种情况就是等于了，直接返回即可。
//			{
//				printf("下标是：（%d,%d）\n"，x,y);//本来这个函数代码干干净净的，不要在里面多添加东西好一点
//				return 1;
//			}
//	}
//	return 0;
//}

//第二种方法：传地址，不容易理解（装逼）
int FindNum(int arr[ROW][COL], int num, int* px, int* py)
{
		int x = 0;
		int y = *py - 1;
		while (x<=*py-1 && y>=1) //需要多次判断
		{ 
			if (arr[x][y] > num)
			{
				y--;
			}
			else if (arr[x][y] < num)
			{
				x++;
			}
			else  //这种情况就是等于了，直接返回即可。
			{
				*px = x;
				*py = y;
				return 1;
			}
		}
		return 0;
}

int main()
{
	int arr[ROW][COL] = { {1,2,3}, {4,5,6},{7,8,9} };
	int num = 0;
	printf("请输入你需要查找的数字:>");
	scanf("%d", &num);
	int x = ROW;
	int y = COL;
	int ret = FindNum(arr, num, &x, &y);
	if (1 == ret)
	{
		//通过传地址，值既可以找到，还可以“带回来”，直接函数里面改变外面的坐标值
		printf("找得到！\n");
		printf("下标是（%d,%d）\n",x,y);
	}
	else
	{
		printf("找不到！");
	}
	return 0;
}