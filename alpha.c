#include<stdio.h>
int main()
{
char ch;
printf("Enter the character\n");
scanf("%c",&ch);
if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
printf("The character is alphabet");
else
printf("The character is not alphabet");
}
