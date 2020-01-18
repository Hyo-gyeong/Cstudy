#include <stdio.h>
int main()
{
	int year;
	int month;
	int date;

	printf("(yyyy.mm.dd)형식으로 입력하세요.\n");
	scanf("%d.%d.%d", &year, &month, &date);
	printf("%04d.%02d.%02d", year, month, date);
}