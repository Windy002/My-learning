#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//BC131-kikiѧ������ƻ���--
//int main()
//{
//    printf("printf(\"Hello world!\\n\");\n");
//    printf("cout << \"Hello world!\" << endl;\n");
//    return 0;
//}
//--------------------------------------------------------------------------------------------



// BC123-С�����������
//int main()
//
//{
//
//    int a = 0, b = 0, c = 0, d = 0;
//
//    scanf("%d %d %d %d", &a, &b, &c, &d);
//
//    int max = a;
//
//    if (b > max)
//
//        max = b;
//
//    if (c > max)
//
//        max = c;
//
//    if (d > max)
//
//        max = d;
//
//    printf("%d\n", max);
//
//    return 0;
//
//}
//--------------------------------------------------------------------------------------------



//BC27-������������
//#define PI 3.1415926 
//int main()
//{
//    float r = 0;
//    scanf("%f", &r);
//    float v = 4 / 3.0 * PI * r * r * r;
//    printf("%.3f", v);
//    return 0;
//}
//--------------------------------------------------------------------------------------------

////BC25-��������ָ��
//int main()
//{
//    int w = 0;
//    int h = 0;
//    scanf("%d %d",&w,&h);
//    double fh = ((double)h / 100.0);
//    double BIM = (double)w / (fh * fh);
//    printf("%.2lf\n", BIM);
//    return 0;
//}


//--------------------------------------------------------------------------------------------
//BC5 ţţѧ˵��֮-�ַ�
//int main()
//{
//    char x='a';
//    scanf("%c", &x);
//    printf("%c\n", x);
//    return 0;
//}


//--------------------------------------------------------------------------------------------
//BC6 ţţ�ĵڶ�������
//int main()
//{
//    int x, y, z;
//    scanf("%d %d %d", &x, &y, &z);
//    printf("%d", y);
//    return 0;
//}


//int main()
//{
//    char x = 'x';
//    scanf("%c", &x);
//    char arr[3][3];
//    for (int i = 0; i < 3; i++)
//    {
//        for (int j = 0; j < 3; j++)
//        {
//            arr[i][j] = x;
//            printf("%c ", arr[i][j]);
//        }
//        putchar('\n');
//    }
//    return 0;
//}


//BC8 ţţ���ַ�����
//#include<string.h>
//int main()
//{
//    char x='0';
//    scanf("%c", &x);
//    for (int i = 0; i < 3; i++)
//    {
//        for (int j = 0; j < 2 - i; j++)
//        {
//            printf(" ");
//        }
//        for (int j = 0; j < 2 * i + 1; j++)
//        {
//            printf("%c",x);
//        }
//        printf("\n");
//    }
//    for (int i = 0; i < 2; i++)
//    {
//        for (int j = 0; j < i + 1; j++)
//        {
//            printf(" ");
//        }
//        for (int j = 0; j < 3 - 2 * i; j++)
//        {
//            printf("%c", x);
//        }
//        printf("\n");
//    }
//    return 0;
//}


//BC10 ʵ����������
int main()
{
    float x = 0;
    scanf("%f", &x);
    if (x > (int)x+0.4)
        x = ((int)x + 1);

        printf("%.0f", x);
    return 0;
}