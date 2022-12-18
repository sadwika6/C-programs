#include<stdio.h>
void main()
{
    int l,b,w,a1,c;
    scanf("%d %d %d %d",&l,&b,&w,&c);
    a1=(l*b)-(l-2*w)*(b-2*w);
    c=c*a1;
    printf("%d",a1);
}
