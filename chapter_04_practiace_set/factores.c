 #include<stdio.h>
 
 int main()
 {
    int n;
    int f=1;
    
    printf("Enter number(0 to 12 only) for it's factor : ");
    scanf("%d",&n);
    printf("So,\n %d!\n\t",n);
    for (int i = n; i>1; i--)
    {     printf("%d*",i);
          f *=i; }
    printf("1");
    printf(" = %d",f);
    return 0;
 }