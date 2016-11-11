#include <stdio.h>

int main()
{
   FILE *fp;
   char c;

   fp = fopen("file.txt", "w");
    //control
   c = fgetc(fp);
    printf("%d\t",c);
   if( ferror(fp) )
   {
      printf("1-) Error in reading from file : file.txt\n");
   }
   clearerr(fp);
   
   if( ferror(fp) )
   {
      printf("2-) Error in reading from file : file.txt\n");
   }
    //control
   c = fgetc(fp);
    printf("%d\t",c);
   fclose(fp);

   return(0);
}
