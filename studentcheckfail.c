#include <stdio.h>
#include <windows.h>

void textcolor(int color_number)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color_number);
} //텍스트 색 설정

void main()
{
	system("mode con cols=50 lines=30");
	textcolor(11);
	printf("▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤\n");
	printf("                                                  \n");
	printf("                                                  \n");
	printf("                  -  학생 조회  -                 \n");
	printf("                                                  \n");
	printf("                                                  \n");
	printf("                학번을 입력해주세요               \n");
	printf("                                                  \n");
	printf("                                                  \n");
	printf("                    2019111441                    \n");
	printf("                    ==========                    \n");
	printf("                                                  \n");
	printf("--------------------------------------------------\n");
	printf("                                                  \n");
	printf("                                                  \n");
	printf("             조회된 학생정보가 없습니다           \n");
	printf("                                                  \n");
	printf("                                                  \n");
	printf(" KNU                                              \n");
	printf("▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤\n");
}