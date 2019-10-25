#include<stdio.h>
int main()
{
    int n,i,p,r,x;
    scanf("%d",&n);
    p=sqrt(1+4*(2*n)/3);
    r=(-1+p)/2;
    i=r;
    x=n-(3*i*(i+1)/2);
    i++;
    if(x==0)
        printf("Motu");
    else
        if(x<=i)
            printf("Patlu");
        else
            printf("Motu");
    return 0;
}
