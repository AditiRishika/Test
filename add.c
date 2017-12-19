#include <stdio.h>

int main()
{
	int x,y;
	
	printf ("Enter two numbers to add\n");
	scanf ("%d%d", &x,&y);

	int z = x + y;

	printf("Sum is %d\n", z);

	printf("Substracction is %d", x-y);

	return 0;
}

