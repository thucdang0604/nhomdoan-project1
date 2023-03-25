#include <stdio.h>

void swap(int *a, int *b)
{
	printf("\n truoc khi swap a la %d va b la %d", a, b);
	//swap
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
	printf("\n sau khi swap: a la %d va b la %d", *a, *b);
 	
}

int main()
{
	int x =3;
	int y=5;
	
	printf("\n x va y truoc khi swap la %d va %d", x, y);
	swap(&x,&y);
	
	printf("\n sau khi swap: x la %d va y la %d", x, y);
	
}
