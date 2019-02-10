#include<stdio.h>
#include<conio.h>
void main()
{
int n,a,b,i,f=0;
clrscr();
scanf("%d",&n);
scanf("%d%d",&a,&b);
for(i=a;i<b;i++)
{
if(n==i)
f=1;
}
if(f==1)
printf("yes");
else
printf("no");
getch();
}

