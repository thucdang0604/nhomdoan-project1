#include <stdio.h>

int main()
{
	int songuyen = 555;
	
	printf("\n songuyen la [%d]", songuyen);
	printf("\n songuyen khi in theo %%10d la[%10d]", songuyen); //left-justified
	printf("\n songuyen khi in theo %%-10d la[%-10d]", songuyen); //right-justified
	printf("\n songuyen khi in theo %%010d la[%010d]", songuyen);
	printf("\n songuyen khi in theo %%-010d la[%-010d]", songuyen);

}
