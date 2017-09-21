#include<stdio.h>
int main()
{
int a;
printf("enter something");
scanf("%d",&a);
if(a>=0 && a<=9)
{
printf("'%a' is an integer\n");
}
else
{
printf("'%a' is not an integer\n");
}
return(0);
}

