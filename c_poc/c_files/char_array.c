#include<stdio.h>

void print_string(char* PtrCharArray)
{
	while(*PtrCharArray)
	{
		printf("%c", *PtrCharArray);
		PtrCharArray++;
	}
}
int main()
{
	char CharArray[10] = "Hello world";
	char* PtrCharArray = CharArray;
	print_string(PtrCharArray);
	return 0;
}