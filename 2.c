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
	printf("        ���ϴ� ���ǽ��� ������ �ּ���  (2��)                                        \n");
	printf("                                                                                    \n");
	printf("                                                                                    \n");
	printf("        ����������������������                                  \n");
	printf("        ��        ��        ��        ��        ��                                  \n");
	printf("        ��   251  ��   248  ��   245  ��   242  ��                                  \n");
	printf("        ��        ��        ��        ��        ��                                  \n");
	printf("        ����������������������                                  \n");
	printf("        ��   254  ��                  ��                                            \n");
	printf("        �������                  ��                                            \n");
	printf("        ��   255  ��                  ��                                            \n");
	printf("        �������                  �����������������              \n");
	printf("        ��        ��                  ��        ��        ��        ��              \n");
	printf("        ��   256  ��                  ��   222  ��   224  ��   234  ��              \n");
	printf("        ��        ��                  ��        ��        ��        ��              \n");
	printf("        ��������������������������������              \n");
	printf("        ��        ��        ��        ��        ��        ��        ��              \n");
	printf("        ��   201  ��   207  ��   213  ��   219  ��   225  ��   233  ��              \n");
	printf("        ��        ��        ��        ��        ��        ��        ��              \n");
	printf("        ��������������������������������              \n");
	printf("                                                                                    \n");
	printf("                                                                                    \n");
	printf(" KNU                                                                                \n");
	printf("�ǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢ�\n");
}