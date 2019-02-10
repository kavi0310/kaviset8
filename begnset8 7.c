#include<stdio.h>
#include<conio.h>
void main()
{
char a[100];
int i,l=0,k;
clrscr();
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
l++;
}
k=l/2;
if(l%2!=0)
{
for(i=0;i<l;i++)
{
if(i==k)
a[i]='*';
}
printf("%s",a);
}
else
{
for(i=0;i<l;i++)
{
if(i==k)
{
a[i]='*';
a[i-1]='*';
}}
printf("%s",a);
}
getch();
}
