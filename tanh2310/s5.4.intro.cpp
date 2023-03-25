#include <stdio.h>

int main()
{
	int choice;
	
	printf("\n nhap lua chon: ");
	scanf("%d", &choice);
	
	switch(choice){
		case 1:
			printf("\n ban da lua chon so 1");
			break;
		case 2:
			printf("\n ban da lua chon so 2");
			break;
		case 3:
			printf("\n ban da lua chon so 3");
			break;
		default:
			printf("\n ban da lua chon sai. vui long chon tu 1-3");
			break;
			
		
	}
	printf("\n ket thuc chuong trinh ");
	
}
