#include <stdio.h>
#include <windows.h>

void textcolor(int color_number)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color_number);
} //�ؽ�Ʈ �� ����

void main()
{
	system("mode con cols=85 lines=24");
	textcolor(11);

	printf("�ǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢ�\n");
	printf("                                                                                    \n");
	printf("                                                                                    \n");
	printf("        ���ϴ� ���ǽ��� ������ �ּ���  (2��)                                        \n");
	printf("                                                                                    \n");
	printf("                                                                                    \n");
	printf("        ������������                                                      \n");
	printf("        ��        ��        ��                                                      \n");
	printf("        ��  B101  ��  B102  ��                                                      \n");
	printf("        ��        ��        ��                                                      \n");
	printf("        ������������                                                      \n");
	printf("                                                                                    \n");
	printf("                                                                                    \n");
	printf(" KNU                                                                                \n");
	printf("�ǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢ�\n");
}