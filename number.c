#include<stdio.h>
#include<conio.h>
int fact(int n);
void main()
{
int n;
printf("enter integer");
scanf("%d",&n);
printf("the factorial is %d",n,fact(n));
getch();
}
int fact(int n)
{
if(n==1)
return 1;
else 
return(n*fact(n-1));
}
