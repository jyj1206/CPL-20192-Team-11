/*
	[�� ���ǽ� ���� ���α׷�]
*/
#define _CRT_SECURE_NO_WARNINGS_
#include <stdio.h>
#include <stdlib.h>
#include "mouse.h"
#include "time.h"
#include "login.h"
#include "menumove.h"
//��ũ��
#define NAME_SIZE 20
#define mainnum 0 
#define managernum 1
#define managernum1 2
#define managernum2 3
#define usernum 4
#define usernum1 5
#define usernum2 6
//��������
int i;
int menux;
//�Լ� ����
void title();
void textcolor(int  color_number);
void login();
void mainmenu();
void manager();
void user();
//���� �Լ� ����
int main(void)
{	
	while (1) {
		system("cls");
		switch (menux) {
		case 0 : title();
			break;
		case 1: manager();
			break;
		case 2: break;
		case 3: break;
		case 4: user();
		}
	}
}


void title()
{
	menux = mainnum;
	login();
}

void textcolor(int color_number)



{

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color_number);

} //�ؽ�Ʈ �� ����
void login() {
	char yn;
	member();
	stuInfo temp;
	while (TRUE) {
		mainmenu();
		CursorView(1);
		gotoxy(26, 11);
		scanf("%d", &temp.id);
		gotoxy(26, 12);
		scanf("%d", &temp.key);
		for (i = 0; i<peoplenum ; i++) {
			if (stuEqual(&temp, &stu[i])) {
				pushmenu(menux);
				gotoxy(20, 13);
				printf("����� ���� : %s", stu[i].name);
				gotoxy(26, 14);
				printf("(y/n) : ");
				scanf("%*c");
				scanf("%c",&yn);
				gotoxy(30, 14);
				if (yn == 'n')
					return;
				if (temp.key == 12345) //������ Ű or ����� Ű
					menux = managernum;
				else
					menux = usernum;
				return;
			}
		}
	}
}
void mainmenu() {
	CursorView(0);
	textcolor(11);

	system("mode con cols=50 lines=30"); //cols = ĭ/�� (����)  lines = ��/�� (����)

	printf("�ǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢ�\n");

	printf("\n");

	printf("\n");

	printf("         ��                           ��          \n");

	printf("         ��  �� ���ǽ� ���� ���α׷�  ��          \n");

	printf("         ��                           ��          \n");

	printf("         ��          IT5ȣ��          ��          \n");

	printf("         ��                           ��          \n");

	printf("\n");

	printf("\n");

	printf("\n");

	printf("                  �й� : l           l	 \n");

	printf("                    Ű : l           l       \n");

	printf("\n");

	printf("\n");

	printf("\n");

	printf("\n");

	printf("                                                  \n");

	printf(" KNU                                              \n");

	printf("�ǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢ�\n");

	timeset();
}
void manager() {
	printf("manaegrmode");
}
void user() {
	printf("usermode");
}