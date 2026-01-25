// Date-25/1/2026 Day-Sunday
#include<stdio.h>
#include<ctype.h>
int main(){
char ch;
printf ("Enter any character which you want to give.\n");
scanf("%c",&ch);
if (isupper(ch))
    printf("%c is a capital letter.\n",ch);
else if (islower(ch))
    printf("%c is a lower letter.\n",ch);
else if (isdigit(ch))
    printf("%c is a digit.\n",ch);
else
    printf("%c is a special character.\n",ch);
return 0;
}