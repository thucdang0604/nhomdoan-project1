#include <stdio.h>

int main()
{
	char names[3] = {'B','a','o'};
	char firstname[40]= "Nguyen";
	
	//xuat gia tri cua mang ra man hinh 
	printf("\n mang names co gia tri la: ");
	for (int i=0; i<3; i++){
		printf("%c", names[i]);
	}
	//xuat gia tri cua mang firstname ra man hinh
	printf("\n firstname co gia tri la %s", firstname);
}
