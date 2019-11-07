#include <stdio.h>
#include <windows.h>

void textcolor(int color_number)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color_number);
} //텍스트 색 설정

void main()
{
	system("mode con cols=50 lines=36");
	textcolor(11);
	printf("▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤\n");
	printf("                                                  \n");
	printf("                                                  \n");
	printf("               -  학생 정보 삭제  -               \n");
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
	printf("                 이름 : 이건희                    \n");
	printf("                                                  \n");
	printf("                 학번 : 2019111441                \n");
	printf("                                                  \n");
	printf("                   키 : 1234                      \n");
	printf("                                                  \n");
	printf("                                                  \n");
	printf("--------------------------------------------------\n");
	printf("                                                  \n");
	printf("                                                  \n");
	printf("             삭제하시겠습니까? (y / n)            \n");
	printf("                                                  \n");
	printf("                                                  \n");
	printf(" KNU                                              \n");
	printf("▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤\n");
}