#include <stdio.h>

//dinh nghia(definition) 1 ham tra ve kieu int va co 2 tham so(arguments, parameters)
void sum(int a, int b) //a va b goi la formal
{
	//khai bao de giu gia tri cua 2 bien a va b
	float s;
	s = a+b;
	printf("\n tong cua 2 so %d va %.f la %f", a, b, s);
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
 sum(x,y);
 
}
