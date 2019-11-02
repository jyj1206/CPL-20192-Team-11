#include <stdio.h>
#include <windows.h>

void textcolor(int color_number)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color_number);
} //텍스트 색 설정
void main()
{
	system("mode con cols=85 lines=26");
	textcolor(11);

	printf("▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤\n");
	printf("                                                                                    \n");
	printf("                                                                                    \n");
	printf("        원하는 강의실을 선택해 주세요  (4층)                                        \n");
	printf("                                                                                    \n");
	printf("                                                                                    \n");
	printf("        □□□□□□                    □□□□□□□□□□□□■■■■■■        \n");
	printf("        □        □                    □ 4□        □4 □ 4  ■        ■        \n");
	printf("        □   402  □                    □ 2□   422  □2 □ 3  ■   434  ■        \n");
	printf("        □        □                    □ 0□        □8 □ 2  ■        ■        \n");
	printf("        □□□□□□■■■■■■□□□□□□■■■■■■■■■■■■■■■■        \n");
	printf("        □ 4□ 4□ 4■        ■        □ 4■        ■        ■        ■        \n");
	printf("        □ 0□ 0□ 0■   407  ■   413  □ 1■   421  ■   427  ■   433  ■        \n");
	printf("        □ 1□ 3□ 5■        ■        □ 9■        ■        ■        ■        \n");
	printf("        □□□□□□■■■■■■□□□□□□■■■■■■■■■■■■■■■■        \n");
	printf("                                                                                    \n");
	printf("                                                                                    \n");
	printf(" KNU                                                                                \n");
	printf("▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤\n");
}
