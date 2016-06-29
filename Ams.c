#include<stdio.h>
#include<conio.h>
int power(int,int);
void main()
{
int a,sum=0,temp,remainder,digit=0;
printf("Input an integer\n");
scanf("%d",&a);
temp=a;
while(temp!=0)
{
digit++;
temp=temp/10;
}
temp=a;
while(temp!=0)
{
remainder=temp%10;
sum=sum+power(remainder,digit);
temp=temp/10;
}
if(a==sum)
printf("%d is an armstrong number\n",a);
else
printf("%d is not an armstrong number\n",a);
getch();
}
int power (int a, int r)
{
int c,p=1;
for(c=1;c<=r;c++)
p=p*a;
getch();
}
