#include<stdio.h>
#include<stdlib.h>
int rm(int f[],int len)
{
	
	
	if (len == 1)
	{
		int c = f[0];
		return c;
	}
	else
	{
		if (f[len-1] > f[len - 2])
		{
			f[len - 2] = f[len-1];
			
		}
		
		rm(f, len-1);
	}
	
}
int main()
{
	
	int a[] = { 0, 15, 24, 3, 14, 25, 66, 37, 78, 29 };
	int b = 10;
	printf("�����C��:0, 15, 24, 3, 14, 25, 66, 37, 78, 29\n" );
	int d=rm(a, b);
	printf("�̤j���Ƭ�:%d\n", d);
	system("pause");
}