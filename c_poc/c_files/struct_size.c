
/***** Size of bitfield *****/
/*#include<stdio.h>
#include<conio.h>

int main()
{
	struct size{
		unsigned int a:28;
		unsigned int b:4;
	}size1 = {0xCCCCCCCC,0x5};

	printf("a = %d and b = %d",size1.a, size1.b);
	printf("\nsize of size %d", sizeof(size1));
	return 0;
}*/


/***** function pointer *****/
// function pointer func_ptr declaration: return_type (*func_ptr)(arg1_type, agr2_type, ...)
// function pointer initialization: return_type (*func_ptr)(arg1_type, agr2_type, ...) = &func_name

#include<stdio.h>
#include<conio.h>


int func1(int a)
{
	printf("value of a = %d", a);
	return 0;
}
int func2(int (*ptr)(int a))
{
	int b = 5;
	(*ptr)(b);
	return 0;
}

int main()
{
	int (*ptr)(int) = &func1;
	//(*ptr)(5);
	func2((*ptr)(5));
	//func2(&func1);
	
	return 0;
}