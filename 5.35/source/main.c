#include<stdio.h>
#include<stdlib.h>
int Fibonacci(int n);
int main()
 {
     int i, n;
     printf("�п�J�Q��X�ĴX�ӶO���:");
     scanf("%d", &n);
     
     printf("�� %d ��Fibonacci�� = %d\n", n, Fibonacci(n));
     
     system("pause");
     return 0;
 }
int Fibonacci(int n)
 {
     int f;
	 if (n == 1)
	 {
		 f = 0;
	 }
	 else if (n == 2)
	 {
		 f = 1;
	 }
     
	 else if (n >= 3)
	 {
		 f = Fibonacci(n - 2) + Fibonacci(n - 1);
	 }
		 
     return f;
 }