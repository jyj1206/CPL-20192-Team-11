#include <stdio.h>
#include <windows.h>

void textcolor(int color_number)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color_number);
} //텍스트 색 설정

void main()
{
	system("mode con cols=85 lines=24");
	textcolor(11);

	printf("▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤\n");
	printf("                                                                                    \n");
	printf("                                                                                    \n");
	printf("        원하는 강의실을 선택해 주세요  (2층)                                        \n");
	printf("                                                                                    \n");
	printf("                                                                                    \n");
	printf("        ■■■■■■■■■■■                                                      \n");
	printf("        ■        ■        ■                                                      \n");
	printf("        ■  B101  ■  B102  ■                                                      \n");
	printf("        ■        ■        ■                                                      \n");
	printf("        ■■■■■■■■■■■                                                      \n");
	printf("                                                                                    \n");
	printf("                                                                                    \n");
	printf(" KNU                                                                                \n");
	printf("▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤\n");
}