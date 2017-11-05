#include<stdio.h>
#include<stdlib.h>
int Fibonacci(int n);
int main()
 {
     int i, n;
     printf("請輸入想算出第幾個費氏數:");
     scanf("%d", &n);
     
     printf("第 %d 個Fibonacci數 = %d\n", n, Fibonacci(n));
     
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