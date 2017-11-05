#include<stdio.h>
#include<stdlib.h>
int LCM(int a,int b);

int main()
{
	int a,b;
	printf("Please Enter Two numbers : ");
	scanf("%d %d", &a, &b);
	printf("LCM is %d\n", LCM(a, b));
	system("pause");
	return 0;

}

int LCM(int a, int b)
{
	int i,x;
	for (i = 1; i <= 10000; i++)
	{
		if ((a%i) == 0 && (b%i) == 0)
		{
			x = (a / i)*(b / i)*i;
		}
		
		
	}
	return x;
}