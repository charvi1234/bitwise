#include<stdio.h>
int main()
{
    int x,y,m,n,z;
    scanf("%d%d",&x,&y);
    m=~x;
    n=~y;
    z=~(m|n);
    printf("%d",z);
}
