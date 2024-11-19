 #include<stdio.h>
 
 int main()
 {
    float income;
    printf("Enter Your income in L :");
    scanf("%f",&income);
    if(10<income){
        printf("\tyour tax is %f lakh",(income*0.3)+((income-5)*0.2)+(income-2.5)*0.05);}
    else if(income >=10.0 && income<=5.0) 
         printf("\tyour tax is %f lakh",((income-5)*0.2)+(income-2.5)*0.05);
    else if (income >=5.0 && income<=2.5)
         printf("\tYour tax is %f lakh",(income-2.5)*0.05);
    else if(income<2.5)
        printf("\tyour tax is 0");     
    return 0;
 }