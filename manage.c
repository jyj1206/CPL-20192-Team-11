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
	printf("                  - 관리자 모드 -                 \n");
	printf("                                                  \n");
	printf("                                                  \n");
	printf("           원하시는 작업을 선택해 주세요          \n");
	printf("                                                  \n");
	printf("                                                  \n");
	printf("                 =================                \n");
	printf("                   학생 정보 관리                 \n");
	printf("                 =================                \n");
	printf("                                                  \n");
	printf("                                                  \n");
	printf("                 =================                \n");
	printf("                    시간표 관리                   \n");
	printf("                 =================                \n");
	printf("                                                  \n");
	printf("                                                  \n");
	printf("                                                  \n");
	printf(" KNU                                              \n");
	printf("▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤\n");
}