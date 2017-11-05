#include<stdio.h>
#include<stdlib.h>

char convert(char A);
int main()
{
	char a;
	printf("Enter word:");
	scanf("%c", &a);
	printf("%c -> %c\n", a, convert(a));
	system("pause");
	return 0;
}

char convert(char A)
{
	char a;
	if (A >= 'A' && A <= 'Z')
	{
		a = A + 32;
	}
		
	else
	{
		a = A-32;
	}
	return a;
}