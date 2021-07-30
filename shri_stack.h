//#define shri_stack
//#ifndef shri_stack
#include "shri_list.h"


//  Stack for storing big num.
typedef struct inode {
	num *a;
	struct inode *p;
}inode;
typedef inode *stack;
void iinit(stack *s);

void ipush(stack *s, num *a);

num *ipop(stack *s);

int iisempty(stack *s);


// Stack for storing Operators.
typedef struct cnode {
	char a;
	struct cnode *p;
}cnode;
typedef cnode *cstack;
void cinit(cstack *s);

void cpush(cstack *s, char t);

char cpop(cstack *s);

int cisempty(cstack *s);
//#endif
