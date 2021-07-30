#include<stdlib.h>
#include"shri_stack.h"

// Stack  to store big  num.
void iinit(stack *s) {
	*s = NULL;
}
void ipush (stack *s, num *t) {
	stack temp;
	temp = (inode *)malloc(sizeof(inode));
	temp->a = t;
	temp->p = *s; 
	*s = temp;
}
num *ipop(stack *s) {
	num *t;
	stack temp;
	t = (*s)->a;
	temp = *s;
	*s = (*s)->p;
	free(temp);
	return t;
}
int iisempty (stack *s) {
	return *s == NULL;
}


//  Stack to store  Operators.
void cinit(cstack *s) {
	*s = NULL;
}
void cpush (cstack *s, char t) {
	cstack temp;
	temp = (cnode *)malloc(sizeof(cnode));
	temp->a = t;
	temp->p = (*s);
	*s = temp;
}
char cpop(cstack *s) {
	char t;
	cstack temp;
	temp = (*s);
	t = (*s)->a;
	*s = (*s)->p;
	free(temp);
	return t;
}
int cisempty (cstack *s) {
	return *s == NULL;
}

