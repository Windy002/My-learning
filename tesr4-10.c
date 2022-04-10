#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main() {
//
//    int x = printf("Hello world!");
//    printf("\n%d", x); //说明printf("Hello world!");的返回至为字符串长度
//}

//int main()
//{
//    //int a = 7 / 2;
//    //int c = 7 % 2;//取模
//    //printf("%d\n", a);
//    //printf("%d\n", c);
//    // / 两个操作数都是整数的时候，是整数除法，如果至少有一个浮点数的时候就是浮点数的除法
//    float a = 7.0 / 2.0;
//    int c = 7 % 2;//取模
//    //取模操作符的两个操作符只能是整数
//
//    printf("%.2f\n", a);//--3.50
//    printf("%d\n", c);  //--3
//
//
//    return 0;
//}






//int main()
//{
// 
//    //sizeof是操作符，是单目操作符
//
//    int x = 10;
//    printf("%d\n", sizeof(x));//4
//    printf("%d\n", sizeof(int));//4
//    printf("%d\n", sizeof x);//4
//
//    int arr[10] = { 0 };
//    printf("%d\n", sizeof(arr));//40 计算的是整个数组的大小，单位是字节
//    printf("%d\n", sizeof(arr[0]));//
//    printf("%d\n", sizeof(arr) / sizeof(arr[0]));//数组的大小除以，其中一个元素的大小，10 - 数组的元素个数
//
//    int a = 10;
//    int b = a++;//后置++，先使用，后++
//    int b = a; a=a+1;
//
//    int b = ++a;//前置++，前++，后使用
//    a=a+1;b=a;
//
//    int a = 10;
//    //int b = a--;
//    //b=a; a=a-1;
//    int b = --a;
//    //a = a - 1; b = a;
//    printf("%d\n", b);// 9
//    printf("%d\n", a);// 9
//
//    int a = (int)3.14;
//    //int a = int(3.14);错误写法
//    printf("%d\n", a);
//
//   //3.14 字面浮点数，编译器默认理解为double类型
//
//    return 0;
//}


//int main()
//{
//    int a = 0;
//    int b = 0;
//    if (a && b) // 判断a并且b是否都为真，而a、b都等于0，结果为假，不打印
//    {
//        printf("hello\n");
//    }
//
//    int x = 2;
//    int y = 0;
//
//    if (x || y) // 判断x或者y是否为真，恰好x=2为真，结果为真，打印
//    {
//        printf("hello\n");
//    }
//
//    int t = 2;
//    int k = 7;
//
//    int ret = (t > k ? a : b); 
//
//    return 0;
//}



//int main()
//{
//    int a = 7;
//    if (a = 3)
//    {
//        printf("hehe\n");
//    }
//    // 把3赋值给a，条件为3为真，打印
//    int b = 2;
//    if (b == 7)
//    {
//        printf("hehe\n");
//    }
//    // 判断b是否等于7，不等于7为假等于0，结果为假，不打印
//    return 0;
//}


//int main()
//{
//    int x = 10;
//    int y = 20;
//    int z = 0;
//    //       z=8    x=28    5
//    int d = (z=x-2, x=y+z, z-3);
//    printf("%d\n", d);
//    // 逗号表达式整体为最后一个表达式的结果，所以d=5
//
//    return 0;
//}


//int main()
//{
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    int n = 3;
//    arr[n] = 20;//[]就是下标引用操作符  arr和3就是[]的操作数
//
//    return 0;
//}


////函数调用操作符()
//int Add(int x, int y)
//{
//	return x+y;
//}
//
//int main()
//{
//    int sum = Add(2, 7);//()就是函数调用操作符，Add,2,7都是()的操作数
//
//    return 0;
//}


int main()
{
	int a = 10;
	auto int x = 10;
	printf("%d,%d", a, x);
	return 0;
}