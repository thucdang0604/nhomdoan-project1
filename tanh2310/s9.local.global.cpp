#include <stdio.h>

//khai bao bien toan cuc (global)
int global = 0;

void show(){
	//khai bao 1 bien cuc bo (local) trong ham show
	int local = 0;
	local++;
	global++;
	
	printf("\n show(): local is %d", local);
	printf("\n show(): global is %d", global);
}

int main(){
	//khai bao 1 bien cuc bo(local) trong ham main()
	int local = 0;
	
	//goi ham
	show();
	local++;
	global++;
	printf("\n main(): local is %d", local);
	printf("\n main(): global is %d", global);
	
	return 0;
}
