#include <stdio.h>

int main()
{
	//khai bao so lop can quan li 
	int max_class;
	
	//khai bao so sinh vien trong 1 lop 
	int max_student;
	
	//nhap gia tri cho 2 bien lop va sinh vien truoc
	printf("\n nhap so luong lop can quan li: ");
	scanf("%d", &max_class);
	 
	printf("\n nhap so luong sinh vien trong 1 lop: ");
	scanf("%d", &max_student);
	 
	//khao bao 1 mang 2 chieu de quan li diem cua sinh vien
	int marks[max_class][max_student];
	//nhap diem cho sinh vienn
	printf("\n nhap diem cho sinh vien");
	for(int i=0; i<max_class; i++){
		printf("\n nhap diem cho lop thu %d", i+1);
		for(int j=0; j <max_student; j++){
		printf("\n nhap diem cho sinh vien thu %d ",j +1);
	    scanf("%d", &marks[i][j]);
	}
	}
	//xuat diem 
	for(int i=0; i<max_class; i++){
		printf("\n diem cua lop thu %d", i+1);
		for(int j=0; j<max_student; j++){
		printf("\n diem sinh vien thu %d la %d",  j+1, marks[i][j]);
		}
	
		
	}	
}
