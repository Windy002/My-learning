#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main() {
//
//    int x = printf("Hello world!");
//    printf("\n%d", x); //˵��printf("Hello world!");�ķ�����Ϊ�ַ�������
//}

//int main()
//{
//    //int a = 7 / 2;
//    //int c = 7 % 2;//ȡģ
//    //printf("%d\n", a);
//    //printf("%d\n", c);
//    // / ��������������������ʱ�����������������������һ����������ʱ����Ǹ������ĳ���
//    float a = 7.0 / 2.0;
//    int c = 7 % 2;//ȡģ
//    //ȡģ������������������ֻ��������
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
//    //sizeof�ǲ��������ǵ�Ŀ������
//
//    int x = 10;
//    printf("%d\n", sizeof(x));//4
//    printf("%d\n", sizeof(int));//4
//    printf("%d\n", sizeof x);//4
//
//    int arr[10] = { 0 };
//    printf("%d\n", sizeof(arr));//40 ���������������Ĵ�С����λ���ֽ�
//    printf("%d\n", sizeof(arr[0]));//
//    printf("%d\n", sizeof(arr) / sizeof(arr[0]));//����Ĵ�С���ԣ�����һ��Ԫ�صĴ�С��10 - �����Ԫ�ظ���
//
//    int a = 10;
//    int b = a++;//����++����ʹ�ã���++
//    int b = a; a=a+1;
//
//    int b = ++a;//ǰ��++��ǰ++����ʹ��
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
//    //int a = int(3.14);����д��
//    printf("%d\n", a);
//
//   //3.14 ���渡������������Ĭ�����Ϊdouble����
//
//    return 0;
//}


//int main()
//{
//    int a = 0;
//    int b = 0;
//    if (a && b) // �ж�a����b�Ƿ�Ϊ�棬��a��b������0�����Ϊ�٣�����ӡ
//    {
//        printf("hello\n");
//    }
//
//    int x = 2;
//    int y = 0;
//
//    if (x || y) // �ж�x����y�Ƿ�Ϊ�棬ǡ��x=2Ϊ�棬���Ϊ�棬��ӡ
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
//    // ��3��ֵ��a������Ϊ3Ϊ�棬��ӡ
//    int b = 2;
//    if (b == 7)
//    {
//        printf("hehe\n");
//    }
//    // �ж�b�Ƿ����7��������7Ϊ�ٵ���0�����Ϊ�٣�����ӡ
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
//    // ���ű��ʽ����Ϊ���һ�����ʽ�Ľ��������d=5
//
//    return 0;
//}


//int main()
//{
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    int n = 3;
//    arr[n] = 20;//[]�����±����ò�����  arr��3����[]�Ĳ�����
//
//    return 0;
//}


////�������ò�����()
//int Add(int x, int y)
//{
//	return x+y;
//}
//
//int main()
//{
//    int sum = Add(2, 7);//()���Ǻ������ò�������Add,2,7����()�Ĳ�����
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