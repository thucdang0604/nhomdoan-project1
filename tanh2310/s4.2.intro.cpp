#include <stdio.h>

int main()
{
	//khai bao 1 bien kieu int
	int num;
	
	//xuat ra man hinh moi nguoi dung nhap gia tri cho bien
	printf("nhap vao 1 so nguyen: ");
	scanf("%d", &num); //dong lenh nay se gan' gia tri ban nhap cho bien num
	printf("\n ban vua nhap so %d", num);
	
	//khai bao 1 bien kieu float
	float mark;
	
	printf("\n nhap vao 1 so thuc:");
	scanf("%f", &mark);
	printf("\n ban vua nhap so %f", mark);
	char gender;
	
	printf("\n nhap vao gioi tinh cua ban(nhap 1 ki tu M hoac F)");
	scanf(" %c", &gender); 
	printf("\n gioi tinh cua ban la %c", gender); 
	
	//khai bao' 1 bien kieu chuoi
	char name[40];
	
	printf("\n nhap vao ten cua ban:");
	//scanf("%s", name); //nhap khong co khoang cach
	fflush(stdin); //xoa bo dem
	gets(name); //nhap co khoang cach
	printf("\n ten cua ban la %s", name);
}
