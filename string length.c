#include<stdio.h>
void read(char[]);
int string_length(char[]);
main()
{
     char s1[100];
     int x;
     printf("Enter the string\n");
     read(s1);
     x=string_length(s1);
     printf("String length : %d \n",x);
}
void read(char s1[100])
{
     gets(s1);
}
int string_length(char s1[100])
{
   int i=0;
   while(s1[i]!='\0')
   {
       i++;
   }
   return i;
}
