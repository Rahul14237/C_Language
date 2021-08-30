#include<stdio.h>
#include<conio.h>

// inline int addition(int, int);
static inline int addition(int a, int b){
	return (a+b);	
}

int main()
{
	int a = 10, b = 5, c = 0;
	c = addition(10,5);
	printf("The addition of a and b is %d", c);
	return 0;
}