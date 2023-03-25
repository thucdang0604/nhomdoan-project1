#include <stdio.h>

int main()
{
	//khai bao 1 pointer kieu int 
	int *p;
	
	//khai bao 1 bien thuong` kieu int
	int var =5;
	
	//tro bien pointer toi bien var
	p = &var;
	
	printf("\n bien var co gia tri la %d", var);
	printf("\n bien var o dia chi la %d", &var);
	
	 printf("\n bien pointer p co gia tri la %d", p);
	 printf("\n gia tri ma bien p tro toi co gia tri la %d", *p);
	 
	 //tang p len 1 don vi 
	 p++;
	 printf("\n bien pointer p co gia tri la %d", p);
	 printf("\n gia tri ma bien p tro toi co gia tri la %d", *p);
	 
	 
}
