#include<stdio.h>
#include<conio.h>
void main()
{
char a[100],b[100];
int i,l=0,c=0,j=0,m=0;
clrscr();
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
l++;
}
for(i=l-1;i>=0;i--)
{
b[j]=a[i];
j++;
m++;
}
for(i=0;i<l;i++)
{
for(j=i;j<m;j++)
{
if(a[i]==b[j])
c++;
break;
}}
if(l==c)
printf("yes");
  else
    printf("no");
getch();
}
