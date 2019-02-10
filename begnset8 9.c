#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,p,i,f=0;
clrscr();
scanf("%d%d",&a,&b);
p=a*b;
for(i=1;i<p;i++)
{
if(p==i*i)
f=1;
}
if(f==1)
printf("yes");
else
printf("no");
getch();
}
