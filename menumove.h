#include <stdio.h>
#include <stdlib.h>
#define MALLOC(p,s) \
if (!((p) = malloc(s))) {\
		fprintf(stderr, "Insufficient memory"); \
		exit(EXIT_FAILURE); \
}
typedef struct node *menuPointer;
typedef struct node {
	int pre_menu;
	menuPointer link;
}node;
menuPointer menu;
int stackEmpty() {
	int temp;
	temp = -1;
	return temp;
}
void pushmenu(int menunum) { //�տ� �ٰ� node ����
	menuPointer temp;
	MALLOC(temp, sizeof(*temp));
	temp->pre_menu = menunum;
	temp->link = menu;
	menu = temp;
}
int popmenu() {//�� �տ������� ����
	menuPointer temp = menu;
	int item;
	if (!temp)
		return stackEmpty();
	item = temp->pre_menu;
	menu= temp->link;
	free(temp);
	return item;
}
