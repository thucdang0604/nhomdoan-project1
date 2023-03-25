#include <stdio.h>

int main()
{
	//khai bao hai bien de luu gia' tri nam va` doanh so'
	int year, biz;
	
	printf("\n nhap so nam: ");
	scanf("%d", &year);
	
	printf("\n nhap doanh thu: ");
	scanf("%d", &biz);
	
	//neu nhu year >= 10 va biz >= 5000
	//thi ban la KHTT
	//con khong thi ban chua la KHTT
	if ( year >= 10){
	}
		if(biz >= 5000){
			printf("\n ban la KHTT");
		
		}
		else{
			printf("\n ban chua du de thanh KHTT- biz");
		}
	
}
