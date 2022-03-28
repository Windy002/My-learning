#include<stdio.h>
int main()
{ 
  int h,l;
   for(h=1;h<=9;h++)
     {
       for(l=1;l<=h;l++)
          printf("%d*%d=%2d ",h,l,h*l);
        
       printf("\n");//Лђеп putchar('\n')
     }
     
   return 0;
 } 
