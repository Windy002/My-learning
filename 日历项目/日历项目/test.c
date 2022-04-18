#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <conio.h>

void menu()
{
	printf("Pls input the year;\n");
	printf("Press [enter] for now;\n");
	printf("Press [Esc] for exit.\n");
	printf("-->");
}
int scan(int year, int month)
{
	year = _getch();
	while (year != 27 && year != '\n' || year < 0)
	{
		if (year != 27 && year != '\n')
		{
			scanf("%d", &year);
			break;
		}
		else if (year < 0)
		{
			printf("你的输入有误，请重新输入：>\n");
		}

	}
	putchar('\n');
	if (year == 27)
		return 0;
	printf("Pls input the month:");
	month = _getch();
}
int main()
{
	int year = 0;
	int month = 0;
	int ret = 0;
	do
	{
		menu();
		ret = scan(year, month);
	} while (ret);
	return 0;
}
