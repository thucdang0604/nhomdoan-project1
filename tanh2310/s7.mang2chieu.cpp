#include <stdio.h>

int main()
{
	//khai bao 1 mang so nguyen 2 chieu 
	int arr[3][4]= {{2,4,6,8},{1,3,5,7},{1,2,3,4}};
	
	int array[3][4]= {2,4,6,8, 1,3,5,7, 1,2,3,4};
	
	//xuat gia tri cua array ra man hinh
	for(int i=0; i<3; i++){
		printf("\n");
		for(int j=0; j<4; j++){
			printf("\t arr[%d][%d] = %d", i,j,arr[i][j]);
		}
	}
}
