#include <stdio.h>
#include <windows.h>

void textcolor(int color_number)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color_number);
} //텍스트 색 설정

void main()
{
	system("mode con cols=50 lines=35");
	textcolor(11);
	printf("▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤\n");
	printf("                                                  \n");
	printf("                                                  \n");
	printf("                  - 학생정보 관리 -               \n");
	printf("                                                  \n");
	printf("                                                  \n");
	printf("           원하시는 작업을 선택해 주세요          \n");
	printf("                                                  \n");
	printf("                                                  \n");
	printf("                 =================                \n");
	printf("                     학생 조회                    \n");
	printf("                 =================                \n");
	printf("                                                  \n");
	printf("                                                  \n");
	printf("                 =================                \n");
	printf("                     학생 추가                    \n");
	printf("                 =================                \n");
	printf("                                                  \n");
	printf("                                                  \n");
	printf("                 =================                \n");
	printf("                     학생 제거                    \n");
	printf("                 =================                \n");
	printf("                                                  \n");
	printf("                                                  \n");
	printf("                                                  \n");
	printf(" KNU                                              \n");
	printf("▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤\n");
}