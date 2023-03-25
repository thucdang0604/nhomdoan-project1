#include <stdio.h>

int main()
{
	//khai bao 1 so kieu int 
	int number;
	
	//nhap gia tri cho bien number
	printf("\n nhap so number:");
	scanf("%d", &number);
	
	//lay number % 2 de tim so du*
	//khai bqo 1 bien de luu phan` du
	int remainder;
	remainder = number %2;
	//kiem tra dieu kien 
	//neu phan` du == 0 thi xuat ra so number la so chan
	//con khong thi xuat ra man hinh la so le
	if(remainder == 0){
	printf("\n so %d la so chan", number);	
	}
	else{
	printf("\n so %d la so le", number);
	}
}
