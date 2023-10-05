#include <stdio.h>
//Last K Lines: Write a method to print the last Klines of an input file using C

#define MAX_LINES 100
#define MAX_LEN 1000

int main() {
   int kLines;
   printf("Type a number: \n");
   scanf("%d", &kLines);

   FILE *fptr;
   fptr = fopen("test1.txt","r");

   if (fptr == NULL)
   {
      printf("Error opening file.\n");
      return 1;
   }

   printLastKLines(fptr, kLines);
   fclose(fptr);
   return 0;
}

void printLastKLines(FILE *fptr, int k){
   char data[MAX_LINES][MAX_LEN];
   int line = 0;
   
   while (!feof(fptr) && !ferror(fptr))
      if (fgets(data[line], MAX_LEN, fptr) != NULL)
         line++;
   
   printf("%s\n", data[line - 1]);
   for (int i = line - 2; i >= line-k && i >= 0; i--)
      printf("%s", data[i]);
}