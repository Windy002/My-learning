#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


/*
int main()
{
	//字面常量：
	72;
	3.1415926535;
	'C'; //字符常量
	"aabbcc";//字符串常量
	//--字面常量可以理解为：就是一个简简单单的数值。
	
	// 变量--可以被修改
	int a = 2;
	a = 7;//把7赋给a（把a从2改变成了7）
	printf("%d\n", a);
	//--变量可以理解为：是一个空间，用来容纳常量（数值）。
	
	// const 修饰的常 变量
	const float e = 2.71828;
	printf("%f\n", e);
	// 这里的e是 const 修饰的常变量，本质是个变量，是不可以被直接修改的！！！
	// 例如：
	//e = 2.72; (error)--这里是不允许被直接修改的
	// --const修饰的常 变量可以理解为：只是把某个值锁定在在个空间里，但是并没有把空间变成值

	//证明
	//const int n = 10;
	//int arr[n] = {0};

	return 0;
}
*/


////#define定义的标识符常量：
//#define STR "qwert"
//int main()
//{
//#define G 9.8
//	printf("%s\n", STR);
//	float g = 0;
//	g = G;
//	printf("%.1f\n", g);
//
//	//证明：
//#define n 10
//	int arr[n] = { 0 };
//	return 0;
//}


//enum Color // enum是枚举类型 
//{		   // 定义了一个枚举类型 Color--三原色
//
//	//Color的所有可能取值：
//	RED, //用因为逗号分隔
//	GREEN,
//	BLUE//最后一个枚举常量结尾不用标点
//
//};
//
//enum Time
//{
//	Morning,
//	Afternoon,
//	Night 
//};
//
//int main()
//{
//	//演示
//	int a = 2;
//	enum Color c = GREEN; //c是创建的一个enum Color类型的变量，向内存申请了一个空间
//	// 创建变量的本质：是向内存申请一块空间
//						  //给这个空间c赋了一个GREEN的值（绿色）
//	enum Time t = Morning;
//	//打印演示：
//	printf("%d\n", GREEN);
//	printf("%d\n", Morning);
//	//GREEN = 7;
//	//Morning = 2;
//	return 0;
//}


//int main()
//{
//	printf("Good good study,");
//	printf("day day up\n");
//	char car[] = {'G','o','o','d','\0'};
//	char carr[] = {'s','t','u','d','y'};
//	printf("%s\n", car);
//	printf("%s\n", carr);
//	return 0;
//}

//
//
//int main()
//{
//	printf("D:\ts2019\ning.c");
//	return 0;
//}


////程序输出什么？
//int main()
//{
//	printf("%d\n", strlen("c:\test\628\test.c"));
//	return 0;
//}


//int main()
//{
//	//三字母词
//	// 在早期的编译器下：\??)  -- >  ]  ( \??) 会被解析为  ] )
//	// 在早期的编译器下：\??(  -- >  [  ( \??) 会被解析为  ] )
//	return 0;
//}


int func1(int x, int y)
{
	return x * y;
}

/*C语言风格注释
int func2(int x, int y)
{
return x / y;
}
*/

//int main()
//{
////C++注释风格
////	int e = 7;
//// 	int b = 2;
////	调用func1函数
//	printf("%d\n", func1(2, 3) );
//	return 0;
//}


//int main()
//{
//	printf("我要学习\n");
//	printf("请选择：1.坚持努力 0.懒惰放弃\n");
//	int Learning = 0;
//	scanf("%d", &Learning);
//	if (Learning == 1)
//	{
//		printf("坚持努力:你会有高薪工作和美好未来!\n");
//	}
//	else
//	{
//		printf("懒惰放弃：回家种田!\n");
//	}
//	return 0;
//}


//int main()
//{
//	printf("开始学习！\n");
//	int day = 0;
//	while (day < 4500)
//	{
//		printf("厚积继续努力认真学习！\n");
//		day++;
//	}
//	if (day >= 4500)
//	{
//		printf("厉害了，走上人生巅峰！");
//	}
//	return 0;
//}


// 函数
//int Add(int x, int y)
//{
//	return (x + y);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int retu = 0;
//	printf("请输入两个操作数：>\n");
//	scanf("%d%d", &a, &b);
//	retu = Add(a, b);
//	printf("%d + %d = %d\n", a, b, retu);
//	return 0;
//}


// 数组的使用
int main()
{
	int i = 0;
	int array[7] = { 1,2,3,4,5,6,7 };
	for (i = 0; i < 7; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
	return 0;
}