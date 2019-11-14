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
	printf("               -  학생 정보 추가  -               \n");
	printf("                                                  \n");
	printf("                                                  \n");
	printf("            추가할 정보를 입력해 주세요           \n");
	printf("                                                  \n");
	printf("                                                  \n");
	printf("                이름 : 이건희                     \n");
	printf("                       ======                     \n");
	printf("                학번 : 2019111441                 \n");
	printf("                       ==========                 \n");
	printf("                  키 : 1234                       \n");
	printf("                       ====                       \n");
	printf("                                                  \n");
	printf("                                                  \n");
	printf(" KNU                                              \n");
	printf("▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤\n");
}