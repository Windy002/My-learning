#include<stdio.h>
int main()
{ int i,h,l;
 for(l=1;l<=9;l++)
  {
  	for(i=l-1;i>0;i--)
  	 {
 	   printf("       ");
	   }// ��7���ո�ʹ��1*1=1 �ĳ���һ�� 
 
 	 for(h=l;h<=9;h++)
  	 {
 	   printf("%d*%d=%2d ",l,h,h*l);
 	  }
 	    putchar('\n');
  }
return 0;
}
//1*1=1 
//              
