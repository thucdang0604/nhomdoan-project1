#include <stdio.h>
#include <malloc.h>
int main()
{
	int *p;
	
	
	//cap phat bo nho dong 
	p = (int *)malloc(5*sizeof(int));
	
	//nhap gia tri cho pointer
	for( int i=0; i<5; i++){
		printf("\n nhap gia tri cho phan tu thi %d: ", i+1);
		scanf("%d", p+i);
	}
	//xuat gia tri cua pointer
	for (int i = 0; i<5; i++){
		printf("\n gia tru cua phan tu thu %d la %d", i, *(p+i));
	}
}
