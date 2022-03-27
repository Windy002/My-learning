#include<stdio.h>
#include<string.h>
#include<stdlib.h> 
#include<math.h>

/*int main()------------------------------------------选择14 
{ int i=0,s=0;
  char ch[7]="12ab56";
  for(i=0;ch[i]>='0' && ch[i]<='9';i+=2) // 陷阱！！！注意！！！for循环 只要条件不满足就跳出循环 
	s=10*s+ch[i]-'0';
	
	printf("%d",s);
	
	system("PAUSE");
	return 0;
 } */
 
/* int main()   --------------------------------------填空7 
 { int i,t,j,a[8]={4,7,2,5,1,3,6,8};
   for(i=1;i<8;i++)
   { t=a[i];  //提前把自己的值存起来，当小于其他全部的数时就没有变化 
   	  for(j=i-1;j>=0&&t>a[j];j--) //从第i项开始和前一项比较直到第一项，大于前一项则把前一项的值赋给自己，如果小于跳出循环 
   	    a[j+1]=a[j];
   	
   	a[j+1]=t;  //再把值赋回给 刚刚去比较却小于其他的那一项 
   	
   }
for(i=0;i<8;i++)
printf("%d	",a[i]);

	system("PAUSE"); 	
return 0;
 }*/
 
/* int main()----------------------------------------填空15 
 { char a[40],b[20];
   int i,j;
   gets(a);gets(b);
   strcat(a,b);
   for(i=1;i<=strlen(a);i++)
     if(a[i]==' ')
      { for(j=i-1;j>=0;j--)
         a[j+1]=a[j]; //从空格项以前的数组后移一个位置 
         a[0]=' ';
	  }
 	printf("%s",a);
 	
 	system("PAUSE");	
return 0; 	
 }*/
 
/* int main()
 { int y,w,i,sum;
 	int m[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
 	printf("请输入年份:"); 
     scanf("%d",&y);
    printf("请该年元旦是星期几（1-7）:"); 
     scanf("%d",&w);
     
printf("黑色星期五为："); //每年都有不用担心 
  if(y%4==0&&y%100!=0||y%400==0)  m[2]=29; //(13-1)是因为13号到1号有12天 
 	for(sum=13-1,i=1;i<=12;i++)//（13-1）之后对天数取元旦星期的余数（相当于从二号开始数天数） 
  { if( ((sum%7+w)%7) ==5) // %7+w余数等于5 表示该月13号是星期五  再%7是保证余数小于7 ----则某一天的星期数就等于元旦星期加余数 
      printf("%d-%d-13\t",y,i);
	  sum+=m[i];  //把天数加起来 
  } 	
 
 	system("PAUSE");	
return 0; 	
 }*/
 
 /*int main()
 {char arr[100],*p=arr;
  int i=0;
  gets(arr);
  int l=strlen(arr);
  for(i=0;i<l;i++,p++)
  { if(*p>='A'&&*p<='Z')
     *p+=32;
   }
   printf("%s",arr);
   return 0;
  }*/
  
/*int main() 
{ char *p,*q;
 q=p=(char*)malloc(sizeof(char)*20);
	scanf("%s%s",p,q);
	printf("%s%s\n",p,q); //abcdef 
	
	
return 0	
}*/
 
 /*void fun(int x,int y,int cp,int dp )
 { cp=x*x+y*y;
   dp=x*x-y*y;
 }
int main()
{ int a=4,b=3,c=5,d=6;
  fun(a,b,c,d) ;
  printf("%d %d",c,d);//5 6 void 不返回  
	
	return 0;
 } */
 
 /*int d=1;
 void fun(int n)
 { int d=5;
   d+=n++;
  printf("%d, %d, ", d,n);
 }
 int main()
 { int a=3;
   fun(a); printf("%d, ", a);
   d+=a; printf("%d\n", d);
 }*/
 
/* int fun(int x, int y)
 { static int m=0,n=2;
   n+=m+1; m=n+x+y;
   return m;
 }
 int main()
 { int m=1;
   printf("%d, ",fun(4,m));
   printf("%d\n",fun(4,m));
 }*/
 
 /*int main()
 {  
   int a,b,c=-2;
   //scanf("%d%d",&a,&b);
  // printf("%d",a>b?a:b); 
   printf("%d",abs(c)) ;
 
 	return 0;
  } 
 */
 
/* int main()//==========气泡法 
 {
 	
  	int a[11], i,j,t; 
	printf("input 10 numbers:\n");
		for(i=1;i<11;i++)
			scanf("%d",&a[i]);
		printf("\n");
	for(j=1;j<=9;j++)
		for(i=1;i<=10-j;i++)
			if(a[i]>a[i+1])
	{	t=a[i];a[i]=a[i+1];a[i+1]=t;}
	printf("the sorted numbers:\n");
	for(i=1;i<11;i++)
	printf("%d",a[i]);
  } 
 
 */
 

int main()
{ int i, j;
for(i=1; i<=5; i++)
{ for(j=1; j<=5-i; j++) printf(" ");
for(j=1; j<=2*i-1; j++)
  if printf("*");
  else printf("#");
printf("\n");
}
return 0;
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
