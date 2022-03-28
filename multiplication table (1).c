#include<stdio.h>
int main()
{ int h,l;
  for(h=1;h<=9;h++)
  { for(l=h;l<=9;l++) 
    printf("%d*%d=%2d ",h,l,h*l);
    putchar('\n');
  }
  return 0;
} 

