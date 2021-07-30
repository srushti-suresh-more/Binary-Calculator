#define PLUS 1
#define MINUS -1
//#define list
//#ifndef list

typedef struct node {
	int n;
	struct node *next, *prev;
}node;
typedef struct num {
	int sign, dec;
	node *head, *tail;
}num;

void initNumber(num *a);
void addDigit(num *a, char ch);
void printNumber(num a);
void destroyNumber(num *a);
void appendleft(num *a, int no);
int length(num a);
void remov(num *a, int pos);
void zeroRemov(num *a);
//#endif
