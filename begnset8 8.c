#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,l=0;
clrscr();
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
l++;
}
if(l>2)
printf("yes");
else
printf("no");
getch();
}
