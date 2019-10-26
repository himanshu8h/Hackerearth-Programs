#include<stdio.h>

int main()
{
    int h[10001]={0},n,q,x;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        h[x]++;
    }
    scanf("%d",&q);
    for(int i=0;i<q;i++)
    {
        scanf("%d",&x);
        if(!h[x])
            printf("NOT PRESENT\n");
        else
            printf("%d\n",h[x]);
    }
}
