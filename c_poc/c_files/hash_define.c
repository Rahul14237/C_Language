#include<stdio.h>
#include<assert.h>

#define VALUE 10

int main(){
	int var = VALUE;
	assert(!"Will it throw error" );
	printf("The value of var is %d", var);
	return 0;
}
