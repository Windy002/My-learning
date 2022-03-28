#include<stdio.h>
int main()
{ int i,h,l;
  for(l=1;l<=9;l++)
 {
  for(h=1;h<=9;h++)
 { if(h<l)
    printf("       ");
    else    
   printf("%d*%d=%2d ",l,h,h*l); 
  }
  putchar('\n');
}
  return 0;
}

