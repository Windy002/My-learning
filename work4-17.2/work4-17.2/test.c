#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
//void bubble(int arr[], int len)
//{
//	int i = 0;
//	for (i = 0; i < len - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < len - 1 - i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	bubble(arr, 10);
//	printf("MAX=%d\n", arr[0]);
//	return 0;
//}

//int main()
//{
//	int rank = 1;
//	int coll = 1;
//	for (rank = 1; rank <= 9; rank++)
//	{
//		for (coll = 1; coll <= rank; coll++)
//		{
//			printf("%dx%d =%d	", rank, coll, rank * coll);
//		}
//		putchar('\n');
//	}
//	return 0;
//}


//int main() //���ֲ���
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int left =0;
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int right = len - 1;
//	int middle = (left + right) / 2;
//
//	int target = 0;
//	scanf("%d", &target);
//	
//	while (left <= right )
//	{
//		if (arr[middle] < target)
//		{
//			left = middle + 1;
//		}
//		else if (arr[middle] > target)
//		{
//			right = middle - 1;
//		}
//		else
//		{
//			printf("�±꣺%d\n",left);
//			break;
//		}
//
//		middle = (left + right) / 2;
//	}
//
//	if (left > right)
//		printf("�Ҳ���!\n");
//
//	return 0;
//}


//--------------------------------��������Ϸ
//#include <stdlib.h>
//#include <time.h>
//
//void menu()
//{
//	printf("######################\n");
//	printf("######################\n");
//	printf("######  1.PLAY	######\n");
//	printf("######  0.EXIT	######\n");
//	printf("######################\n");
//	printf("######################\n");
//}
//
//void game()
//{
//	int ret = rand()%100+1;//���������
//	/*printf("%d\n", ret);*/
//	int guess = 0;
//	while (1)
//	{
//		printf("�����������֣�");
//		scanf("%d", &guess);
//		if (guess == ret)
//		{
//			printf("��ϲ�㣬�¶��ˣ�\n");
//			break;
//		}
//		else if (guess > ret)
//			printf("�´��ˣ�");
//		else if (guess < ret)
//			printf("��С�ˣ�");
//	}
//
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//�������������㣨ֻ������һ�Σ�
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1 :
//			printf("PLAY\n");
//			game();
//			break;
//		case 0:
//			printf("EXIT\n");
//			break;
//		default:
//			printf("�����������������!\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//void exchange(int* p1, int* p2)
//{
//	int tmp = (*p1);
//	(*p1) = (*p2);
//	(*p2) = tmp;
//	printf("������:>\nnum1=%d\nnum2=%d", *p1, *p2);
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	printf("������һ����num1=");
//	scanf("%d", &num1);
//	printf("�����������num2=");
//	scanf("%d", &num2);
//	exchange(&num1, &num2);
//	return 0;
//}

//void Mul_table(int time)
//{
//	int i = 0;
//	for (i = 1; i <= time; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%-2d*%-2d=%-2d ", i, j, i * j);
//		}
//		putchar('\n');
//	}
//}
//
//int main()
//{
//	int times = 0;
//	scanf("%d", &times);
//	Mul_table(times);
//	return 0;
//}


#include <stdio.h>
#include<math.h>
int main()
{
	float x, y;
	void count(float x, float y);
	printf("������������꣺");
	scanf("%f,%f", &x, &y);
	count(x, y);
	return 0;
}
void count(float x, float y)
{
	float distance, a, b;
	a = fabs(x);
	b = fabs(y);
	distance = sqrt((a - 2.0) * (a - 2.0) + (b - 2.0) * (b - 2.0));
	if (distance <= 1)
	{
		if (x > 0 && y > 0)
		{
			printf("5");
		}
		else if (x > 0 && y < 0)
		{
			printf("7");
		}
		else if (x < 0 && y < 0)
		{
			printf("10");
		}
		else if (x < 0 && y>0)
		{
			printf("18");
		}
	}
	else
	{
		printf("0");
	}
}