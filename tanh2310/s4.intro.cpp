#include <stdio.h>

int main()
{
	//khai bao va gan' gia tri cho cac bien 
	int songuyen = 15;
	float sothuc = 123.123456789;
	char kitu = 'a';
	char chuoi[40] = "Hanh"; //khai bao chuoi~

    //in cac bien ra man hinh 
    printf("\n songuyen co gia tri la %d", songuyen);
    printf("\n songuyen in theo %%d la %d", songuyen);
    printf("\n songuyen in theo %%x la %x", songuyen);
    printf("\n songuyen in theo %%o la %o", songuyen);
    printf("\n sothuc in theo \"%%e\" la %e", sothuc);
    printf("\n sothuc in ra 2 so sau dau thap phan la %.2f", sothuc);
    printf("\n kitu in theo %%c la %c", kitu);
    printf("\n kitu in theo %%d la %d ", kitu);
    printf("\n chuoi co gia tri la %s", chuoi);

}



