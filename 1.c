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
	printf("\n");
	printf("\n");
	printf("            ���ϴ� ���� ������ �ּ���           \n");
	printf("\n");
	printf("\n");
	printf("                   ������                \n");
	printf("                   ��  5   ��                \n");
	printf("                   ������                \n");
	printf("                   ��  4   ��                \n");
	printf("                   ������                \n");
	printf("                   ��  3   ��                \n");
	printf("                   ������                \n");
	printf("                   ��  2   ��                \n");
	printf("                   ������                \n");
	printf("                   ��  1   ��                \n");
	printf("                   ������                \n");
	printf("                   ��  B1  ��                \n");
	printf("                   ������                \n");
	printf("\n");
	printf("\n");
	printf(" KNU                                              \n");
	printf("�ǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢ�\n");
}