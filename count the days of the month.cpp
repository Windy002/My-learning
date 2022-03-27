#include <stdio.h>
#include <stdlib.h>
int main()
{ int a,b;

 printf("请输入此年份和日期(中间用空格隔开):");
  scanf("%d %d",&a,&b);
  if(b==2)
  printf((a%4==0&&a%100!=0||a%400==0)?"该月的天数为：29":"该月的天数为:28");
  else
  printf((b==1||b==3||b==5||b==7||b==8||b==10||b==12)?"该月的天数为：31":"该月的天数为：30");
    
return 0;
}
