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
	printf("                  - ������ ��� -                 \n");
	printf("                                                  \n");
	printf("                                                  \n");
	printf("           ���Ͻô� �۾��� ������ �ּ���          \n");
	printf("                                                  \n");
	printf("                                                  \n");
	printf("                 =================                \n");
	printf("                   �л� ���� ����                 \n");
	printf("                 =================                \n");
	printf("                                                  \n");
	printf("                                                  \n");
	printf("                 =================                \n");
	printf("                    �ð�ǥ ����                   \n");
	printf("                 =================                \n");
	printf("                                                  \n");
	printf("                                                  \n");
	printf("                                                  \n");
	printf(" KNU                                              \n");
	printf("�ǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢ�\n");
}