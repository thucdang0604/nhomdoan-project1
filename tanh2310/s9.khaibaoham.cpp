#include <stdio.h>

//dinh nghia(definition) 1 ham tra ve kieu int va co 2 tham so(arguments, parameters)
float sum(int a, int b) //a va b goi la formal
{
	//khai bao de giu gia tri cua 2 bien a va b
	float s;
	s = a+b;
	return s;
}

int main()
{
 //khai bao 2 bien 
 int x;
 float y;
 
 //nhap gia tri cho 2 bien
 printf("\n nhap gia tri cho x: ");
 scanf("%d", &x);
 
 //nhap gia tri cho 2 bien
 printf("\n nhap gia tri cho y: ");
 scanf("%f", &y);
 
 //goi ham
 float add = sum(x,y);
 printf("\n tong cua %d va %.f la %f", x,y,add);
 
 printf("\n tong cua %d va %.f la %f", x, y, sum(x,y));
 
}


