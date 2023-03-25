#include <stdio.h>

int increment()
{
	static int count = 0;
	count++;	
	printf("\n Count is %d", count);
}

int main()
{
	increment();
	increment();
	increment();
}

