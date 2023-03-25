#include <stdio.h>

int main(){
	int choice;
	
	printf("\n nhap lua chon cua ban: ");
	scanf("%d", &choice);
	
	if(choice ==1){
		printf("ban da lua chon so 1");
	}
	else if(choice ==2){
		printf("\n ban da lua chon so 2");	
	}
	else if(choice ==3){
		printf("\n ban da lua chon so 3");
	}
	else{
	    printf("\n ban da lua chon sai. vui long nhap tu 1-3");
	}
	printf("\n ket thuc chuong trinh");
	


}
