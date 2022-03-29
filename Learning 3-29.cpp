#include<stdio.h>
#include<string.h>
#include<stdlib.h> 

// 2-d array can not omit(省略) column 

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
	test(arr); // 指针数组也可以用来二级指针传参   数组名表示首元素arr的地址 首元素为int*类型 
		
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
 	//&arr ; 数组的地址
	//arr ； 数组首元素的地址
	//printf("%p\n%p\n",add,&add) ;
		//&函数名和函数名都是函数的地址 
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
(*(void(*)())0)(); // 把0强制类型转换成：viod（*）（）--函数指针类型  此时0就是一个函数的地址
					//然后再调用该地址的函数 
					
					
void (*signal(int ,void(*)(int)))(int);
	//这里是函数声明,signal是一个函数它的两个参数分别是 int和 (函数指针)void(*)(int) 
		//它的返回类型是一个函数指针 函数指针的参数是int 
										
typedef void(*pfun_t)(int); //把void（*）（int） 类型转换成自己定义的 pfun_t
pun_t signal(int,prin_t); // 这两句代码和上一句代码表达的是同样的意思 
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
	printf("%d\n",(***pa)(a,b)); //都一样的 函数指针有多种用法 
	// 但是 	printf("%d\n",*pa(2,3)); 是不可以的 
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
	//指针数组

	int* arr[5];
	int (*pa)(int,int)=Add;
	printf("%d\n",Add(2,3));
	//用一个函数指针数组，这个数组可以存放函数指针
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
	//写一个函数指针，使它能够指向my_strcopy 
	char* my_strcopy(char* dest,const char* src);
	char* (*pms)(char* dest,const char* src)
	// 写一个函数指针数组，能够存放4个my_strcopy函数的地址
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
	printf("请输入两个操作数:>\n");
	scanf("%d%d",&x,&y);
	printf("%d\n",pf(x,y));  // 有很多重复多次，只是参数不同的代码 可以使用回调函数来改进 
 } 
  
int main()
{ 
  int input=0;
  int x=0;
  int y=0;
  do
  {
  	 menu();
     printf("请选择:>");
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
    		printf("退出计算器！\n");
    		break;   
		default:
		    printf("选择错误!\n");					
      } 
  }while(input);
}  
*/


/*
int main()
{	//开始套娃…… 
	int arr[10]={0};
	int (*p)[10]=&arr; //取出数组的地址 
	
	int (*pfarr[4])(int,int); //pfarr 是一个数组-函数指针数组 
	//指向函数指针的指针 
	int (*(*ppfarr)[4])(int,int);
	//ppfarr是一个指向函数指针数组的指针，指向的数组指针有四个元素，每个元素是函数指针
	//指针有两个参数，每个参数是整型，返回类型也是整型 
	// 
  return 0;
}  
*/  
  

/* //回调函数--通常是对事件或条件进行回应 
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
	//冒泡排序函数
	//冒泡排序函数只能排序整型
	//qsort - 可以排序任意的数据 
	int arr[]={1,3,4,6,5,7,8,2,0};
	int sz=sizeof(arr)/sizeof(arr[0]);
	Bubblesort(arr,sz)
	
	return 0; 
 } 
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
