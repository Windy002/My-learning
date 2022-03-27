#include<stdio.h>
#include<string.h>
/*
enum DAY
{ 
 mon=1,tue,wed,thu,fri
} day;

int main()
{
	day=mon;
	printf("%d",day);
	return 0;
 } 
 */
 
 //write a function point
 
/* Max(int x, int y)
 {
 	 return x>y?x:y ;
 }
 
  
int main() 
 
 {
 	int x=0;
	int y=0;
	int z=0;
	
	printf("Please input three numbers,and I'll compare their sizes!\n");
 	scanf("%d%d%d",&x,&y,&z);
 	printf("Max=%d",Max(Max(x,y),z));
 	return 0; 
 }
 
*/ 
 
 
  //字符串 
 /*
 int main()
 {
 	char ar[]="Hello,";
 	char arr[]="world！";
	char arra[]="--from wind 2022.3.22";
	char array[20];
	
	printf("%s",strcat(ar,arr));
	printf("%s",strcpy(array,arra)); 
 	return 0;
 }
 */
 

/* int main()
{
	
	char arr[]="abcdef";
	char* pc=arr;
	printf("%s\n",arr);
	printf("%s\n",pc);
	return 0;
 } 
 */
 
 
/* int main()
 {
 	char* p="abcdef";//p is a constant a sequence of character
 	printf("%s\n",p);
 	return 0;
 }
 */
 
/* int main()
 {
 	char arr1[]="abcdef";
 	char arr2[]="abcdef";
 	char* p1="abcdef"; // -> make it be: const char* p1
 	char* p2="abcdef"; // -> make it be: const char* p2
 	
 		if(p1==p2)
	 {
	 	printf("hehe\n");
	  } 
	  else
	  {
	  		printf("haha\n");
	  }
	if(arr1==arr2)
	 {
	 	printf("hehe\n");
	  } 
	  else
	  {
	  		printf("haha\n");
	  } 
 	return 0;
 }
 */
 
 // 指针数组  is array, is used to store pointer


/* int main()
{
	int arr[10]={0};
	char ch[5]={0};//字符数组
	int* parr[4]; //store integer pointer--pointer array
	char* pch=[5];// store character pointer--pointer character array 
	return 0;
}
 */
 
 
 /* int main()
 {
 	int a=10;
 	int b=20;
 	int c=30;
 	int d=40;
 	
 	int* arr[4]={&a,&b,&c,&d};
 	int i=0;
 	for(i=0;i<4;i++)
 	{
 		printf("%d ",*(arr[i]));
	 }
 	return 0;
 }
 */
 
 
/* int main()  // 指针数组 
 {
 	int arr1[]={1,2,3,4,5};
 	int arr2[]={2,2,3,4,5}; 	
  	int arr3[]={3,2,3,4,5};
	int* parr[]={arr1, arr2, arr3};
	int i=0;
	int j=0;
	for(i=0;i<3;i++)
	{
	  for(j=0;j<5;j++)
	  {
	  	printf("%d ", *(parr[i]+j));
	  }
	}	
 	return 0;
 	
 }
 */
  
  
/*  // array point (数组指针)  exactly is pointer 
 int main()
 {
 	int *p=NULL;      // pointer to integer --can store integer
 	char *pc=NULL;    // pointer to character--        character
 	
 	                  // pointer to array--can store array
 	int arr[10]={1,2,3,4,5,6,7,8,9,10};
 	//arr 首元素地址
    //&arr[0]-首元素地址 
	//&arr-数组的地址 
 	 	
 	int (*p)[10]=&arr; 
 	                  // [] is（结合性） more associative than *  
 	
 	                  // above p is point to array pointer
 	      
 	return 0;
 }
 */
 
 
/* int main()
 {
 	char* arr[5];
 	char* (*pa)[5]=&arr;
// 	in contrast
 	int arr7[7]={0};
 	int (*pa7)[7]=&arr7;
 	return 0;
 }
 */


/* int main()
{
	char* arr[5];
	char* (*pa)[5]=&arr; //
	
	int arr2[10]={0};
	int (*pa2)[10]=&arr2; 
	
	return 0;
}
*/


/* int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int (*pa)[10]=&arr;
	int i=0;
	for(i=0;i<10;i++)
	{
		// printf("%d ",(*pa)[i]);
		// *pa (is equivalent to array name)相当于数组名 
		 //is also useful 
		 printf("%d ",*(*pa+i));
	}
	
	int ar[10]={1,2,3,4,5,6,7,8,9,10};
	int *p=ar; // array (first) elemet pointer
	for(i=0;i<10;i++)
	{
		printf("%d ",*(p+i));
	}
		
	return 0;
}
*/


void print1(int arr[3][7],int x,int y) // parameter is array
{
	int i=0;
	int j=0;
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
					printf("%d ",arr[i][j]);
		}
			printf("\n");
	}

}
void print2(int (*p)[7],int x,int y) // parameter is pointer
{
	 int i=0;
	 for(i=0;i<x;i++)
	 {
	 	int j=0;
	 	for(j=0;j<y;j++)
	 	{
	 		printf("%d ",p[i][j]);
	 		printf("%d ",(*(p+i))[j]); // (p+i) skip i row 	
			 						   // *(p+i)+j is i row j column's address
			 						   // *(*(p+i)+j) is i row j column element
	 		// equal to this : printf("%d ",(*(p+i))[j]); 

		 }
		 putchar('\n');
	  } 
}
int main()
{
	int arr[3][7]={{1,2,3},{4,5,6},{7,8,9}};
	print1(arr,3,7); //arr--array name and is first element address
					// 2-d array need to inmagine as a 1-d array, 
					// and first 'element' address is first-row's adress,
    putchar('\n');	
 	print2(arr,3,7);
 	
/*	int array[10]={1,2,3,4,5,6,7,8,9,10};
 	int i=0;
 	int* p=array;
 	for(i=0;i<10;i++)
 	{
  		printf("%d ",*(p+i)); 
		printf("%d ",*(array+i));		
  		printf("%d ",array[i]); 
  		printf("%d;  ",p[i]); 
  		
		  						 // four have the same function 
  								 // arr[i]==*(arr+1)==*(p+1)==p[i] 
								所以【i】==*(arr+i) 就是找到arr的地址然后向后找第i个元素 
	 } 
*/
	return 0;
 } 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
