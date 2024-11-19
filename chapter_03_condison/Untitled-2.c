#include<stdio.h>

int main()
{
    float R,area,pi =3.14;
    printf("Enter redius for its area:");
    scanf("%f",&R);
    area = pi*R*R;
    printf("the Area of %f circle is %f",R,area);
    return 0;
}