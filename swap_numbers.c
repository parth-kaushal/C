#include<stdio.h>
int main(){
    int x,y;
    printf("enter the value of x:");
    scanf("%d",&x);
    printf("enter the value of y:");
    scanf("%d",&y);

    int temp=x;
    x=y;
    y=temp;

    printf("after swapping: x=%d,y=%d",x,y);
    return 0;

}

