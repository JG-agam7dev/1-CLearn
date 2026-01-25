// Date-25/1/2026 Day-Sunday
#include<stdio.h>
int main(){
char ch;
printf ("Enter any character which you want to give.\n");
scanf("%c",&ch);
if ( ch >= 65 && ch <= 90 )
    printf("%c is a capital letter.\n",ch);
else if ( ch >= 97 && ch <= 122 )
    printf("%c is a lower letter.\n",ch);
else if ( ch >= 48 && ch <= 57)
    printf("%c is a digit.\n",ch);
else 
    printf("%c is a special character.\n",ch);
return 0;
}