#include <stdio.h>
#include <windows.h>

void textcolor(int color_number)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color_number);
} //텍스트 색 설정

void main()
{
	system("mode con cols=98 lines=40");
	textcolor(11);

	printf("▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤\n");
	printf("                                                                                                  \n");
	printf("                                                                                                  \n");
	printf("        원하시는 좌석을 선택해 주세요                                                             \n");
	printf("                                                                                                  \n");
	printf("                                                                                                  \n");	
	printf("--------------------------------------------------------------------------------------------------\n");
	printf("                              □□□□□□□□□□□□□□□□□□□                              \n");
	printf("                                               강단                                               \n");
	printf("                                                                                                  \n");
	printf("                                                                                                  \n");
	printf("        □□□□□□□□□□□        □□□□□□□□□□□        □□□□□□□□□□□        \n");
	printf("        □        □        □        □        □        □        □        □        □        \n");
	printf("        □    1   □    2   □        □    3   □    4   □        □    5   □    6   □        \n"); 
	printf("        □        □        □        □        □        □        □        □        □        \n");
	printf("        □□□□□□□□□□□        □□□□□□□□□□□        □□□□□□□□□□□        \n");
	printf("        □        □        □        □        □        □        □        □        □        \n");
	printf("        □    7   □    8   □        □    9   □   10   □        □   11   □   12   □        \n");
	printf("        □        □        □        □        □        □        □        □        □        \n");
	printf("        □□□□□□□□□□□        □□□□□□□□□□□        □□□□□□□□□□□        \n");
	printf("        □        □        □        □        □        □        □        □        □        \n");
	printf("        □   13   □   14   □        □   15   □   16   □        □   17   □   18   □        \n");
	printf("        □        □        □        □        □        □        □        □        □        \n");
	printf("        □□□□□□□□□□□        □□□□□□□□□□□        □□□□□□□□□□□        \n");
	printf("        □        □        □        □        □        □        □        □        □        \n");
	printf("        □   19   □   20   □        □   21   □   22   □        □   23   □   24   □        \n");
	printf("        □        □        □        □        □        □        □        □        □        \n");
	printf("        □□□□□□□□□□□        □□□□□□□□□□□        □□□□□□□□□□□        \n");
	printf("        □        □        □        □        □        □        □        □        □        \n");
	printf("        □   25   □   26   □        □   27   □   28   □        □   29   □   30   □        \n");
	printf("        □        □        □        □        □        □        □        □        □        \n");
	printf("        □□□□□□□□□□□        □□□□□□□□□□□        □□□□□□□□□□□        \n");
	printf("                                                                                                  \n");
	printf(" KNU                                                                                              \n");
	printf("▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤\n");
}
