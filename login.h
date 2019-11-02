#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define NAME_SIZE 20
#define FALSE 0
#define TRUE 1
#define MALLOC(p,s) \
if (!((p) = malloc(s))) {\
		fprintf(stderr, "Insufficient memory"); \
		exit(EXIT_FAILURE); \
}
#define REALLOC(o, p, s) \
if (o = p && !((p) = realloc(p, s))) { \
        free(o); \
        fprintf(stderr, "Insufficient memory"); \
        exit(EXIT_FAILURE);\
}
FILE *fp;
typedef struct {//인적사항
	char name[NAME_SIZE];//이름
	int id;//학번
	int key;//학생 키-관리자 모드 or 사용자 모드 4자리
}stuInfo;
int top = -1;
int peoplenum = 0;
int capacity = 1;
stuInfo *stu;

int stuEqual(stuInfo *person1, stuInfo *person2) { //하나라도 일치하지 않으면 FALSE를 반환
	if (person1->id != person2->id) //나이 비교
		return FALSE;
	if (person1->key != person2->key) //봉급 비교
		return FALSE;
	return TRUE;
}
void stackFull() {
	stuInfo *temp;
	REALLOC(temp, stu, 2 * capacity * sizeof(*stu));
	capacity *= 2;
	free(temp);
}
void push(stuInfo item) {
	if (top >= capacity - 1)
		stackFull();
	stu[++top] = item;
}
void member() {
	fp = fopen("student.txt", "r");
	stuInfo temp;
	MALLOC(stu, capacity * sizeof(*stu));
	while (!feof(fp)) {
		fscanf(fp, "%s %d %d", temp.name, &temp.id, &temp.key);
		push(temp);
		peoplenum++;
	}
}