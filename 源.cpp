#include<stdio.h>
int main()
{
	float a[10], t;
	int i;
	for (i = 0; i <10; i++)
	{
		scanf_s("%f", &a[i]);
	}
	for (i = 0; i < 10; i++)
		if (a[i] > a[i + 1])
		{
			t = a[i];
			a[i] = a[i + 1];
			a[i + 1] = t;
		}
	printf("%.2f", a[i]);
	return 0;
}