#include <time.h>
#include <string.h>
#define DAY_OF_WEEK_SIZE 7
#define arr_size 10
char s[arr_size];

const static char* DAY_OF_WEEK[DAY_OF_WEEK_SIZE] = {

	" Sun ", " Mon ", " Tue ", " Wed ", " Thu ", " Fri ", " Sat "

}; //요일설정


void timeset()
{
	COORD pos = { 0, 24 };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);


	time_t now = time(NULL);

	struct tm* time = localtime(&now);



	int year = time->tm_year + 1900;

	int month = time->tm_mon + 1;

	int dayOfMonth = time->tm_mday;

	int dayOfWeek = time->tm_wday;

	int hour = time->tm_hour;

	int minute = time->tm_min;

	int second = time->tm_sec;

	(hour >= 12 ? strcpy(s, "pm") : strcpy(s, "am"));


	printf("%d-%d-%d [%s] (%s) %d:%d:%d\n", year, month, dayOfMonth, DAY_OF_WEEK[dayOfWeek],s, hour%12, minute, second);

}