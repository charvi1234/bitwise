#include<stdio.h>
int main()
{
    int a,b,z;
    scanf("%d%d",&a,&b);
    z=~((~(a&~b))&(~(b&~a)));
    printf("%d",z);
}
