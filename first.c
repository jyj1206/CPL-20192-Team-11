#include <stdio.h>
#include <windows.h>
#include <time.h>
#define DAY_OF_WEEK_SIZE 7

const static char* DAY_OF_WEEK[DAY_OF_WEEK_SIZE] = {
	" Sun ", " Mon ", " Tue ", " Wed ", " Thu ", " Fri ", " Sat "
}; //���ϼ���

void CursorView(char show)//Ŀ�������
{
	HANDLE hConsole;
	CONSOLE_CURSOR_INFO ConsoleCursor;

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	ConsoleCursor.bVisible = show;
	ConsoleCursor.dwSize = 1;

	SetConsoleCursorInfo(hConsole, &ConsoleCursor);
}

void textcolor(int color_number)

{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color_number);
} //�ؽ�Ʈ �� ����

void main()
{
	textcolor(11);
	system("mode con cols=50 lines=30"); //cols = ĭ/�� (����)  lines = ��/�� (����)
	printf("�ǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢ�\n");
	printf("\n");
	printf("\n");
	printf("         ��                           ��          \n");
	printf("         ��  �� ���ǽ� ���� ���α׷�  ��          \n");
	printf("         ��                           ��          \n");
	printf("         ��          IT5ȣ��          ��          \n");
	printf("         ��                           ��          \n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("                  �̸� : �̰���                   \n");
	printf("                  �й� : 2019111441               \n");
	printf("                    Ű : 1234                     \n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("                                                  \n");
	printf(" KNU                                              \n");
	printf("�ǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢ�\n");
	while (1)
	{
		textcolor(11);
		system("mode con cols=50 lines=30"); //cols = ĭ/�� (����)  lines = ��/�� (����)
		printf("�ǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢ�\n");
		printf("\n");
		printf("\n");
		printf("         ��                           ��          \n");
		printf("         ��  �� ���ǽ� ���� ���α׷�  ��          \n");
		printf("         ��                           ��          \n");
		printf("         ��          IT5ȣ��          ��          \n");
		printf("         ��                           ��          \n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("                  �̸� : �̰���                   \n");
		printf("                  �й� : 2019111441               \n");
		printf("                    Ű : 1234                     \n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("                                                  \n");
		printf(" KNU                                              \n");
		printf("�ǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢ�\n");
		time_t now = time(NULL);
		struct tm* time = localtime(&now);

		int year = time->tm_year + 1900;
		int month = time->tm_mon + 1;
		int dayOfMonth = time->tm_mday;
		int dayOfWeek = time->tm_wday;
		int hour = time->tm_hour;
		int minute = time->tm_min;
		int second = time->tm_sec;

		printf("%d-%d-%d [%s] %d:%d:%d\n", year, month, dayOfMonth, DAY_OF_WEEK[dayOfWeek], hour, minute, second);
		system("cls");
	}
}