#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
void rs(char* a, char *b)
{
	if (a >= b) return;

	char t = *a;
	*a = *b;
	*b = t;

	rs(a + 1, b - 1);
}

int main()
{
	char qq[255];
	printf("�п�J�@�Ӧr��:");
	gets_s(qq); 
	rs(qq,qq+strlen(qq)-1); 
	printf("�r����ର:%s\n", qq);
	system("pause");
	return 0;
}