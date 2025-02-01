#include<stdio.h>

int main()
{
    int a[]={12,45,75,32,15,18,20,21};
    int length = sizeof a/sizeof a[0];
    int taget = 3;
    int i;
    for ( i =0; i<length; i++){
        if(a[i]==taget){
            printf("The value Find at Index %d",i);
            break ;
        }
    }
    if (i==length){
        printf("Target not found ");
    }
    return 0;
}