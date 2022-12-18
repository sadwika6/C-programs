#include<stdio.h>
int main()
{
    int L,B,W,C,A,T;
    scanf("%d %d %d %d",&L,&B,&W,&C);
    A=(L*B)-((L-2*W)*(B-2*W));
    T=C*A;
    printf("%d",T);
    return 0;
}
