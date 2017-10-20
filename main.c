#include "main.h"

   int main(int argc , char*argv[])
   {
      FILE* f1,f2;
      
      fopen(f);
      if((f == NULL) && (f2 == NULL))
      {
         perror("Invalid file");
      }
      else 
      {
         readFile(f1,f2);
      }
      return 0;
   }
      
   void readFile(FILE* f1, FILE* f2 )
   {
      char*  name[51];
      char* value = (malloc)value (x*sizeof(char*);/*x is undefined since theres no limit*/
     do
      {
         fscanf("%s = %s", name, value);
         
         if(
