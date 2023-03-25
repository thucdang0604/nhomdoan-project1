#include <stdio.h>

int main()
{
	//khai bai 1 bien array gom 4 phan tu kieu so nguyen 
	int array[4] = {2,4,6,8};
	
	for(int i=0; i<4; i++){
		printf("\n array[%d] = %d",i, array[i]);
		printf("\t array[%d] = %d",i, &array[i]);
		printf("\t array+%d = %d",i, array+i); //in dia chi
		printf("\t *(array+%d)= %d", i, *(array+i)); //in gia tri
	}
}
