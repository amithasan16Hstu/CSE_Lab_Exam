#include<stdio.h>
int main()
{
    long long int x,y;
    scanf("%lld %lld",&x,&y); 
    long long int mul=1;
   for(int i=0;i<y;y--)
    //while(y>0)
    {
        mul*=x;
        //y--;
    }
    printf("After calculation:");
    printf("x^y= %lld\n",mul);
}