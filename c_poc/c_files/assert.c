/** @file assert.c 
    @brief Basic use of assert
	
	Details
	void assert(int expression) does nothing if evaluates to true
	shows error on stderr if evalutes to false and aborts execution
	
	@version $1.0$
	@author  $Rahul Patil$
*/	

#include<stdio.h>
#include<assert.h>

int main(){
	int a;
	printf("Enter any integer:");
	scanf("%d", &a);
	assert(a>10);
	printf("Entered value is %d\n", a);
	return 0;
}