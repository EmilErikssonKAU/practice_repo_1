#include <stdio.h>

int main()
{
	int a = 2, b = 3, bool = 0;
	printf("Choose operation: (0) '+' (1) '-'\n");
	scanf("%d", &bool);
	printf("The results is %d\n", bool ? a - b : a + b);
	return 0;
}
