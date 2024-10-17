#include<stdio.h>
void swap(int*a ,int *b)//function definition
{
int temp;//for swap
temp=*a;
*a=*b;
*b=temp;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("Before swap: %d %d",a,b);
    swap(&a,&b);//function call
    printf("After swap: %d %d",a,b);
}