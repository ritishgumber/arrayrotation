#include<conio.h>
#include<stdio.h>
void main()
{
int y,x,k,l,i,m,r,t;
int a[10],e[10],d[10];
char c[10];
clrscr();
scanf("%d %d",&t,&m);
for(i=0;i<t;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<m;i++)
{
c[i]=getche();
scanf("%d",&d[i]);
}

for(r=0;r<m;r++)
{
l=c[r];
x=d[r];
switch(l)
{
case 114 :{
	  printf("\n  %d",a[x-1]);
	  break;
	  }
case 99 :{
	for(i=0,y=x;i<t-x;i++,y++)
	{
	e[i]=a[y];
	}
	for(k=0;k<x;k++)
	{
	e[i]=a[k];
	i++;
	}for(k=0;k<t;k++)
	{printf("   %d",e[k]);}
	for(k=0;k<t;k++)
	a[k]=e[k];
	break;}
case 97 :{for(i=0,y=x;i<x;i++)
	{e[i]=a[t-y+i];
	}
	for(k=0;k<t-x;k++,i++)
	{
	e[i]=a[k];
	}
	for(k=0;k<t;k++)
	{
	a[k]=e[k];
	}for(k=0;k<t;k++)
	printf(" \n %d",a[k]);
	break;
}}   }
getch();
}
