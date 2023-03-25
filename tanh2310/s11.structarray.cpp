#include <stdio.h>

int main()
{
	//dinh nghia 1 struct book
	struct book{
		char name[40];
		char author[40];
		int edn;
		float price;	
	};
	
	//khai bao so luong quyen sach can luu tru 
	int n;

	do{
			printf("\n nhap so luong quyen sach (2-10quyen): ");
			scanf("%d", &n);
			if (n<2 || n >10){
				printf("\n ban da nhao sai. Vui long nhap lai");
				
			}
		
	}while(n <2 || n >10);
	
	//khai bao mang struct
	struct book book[n];
	
	//nhap thong tin cac quyen sach
	for (int i =0; i<n; i++)
	{
		printf("\n nhap thong tin quyen sach thu %d", i+1);
		printf("\n nhap ten quyen sach: ");
		fflush(stdin);
		gets(book[i].name);
		printf("\n nhap ten tac gia: ");
		gets(book[i].author);
		printf("\nhap phien ban: ");
		scanf("%d", &book[i].edn);
		printf("\n nhap gia: ");
		scanf("%f", &book[i].price);
		
	}
	//xuat thong tin cac quyen sach
	for (int i =0; i<n; i++)
	{
		printf("\n thong tin quyen sach thu %d", i+1);
		printf("\n \t ten quyen sach la: %s", book[i].name);
		printf("\n \t ten tac gia la: %s", book[i].author);
		printf("\n \t ten phien ban la: %d", book[i].edn);
		printf("\n \t gia: %f", book[i].price);
	}
}
