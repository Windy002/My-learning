#include<stdio.h>
#include<string.h> 
#define n 20
int main()
{
	char str[n],*p=&str[0];
	printf("请输入一个十六进制数："); 
	gets(str);
	int l=strlen(str),i=0;
	long sum=0,base=1;
	for(i=0,p+=l-1;i<l;i++,p--,base*=16)
	{ 
	  switch(*p)
	  { case 'A':*p=10+48;break;//字符0的ASCII码为 48，加上48后再减去'0'就相当与把它转化为整型了 
	    case 'B':*p=11+48;break;
		case 'C':*p=12+48;break;
		case 'D':*p=13+48;break;
		case 'E':*p=14+48;break;
		case 'F':*p=15+48;break;
		default:break;
	  }
        sum+=(*p-'0')*base;//*p为字符，转化为整型表示形式 
	}
	printf("其对应的十进制数是:%d",sum); 
	
 }

