#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

//ʵ��һ��������������ת�ַ����е�K���ַ�
//����һ���������
/*
void left_rotate(char arr[], int k)
{
	int len = strlen(arr);
	assert(k <= len);
	int i = 0;
	for (i = 0; i <k ; i++)
	{
		//����תһ���ַ�
		char temp = arr[0];//temp Ҫ��Ԫ�صĵ�ַ
		int j = 0;
		//ÿ��Ԫ����ǰ�ƶ�һ���ַ�
		for ( j = 0; j <len-1 ; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[len -1] = temp; // temp�ŵ����һ��Ԫ��
	}
}

int main()
{
	char arr[20] = { 0 };
	printf("������һ���ַ���:>");
	gets(arr);
	int k = 0;
	printf("����������Ҫ����ת���ַ�����:>");
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
	for (; left < right; left++, right--)//����ǰk���ַ�
	{
		char t = (*left);
		(*left) = (*right);
		(*right) = t;
	}
}
 //����������������ת
//1.�������
//2.�����ұ�
//3.��������
void left_rotate(char arr[], int k)
{
	assert(arr);
	int len=strlen(arr);
	assert(k <= len);
	reverse(arr, arr+k-1);//����ǰk���ַ� ��ע�⣺���ݵ��ǵ�ַŶ����������arr[i]����Ŷ������
	reverse(arr+k, arr+len - 1);//�����len-k���ַ�
	reverse(arr, arr+len - 1);//��������
	 
	//��װ�ɺ�������
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
//	printf("������һ���ַ���:>");
//	gets(arr);
//	int k = 0;
//	printf("����������Ҫ����ת���ַ�����:>");
//	scanf("%d", &k);
//	left_rotate(arr, k);
//	puts(arr);
//	return 0;
//}
//------------------------------------------------------------------------------------------------


////ʵ��һ������ �ж�һ���ַ��Ƿ�Ϊ����һ���ַ���ת���õ���
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
//	if (len != len2) //���Ȳ�һ���϶�����
//		return 0;
//
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		left_rotate(s1, 1); //��תlen�Σ�ÿ����תһ���ַ���ÿ��תһ�ξͶԱ�һ��
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
//	printf("��������Ҫ�жϵ��ַ���:>");
//	gets(arr1); //�Զ��س���
//	printf("��������Ҫ��֮�Աȵ��ַ���:>");
//	gets(arr2);
//	int ret = is_left_rotate(arr1, arr2);
//	if (ret == 1)
//		printf("YES\n");
//	else
//		printf("NO\n");
//
//	return 0;
//}


//��������
//int is_rotate(char judge[], char compare[])
//{
//	int len1 = strlen(judge);
//	int len2 = strlen(compare);
//	if (len1 != len2)
//		return 0;
//	//1.��judge�ַ�����׷��һ��judge�ַ���
//	//ʹ��strcat��judge��judge����������ᱨ��ģ�ԭ��������Ƶ��P51
//	strncat(judge, judge, len1);
//	//strncat�ǰѺ����ַ�����ǰn���ַ��ӵ�ǰ����ַ���ȥ
//	// ��˲��ᱨ��
//	
//	char* ret = strstr;
//	//2.�ж�judgeָ����ַ������Ƿ���compare
//	//strstr��str1��str2�������ַ�����--�⺯��
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
//	printf("��������Ҫ�жϵ��ַ���:>");
//	gets(judge_arr); //�Զ��س���
//	printf("��������Ҫ��֮�Աȵ��ַ���:>");
//	gets(compare_arr);
//	int ret = is_rotate(judge_arr, compare_arr);
//	if (1 == ret)
//		printf("YES!\n");
//	else
//		printf("NO!\n");
//	return 0;
//}
//------------------------------------------------------------------------------------------------

//��Ŀ�����Ͼ���
//���ݣ���һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ�
//���д�����������ľ����в���ĳ�������Ƿ���ڡ�
//Ҫ��ʱ�临�Ӷ�С��O(N)��
//1 2 3
//4 5 6
//7 8 9
#define ROW 3
#define COL 3

//��һ�ַ�������ֵ����������⣨����װ�ƣ�
//int FindNum(int arr[ROW][COL], int num, int row, int col)
//{
//	int x = 0;
//	int y = COL - 1;
//	while (x<=ROW-1 && COL>=1) //��Ҫ����ж�
//	{ 
//		if (arr[x][y] > num)
//			{
//				y--;
//			}
//		else if (arr[x][y] < num)
//			{
//				x++;
//			}	
//		else  //����������ǵ����ˣ�ֱ�ӷ��ؼ��ɡ�
//			{
//				printf("�±��ǣ���%d,%d��\n"��x,y);//���������������ɸɾ����ģ���Ҫ���������Ӷ�����һ��
//				return 1;
//			}
//	}
//	return 0;
//}

//�ڶ��ַ���������ַ����������⣨װ�ƣ�
int FindNum(int arr[ROW][COL], int num, int* px, int* py)
{
		int x = 0;
		int y = *py - 1;
		while (x<=*py-1 && y>=1) //��Ҫ����ж�
		{ 
			if (arr[x][y] > num)
			{
				y--;
			}
			else if (arr[x][y] < num)
			{
				x++;
			}
			else  //����������ǵ����ˣ�ֱ�ӷ��ؼ��ɡ�
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
	printf("����������Ҫ���ҵ�����:>");
	scanf("%d", &num);
	int x = ROW;
	int y = COL;
	int ret = FindNum(arr, num, &x, &y);
	if (1 == ret)
	{
		//ͨ������ַ��ֵ�ȿ����ҵ��������ԡ�����������ֱ�Ӻ�������ı����������ֵ
		printf("�ҵõ���\n");
		printf("�±��ǣ�%d,%d��\n",x,y);
	}
	else
	{
		printf("�Ҳ�����");
	}
	return 0;
}