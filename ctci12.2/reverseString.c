#include <stdio.h>
#include <string.h>

int main() {
   char line[100];
   printf("Type a line: \n");
   scanf("%99[^\n]", line);
   reverse(line);
   printf("%s\n", line);
   return 0;
}

//Reverse String: Implement a function void reverse( char* str) in C or C++ which reverses a null-terminated string.
void reverse(char* str){
   int length = strlen(str);
   int start = 0;
   int end = length - 1;

   char temp;
   while (start < end){
      temp = str[start];
      str[start] = str[end];
      str[end] = temp;

      start++;
      end--;
   }
}
