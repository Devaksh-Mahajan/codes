#include <stdio.h>
 
void upper_string(char []);
 
int main()
{
   char string[100];
   
   printf("Enter a string to convert it into upper case\n");
   gets(string);
   
   upper_string(string);
   
   printf("The string in upper case: %s\n", string);
     
   return 0;
}