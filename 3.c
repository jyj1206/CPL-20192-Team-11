#include <stdio.h>
#include <windows.h>

void textcolor(int color_number)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color_number);
} //�ؽ�Ʈ �� ����

void main()
{
	system("mode con cols=85 lines=32");
	textcolor(11);

	printf("�ǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢ�\n");
	printf("                                                                                    \n");
	printf("                                                                                    \n");
	printf("        ���ϴ� ���ǽ��� ������ �ּ���  (3��)                                        \n");
	printf("                                                                                    \n");
	printf("                                                                                    \n");
	printf("        ����������������������                                  \n");
	printf("        ��        ��        ��        ��        ��                                  \n");
	printf("        ��   351  ��   348  ��   345  ��   342  ��                                  \n");
	printf("        ��        ��        ��        ��        ��                                  \n");
	printf("        ����������������������                                  \n");
	printf("        ��        ��                  ��                                            \n");
	printf("        ��   354  ��                  ��                                            \n");
	printf("        ��        ��                  ��                                            \n");
	printf("        �������                  �����������������              \n");
	printf("        ��        ��                  ��        ��        ��        ��              \n");
	printf("        ��   355  ��                  ��   322  ��   324  ��   334  ��              \n");
	printf("        ��        ��                  ��        ��        ��        ��              \n");
	printf("        ��������������������������������              \n");
	printf("        ��        ��        ��        ��        ��        ��        ��              \n");
	printf("        ��   301  ��   309  ��   317  ��   323  ��   325  ��   333  ��              \n");
	printf("        ��        ��        ��        ��        ��        ��        ��              \n");
	printf("        ��������������������������������              \n");
	printf("                                                                                    \n");
	printf("                                                                                    \n");
	printf(" KNU                                                                                \n");
	printf("�ǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢ�\n");
}