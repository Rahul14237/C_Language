/** @file  union.c

    @brief basic definition of union datatype

    Details

    @version $1.0$
    @author  $Rahul Patil$

*/

/* file inclusions */
#include<stdio.h>
//#include<conio.h>

/* macro and macro functions */

/* global variable definitions */
typedef union g_UnionType{
		unsigned short word;
		struct BitFieldType{
				unsigned short BitField1:3;
				unsigned short BitField2:2;
				unsigned short BitField3:3;
				unsigned short BitField4:3;
				unsigned short BitField5:2;
				unsigned short BitField6:3;
				};
		}g_UnionType_t;

/* static global variable definitions */

/* global function defintions */		
int main()
{
	//g_UnionType_t UnionObj; // one of the option to creat object of type g_UnionType_t which is nothing but union g_UnionType
	union g_UnionType UnionObj;
	UnionObj.BitField1 = 4;
	UnionObj.BitField2 = 2;
	UnionObj.BitField3 = 7;  
	UnionObj.BitField4 = 1;
	UnionObj.BitField5 = 0;
	UnionObj.BitField6 = 0;	
	printf("The value stored in data is %.2x\n", UnionObj.word);
	printf("size of union is %d\n", sizeof(union g_UnionType));
	unsigned short i = 1;
	char* p = (char*)&i;
	if(*p){
		printf("Little endian");
	}
	else{
		printf("Big endian");
	}
	return 0;
}