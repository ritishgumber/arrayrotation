#include<conio.h>
#include<stdio.h>
void main()
{
int x,k,i,r,e[10],a[10],d[10],t;
char c[10];
scanf("%d",&t);
for(i=0;i<t;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<t;i++)
{
scanf("%c %d",&c[i],&d[i]);
}
for(r=0;r<t;i++)
{
switch(c[r])
{ x=d[r];
case 'r':{
	  printf("%d",a[x+1]);
	  break;
	  }
case 'c':for(i=0;i<5-x;i++)
	{
	e[i]=a[x];
	x++;
	}
	for(k=0;k<x;k++)
	{e[i]=a[k];
	i++;
	}
	for(k=0;k<5;k++)
	a[k]=e[k];
	break;
case 'a':for(i=0;i<x;i++)
	{e[i]=a[4-i];
	}
	for(k=0;k<5-x;k++)
	{
	e[i]=a[k];
	}
	for(k=0;k<5;k++)
	{
	a[k]=e[k];
	}
	break;
}   }
getch();
}
