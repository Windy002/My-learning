#include<stdio.h>
#include<string.h>
#include<stdlib.h> 

// 2-d array can not omit(ʡ��) column 

/* 
void test(int* arr[3][5])
{
	
}*/ //error 

//void test(int** arr)// is also error

/*
void test(int (*arr)[5]) //that's right
 {
 }

int main()
{
	int arr[3][5]={0};
	test(arr);

	return 0; 
 } 
 */
 
 /*
 void test1(int* p)
 {
 }
 
 void test2(char* p)
 {
 }
 
 int main()
 {
 	int a=1;
 	int* pa=&a;
 	char c='b';
 	char* pc=&c;
 	test1(&a); //ok
 	test1(pa); //ok
 	test2(&c);//ok
 	test2(pc);//ok
 }
 */
 
 /* 
 void test(int **p)
 {}
 int main()
 {
 	int *ptr;
	int** pp=&ptr;
	test(&ptr);
	test(pp);
	
	int* arr[2];
	test(arr); // ָ������Ҳ������������ָ�봫��   ��������ʾ��Ԫ��arr�ĵ�ַ ��Ԫ��Ϊint*���� 
		
 	return 0;
 }
 */
 
/* 
 int add(int x, int y)
 {
 	return x+y;
 }
 
 
 int main()
 {
 	int a=1;
 	int b=2;
 	int arr[7]={0};
 	printf("%d\n",add(a,b));
 	//&arr ; ����ĵ�ַ
	//arr �� ������Ԫ�صĵ�ַ
	//printf("%p\n%p\n",add,&add) ;
		//&�������ͺ��������Ǻ����ĵ�ַ 
	int (*p)(int ,int )=add;
	printf("%d",(*p)(a,b));
		
 	return 0;
 }
 */
 
/*
void PrintC(char* str)
 {
 	printf("%s",str);
 }
 int main()
 {
 	void (*PC)(char*)=PrintC;
 	(*PC)("Hello world"); //pointer to function
 	return 0;
  } 
*/
 
/*  
(*(void(*)())0)(); // ��0ǿ������ת���ɣ�viod��*������--����ָ������  ��ʱ0����һ�������ĵ�ַ
					//Ȼ���ٵ��øõ�ַ�ĺ��� 
					
					
void (*signal(int ,void(*)(int)))(int);
	//�����Ǻ�������,signal��һ�������������������ֱ��� int�� (����ָ��)void(*)(int) 
		//���ķ���������һ������ָ�� ����ָ��Ĳ�����int 
										
typedef void(*pfun_t)(int); //��void��*����int�� ����ת�����Լ������ pfun_t
pun_t signal(int,prin_t); // ������������һ����������ͬ������˼ 
 */ 

/* 
int add(int x,int y)
{
	return x+y;
 } 
 
int main()
{
	int a=2;
	int b=7;
	int (*pa)(int,int)=add;
	printf("%d\n",pa(a,b));
	printf("%d\n",(pa)(a,b)); 
	printf("%d\n",(*pa)(a,b));
	printf("%d\n",(**pa)(a,b));
	printf("%d\n",(***pa)(a,b)); //��һ���� ����ָ���ж����÷� 
	// ���� 	printf("%d\n",*pa(2,3)); �ǲ����Ե� 
	return 0;
}
*/


/*
int Add(int x,int y)
{
	return x+y;
}

int Sub(int x,int y)
{
	return x-y;
}

int Mul(int x,int y)
{
	return x*y;
}

int Div(int x,int y)
{
	return x/y;
}
int main()
{
	//ָ������

	int* arr[5];
	int (*pa)(int,int)=Add;
	printf("%d\n",Add(2,3));
	//��һ������ָ�����飬���������Դ�ź���ָ��
	int (*Pf[4])(int,int)={Add,Sub,Mul,Div};
	int i=0;
	for(i=0;i<4;i++)
	{
		printf("%d\n",Pf[i](2,7));
	} 
	 
	return 0;
  }  
*/


/*
char* my_strcopy(char* dest,const char* src)
{
	
}


int main()
{
	//дһ������ָ�룬ʹ���ܹ�ָ��my_strcopy 
	char* my_strcopy(char* dest,const char* src);
	char* (*pms)(char* dest,const char* src)
	// дһ������ָ�����飬�ܹ����4��my_strcopy�����ĵ�ַ
	char* (*pfa[4])(char* dest,const char* src)={my_strcopy,my_strcopy,my_strcopy,my_strcopy}
	return 0;
}  
*/  
  

/* 
void menu()
{
  printf("					********************\n");
  printf("					*** 1.add  2.sub ***\n");
  printf("					*** 3.mul  4.dev ***\n");
  printf("					***   0.exit     ***\n");
  printf("					********************\n");
 } 
 int Add(int x,int y)
 {
 	return x+y;
 }
 
 int Sub (int x, int y)
 {
 	return x-y;
  } 
  
 int Mul (int x, int y)
 {
 	return x*y;
  }
  
 int Div (int x, int y)
 {
 	return x/y;
  }  

void calc(int (*pf)(int x,int y))
{
	int x=0;
	int y=0;
	printf("����������������:>\n");
	scanf("%d%d",&x,&y);
	printf("%d\n",pf(x,y));  // �кܶ��ظ���Σ�ֻ�ǲ�����ͬ�Ĵ��� ����ʹ�ûص��������Ľ� 
 } 
  
int main()
{ 
  int input=0;
  int x=0;
  int y=0;
  do
  {
  	 menu();
     printf("��ѡ��:>");
     scanf("%d",&input);
  
     switch (input)
      {
    	case 1:
            calc(Add);
    		break;
    	case 2:
            calc(Sub);
    		break;
    	case 3:
            calc(Mul);
    		break;    		
    	case 4:
            calc(Div);
    		break;    
    	case 0:
    		printf("�˳���������\n");
    		break;   
		default:
		    printf("ѡ�����!\n");					
      } 
  }while(input);
}  
*/


/*
int main()
{	//��ʼ���ޡ��� 
	int arr[10]={0};
	int (*p)[10]=&arr; //ȡ������ĵ�ַ 
	
	int (*pfarr[4])(int,int); //pfarr ��һ������-����ָ������ 
	//ָ����ָ���ָ�� 
	int (*(*ppfarr)[4])(int,int);
	//ppfarr��һ��ָ����ָ�������ָ�룬ָ�������ָ�����ĸ�Ԫ�أ�ÿ��Ԫ���Ǻ���ָ��
	//ָ��������������ÿ�����������ͣ���������Ҳ������ 
	// 
  return 0;
}  
*/  
  

/* //�ص�����--ͨ���Ƕ��¼����������л�Ӧ 
void print(char* str)
{
	printf("hello,world!\n%s",str);
}

void test(void (*p)(char*))
{
	printf("test\n");
	p("I'm Turing's cat!\n");
}

int main()
{
	
	test(print);
	return 0;
}  
*/ 
  

int main()
{
	//ð��������
	//ð��������ֻ����������
	//qsort - ����������������� 
	int arr[]={1,3,4,6,5,7,8,2,0};
	int sz=sizeof(arr)/sizeof(arr[0]);
	Bubblesort(arr,sz)
	
	return 0; 
 } 
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
