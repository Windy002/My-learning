#include<stdio.h>
#include<string.h> 
#define n 20
int main()
{
	char str[n],*p=&str[0];
	printf("������һ��ʮ����������"); 
	gets(str);
	int l=strlen(str),i=0;
	long sum=0,base=1;
	for(i=0,p+=l-1;i<l;i++,p--,base*=16)
	{ 
	  switch(*p)
	  { case 'A':*p=10+48;break;//�ַ�0��ASCII��Ϊ 48������48���ټ�ȥ'0'���൱�����ת��Ϊ������ 
	    case 'B':*p=11+48;break;
		case 'C':*p=12+48;break;
		case 'D':*p=13+48;break;
		case 'E':*p=14+48;break;
		case 'F':*p=15+48;break;
		default:break;
	  }
        sum+=(*p-'0')*base;//*pΪ�ַ���ת��Ϊ���ͱ�ʾ��ʽ 
	}
	printf("���Ӧ��ʮ��������:%d",sum); 
	
 }

