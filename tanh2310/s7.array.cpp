#include <stdio.h>

int main()
{
	//khai bao 1 array so nguyen gom 5 phan tu
	int arr[5];
	
	//vua khai bao vua gan gia tri cho mang so nguyen gom 3 phan tu 
	int numbers[3] = {1,2,3};
	//vua khai bao vua gan gia tri cho mang so nguyen ma ko the hien co bao nhieu phan tu
	int marks[] = {40, 60, 70};
	
	//vua khai bao vua gan gia tri cho 1 mang nhung ko gan het gia tri cho cac phan tu
	int ages[5] = {20, 25, 28};
	
	//khai bao 1 array ma khong the hien so phan tu -> khong duoc
	//int moneys[];
	
	//in ra man hinh cac gua tri cua mang 
	//numbers
	printf("\n mang numbers chua cac gia tri la: ");
	for (int i =0; i <3; i++){
	printf("%d ", numbers[i]);
	}
	//tim so phan tu trong mang
	int n = sizeof(marks)/sizeof(int);
	printf("\n mang marks chua cac gia tri la: ");
	for( int i = 0; i<n; i++){
	printf("%d ", marks[i]);
	}
	//ages 
	printf("\n mang ages chua cac gia tri la: ");
	for (int i = 0; i<5; i++){
	printf("%d ", ages[i]);
}
    //nhap vao gia tri cua mang arr
    printf("\n nhap gia tri cho mang arr: ");
    for(int i =0; i<5; i++){
	printf("\n nhap gia tri cua phan tu thu %d: ", i);
	scanf("%d", &arr[i]);
	}
	//xuat gia tri vua nhap ra man hinh
	printf("\n mang chua cac gia tri la: ");
	for(int i =0; i<5; i++){
		printf("%d ", arr[i]);
	} 
	//c2
	printf("\n mang chua cac gia tri la: ");
	for(int i =0; i<5; i++){
		printf("\n arr[%d=%d", i, arr[i]);
	}
}
