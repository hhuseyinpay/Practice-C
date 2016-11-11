#include <stdio.h>

int main()
{
   FILE *fp;
 
   fp = fopen("file.txt", "w");

   fprintf(fp, "%s", "This is tutorialspoint.com");
   fclose(fp);
   
   return(0);
}

