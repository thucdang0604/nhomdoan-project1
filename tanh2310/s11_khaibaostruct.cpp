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
	
	//khai bao 1 bien co kieu du la struct boook
	struct book book1;
	
	//nhap du lieu cho bien book1
	printf("\n nhap ten quyen sach: ");
	gets(book1.name);
	
	printf("\n nhap ten tac gia: ");
	gets(book1.author);
	
	printf("\n nhap gia: ");
	scanf("%f", &book1.price);
	
	//xuat gia tri vua nhap
	printf("\n nhap thong tin quyen sach");
	printf("\n name: %s", book1.name);
	printf("\n author: %s", book1.author);
	printf("\n edn: %d", book1.edn);
	printf("\n price: %f", book1.price);
	
}
    //dinh nghia 1 struct issue
    struct issue{
    	char borrower[40];
    	char date[40];
    	struct book book1;
	};
	//khai bao 1 bien muon sach
	struct (book book1);
	
	

