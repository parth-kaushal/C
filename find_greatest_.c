// //program to find greatest of three numbers..

// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("enter three numbers:");
//     scanf("%d %d %d",&a,&b,&c);
//     int result=a>b?(a>c?a:c):(b>c?b:c);
//     printf("grestest number: %d",result);
//     return 0;
// }

// same program with the help of if/else meathod....

#include<stdio.h>f
int main(){
    int a,b,c;
    printf("enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        printf("largest number:%d",a);
        else
        printf("largest number:%d",c);
    }
        else if(b>a)
        {
            if (b>c)
            printf("largest number:%d,b");
            else
            printf("largest number:%d",c);
        }
        return 0;
}