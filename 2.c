#include <stdio.h>
#include <windows.h>

void textcolor(int color_number)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color_number);
} //텍스트 색 설정

void main()
{
	system("mode con cols=85 lines=32");
	textcolor(11);
	
	printf("▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤\n"); 
	printf("                                                                                    \n");
	printf("                                                                                    \n");
	printf("        원하는 강의실을 선택해 주세요  (2층)                                        \n");
	printf("                                                                                    \n");
	printf("                                                                                    \n");
	printf("        ■■■■■■■■■■■■■■■■□□□□□                                  \n");
	printf("        ■        ■        ■        ■        □                                  \n");
	printf("        ■   251  ■   248  ■   245  ■   242  □                                  \n");
	printf("        ■        ■        ■        ■        □                                  \n");
	printf("        ■■■■■■■■■■■■■■■■□□□□□                                  \n");
	printf("        □   254  □                  □                                            \n");
	printf("        □□□□□□                  □                                            \n");
	printf("        □   255  □                  □                                            \n");
	printf("        □□□□□□                  □□□□□□□□□□□□□□□□              \n");
	printf("        □        □                  □        □        □        □              \n");
	printf("        □   256  □                  □   222  □   224  □   234  □              \n");
	printf("        □        □                  □        □        □        □              \n");
	printf("        □□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□              \n");
	printf("        □        □        □        □        □        □        □              \n");
	printf("        □   201  □   207  □   213  □   219  □   225  □   233  □              \n");
	printf("        □        □        □        □        □        □        □              \n");
	printf("        □□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□              \n");
	printf("                                                                                    \n");
	printf("                                                                                    \n");
	printf(" KNU                                                                                \n");
	printf("▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤\n");
}