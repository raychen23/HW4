#include <stdio.h>
#include <stdlib.h>

// Function prototype
int addbyone(int &xref);

int main() {
	int x = 100;
	int y = addbyone(x);
	printf("x=%d\n", x);
	system("pause");
	return 0;
}

// Function definition
int addbyone(int &xref) {
	xref++;
	printf("xref=%d\n", xref);
	return xref;
}