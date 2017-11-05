#include<stdio.h>
#include<stdlib.h>

int integerpower(base, ex);

int main()
{
	int base, ex;
	printf("Please Enter base and exponent: ");
	scanf("%d %d", &base, &ex);
	printf("%d ^ %d = %d\n",base,ex,integerpower(base,ex));
	system("pause");
	return 0;

}

int integerpower(int base,int ex)
{
	int i,x=1;
	for (i = 1; i <= ex; i++)
	{
		x = x*base;

	}
	return x;
}