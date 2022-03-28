#include<stdio.h>
int main()
{ int h,l;  
  for(h=1;h<=9;h++)
 { 
   for(l=1;l<=9-h;l++)
   { printf("       ");}
   for(l=1;l<=h;l++)
   {printf("%d*%d=%2d ",l,h,h*l);}
    printf("\n");  
 }
return 0;
 } 
