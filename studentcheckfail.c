#include <stdio.h>
#include <windows.h>

void textcolor(int color_number)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color_number);
} //�ؽ�Ʈ �� ����

void main()
{
	system("mode con cols=50 lines=30");
	textcolor(11);
	printf("�ǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢ�\n");
	printf("                                                  \n");
	printf("                                                  \n");
	printf("                  -  �л� ��ȸ  -                 \n");
	printf("                                                  \n");
	printf("                                                  \n");
	printf("                �й��� �Է����ּ���               \n");
	printf("                                                  \n");
	printf("                                                  \n");
	printf("                    2019111441                    \n");
	printf("                    ==========                    \n");
	printf("                                                  \n");
	printf("--------------------------------------------------\n");
	printf("                                                  \n");
	printf("                                                  \n");
	printf("             ��ȸ�� �л������� �����ϴ�           \n");
	printf("                                                  \n");
	printf("                                                  \n");
	printf(" KNU                                              \n");
	printf("�ǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢ�\n");
}