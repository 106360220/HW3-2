#include<stdio.h>
#include<stdlib.h>

void hanoi(int num, char start, char temp, char end) {

	if (num > 0) 
	{

		hanoi(num - 1, start, end, temp);
		printf("%c -> %c  \n", start, end);
		hanoi(num - 1, temp, start, end);

	}

}

int main() {
	
	hanoi(4, '1', '3', '2');   
	system("pause");
	return 0;

}