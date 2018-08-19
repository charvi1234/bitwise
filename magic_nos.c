#include<stdio.h>
#include<math.h>
void main()
{
int term,ans=0,x;
int d=1;
scanf("%d",&term);
while(term!=0)
{
  x=term&1;
  if(x)
  ans=ans+pow(5,d);
  term=term>>1;
  d++;
}
printf("%d",ans);
}
