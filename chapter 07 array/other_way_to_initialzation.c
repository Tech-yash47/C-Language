#include<stdio.h>

int main()
{
    int cgpa[]={31,24,45};
    // ya int cgpa[3]={8,7,6};
    for (int i = 0; i < 3; i++)
    {
        printf("value of array at index %d is %d\n",i,cgpa[i]);
    }
    
    return 0;
}