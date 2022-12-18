#include<stdio.h>
int main()
{
    int n,a,b,r,rev=0;
    scanf("%d",&n);
    while(n>0)
    {
        scanf("%d",&a);
        b=a;
        while(a>0)
        {
           r=a%10;
           rev=(rev*10)+r;
           a=a/10;
        }
        if(rev==b)
        {
            printf("True\n");
        }
        else
        {
            printf("False\n");
        }
        n--;
    }
}
