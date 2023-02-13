// //without third variable....

// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("enter two numbers");
//     scanf("%d %d",&a,&b);
//     printf("before swapping");
//     printf("\nfirst variable=%d \n second variable=%d",a,b);

//     a=a-b;
//     b=a+b;
//     a=b-a;
//     printf("\nfirst variable=%d \n second variable=%d",a,b);

// }

#include<stdio.h>
int main(){
    int a,b;
    printf("enter twu numbers");
    scanf("%d %d" ,&a,&b);
    a=a-b;
    b=a+b;
    a=b-a;
    printf("%d %d",a,b);
}