#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[100];
int i=0,l=0;
clrscr();
puts("enter a string");
gets(str);
for(i=0;str[i]!='\0';i++)
{
l=l+1;
}
printf("%d",l);
getch();
}
