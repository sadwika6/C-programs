#include<stdio.h>
int main()
{
    int n,a,b,i,r,count=0;
    scanf("%d",&n);
    while(n>0)
    {
        scanf("%d %d",&a,&b);
        for(i=a;i<=b;i++)
        {
            r=i%10;
            
            if(r==2||r==3||r==9)
            {
                count++;
            }

        }
        printf("%d",count);
        n--;
    }
    return 0;
}
