#include<stdio.h>
int main()
{ int i,h,l;
 for(l=1;l<=9;l++)
  {
  	for(i=l-1;i>0;i--)
  	 {
 	   printf("       ");
	   }// 打7个空格使和1*1=1 的长度一样 
 
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
