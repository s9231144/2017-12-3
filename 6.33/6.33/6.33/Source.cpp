#include<stdio.h>
#include<stdlib.h>
#define size 15
size_t by(const int b[], int sea, size_t low, size_t high);
void ph();
void pr(const int b[], size_t low, size_t mid, size_t high);
int main()
{
	int a[size];
	size_t i;
	int key;
	size_t res;
	for (i = 0; i < size; i++)
	{
		a[i] = 2 * i;
	}
	printf("%s", "Enter a number between 0 and 28: ");
	scanf_s("%d", &key);
	ph();
	res = by(a, key, 0, size - 1);
	if (res != -1)
	{
		printf("\n%d found in array element %d\n", key, res);

	}
	else
	{
		printf("\n%d not found\n", key);
	}
	system("pause");
}
size_t by(const int b[], int sea, size_t low, size_t high)
{
	int middle = (low + high) / 2;
	pr(b, low, middle, high);
	if (low<high)
	{
		if (sea == b[middle])
		{
			return middle;
		}
		else if (sea<b[middle])
		{
			high = middle - 1;
			return by(b, sea, low, high);

		}

		else
		{
			low = middle + 1;
			return by(b, sea, low, high);
		}

	}

	return -1;
}

void ph()
{
	unsigned int i;
	puts("\nSubscripts:");
	for (i = 0; i < size; ++i)
		printf("%3u ", i);
	puts("");
	for (i = 1; i <= size*4; ++i)
		printf("%s","-");
	puts("");
}
void pr(const int b[], size_t low, size_t mid, size_t high)
{
	size_t i;
	for (i = 0; i < size; ++i)
	{
		if (i <low || i>high)
		{
			printf("%s", "    ");
		}
		else if (i == mid)
		{
			printf("%3d*", b[i]);
		}
		else
		{
			printf("%3d ", b[i]);
		}
	}
	puts("");
}