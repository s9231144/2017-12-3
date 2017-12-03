#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int main()
{
	int a[35999];
	int b[35999];
	int c;
	int d[13] = {0};
	srand(time(0));
	for (int i = 1; i < 36000; i++)
	{
		a[i - 1] = rand() % 6 + 1;
		b[i - 1] = rand() % 6 + 1;
		c=a[i - 1] + b[i - 1] ;
		d[c]++;
		

	}
	for (int i = 2; i < 13; i++)
	{
		printf("ÂI¼Æ%d¡G%d¦¸\n", i, d[i]);
	}
	
	system("pause");
}