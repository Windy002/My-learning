#include <stdio.h>
#include <stdlib.h>
int main()
{ int a,b;

 printf("���������ݺ�����(�м��ÿո����):");
  scanf("%d %d",&a,&b);
  if(b==2)
  printf((a%4==0&&a%100!=0||a%400==0)?"���µ�����Ϊ��29":"���µ�����Ϊ:28");
  else
  printf((b==1||b==3||b==5||b==7||b==8||b==10||b==12)?"���µ�����Ϊ��31":"���µ�����Ϊ��30");
    
return 0;
}
