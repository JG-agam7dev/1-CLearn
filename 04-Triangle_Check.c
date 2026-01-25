// Date-25/1/2026 Day-Sunday
#include<stdio.h>
int main(){
    int s1,s2,s3,LS,sum; // s->side of triangle.
    printf("\nEnter three sides of a triangle to check whether it is valid or not.\n");
    scanf("%d%d%d",&s1,&s2,&s3); // LS->Large_Side
    if ( s1 > s2 && s1 > s3){
            LS = s1;
            sum = s2 + s3;
        }
    else if ( s2 > s3){
        LS = s2;
        sum = s1 + s3;
    }
    else {
        LS = s3;
        sum = s1 +s2;
    }
    if ( sum > LS)
        printf ("Triangle with sides %d , %d , %d is a valid triangle.\n",s1,s2,s3);
    else
        printf("Triangle with sides %d , %d , %d is not a valid triangle.\n",s1,s2,s3);
    return 0;
}