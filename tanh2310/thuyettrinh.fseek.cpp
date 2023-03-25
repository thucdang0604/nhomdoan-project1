#include <stdio.h>

int main () {
   FILE *fp;

   fp = fopen("file.txt","w+");
   fputs(" Xin chao co va cac ban ", fp);
  
   fseek( fp, 9, SEEK_SET );
   fputs(" chung minh la nhom 4", fp);
   fclose(fp);
   
   return(0);
}

