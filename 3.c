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
	printf("        원하는 강의실을 선택해 주세요  (3층)                                        \n");
	printf("                                                                                    \n");
	printf("                                                                                    \n");
	printf("        ■■■■■■■■■■■■■■■■■■■■■                                  \n");
	printf("        ■        ■        ■        ■        ■                                  \n");
	printf("        ■   351  ■   348  ■   345  ■   342  ■                                  \n");
	printf("        ■        ■        ■        ■        ■                                  \n");
	printf("        ■■■■■■■■■■■■■■■■■■■■■                                  \n");
	printf("        □        □                  □                                            \n");
	printf("        □   354  □                  □                                            \n");
	printf("        □        □                  □                                            \n");
	printf("        ■■■■■■                  □□□□□■■■■■■■■■■■              \n");
	printf("        ■        ■                  □        ■        ■        ■              \n");
	printf("        ■   355  ■                  □   322  ■   324  ■   334  ■              \n");
	printf("        ■        ■                  □        ■        ■        ■              \n");
	printf("        ■■■■■■■■■■■□□□□□□□□□■■■■■■■■■■■              \n");
	printf("        ■        ■        ■        □        □        ■        ■              \n");
	printf("        ■   301  ■   309  ■   317  □   323  □   325  ■   333  ■              \n");
	printf("        ■        ■        ■        □        □        ■        ■              \n");
	printf("        ■■■■■■■■■■■□□□□□□□□□□□□□□■■■■■■              \n");
	printf("                                                                                    \n");
	printf("                                                                                    \n");
	printf(" KNU                                                                                \n");
	printf("▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤\n");
}