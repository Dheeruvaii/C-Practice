Function programs:
/*Write a function that takes an integer number of any digits and return the number
reversed.IN the calling function read a number pass it to the function and display the
result. */
#include<stdio.h>
#include<conio.h>
int reverse(int);
main()
{
int n,r;
printf("Enter number:");
scanf("%d",&n);
r=reverse(n);/*function call by passing argument n i.e value of n is passed */
printf("Reverse number is %d",r);
getch();
}
int reverse(int n)
{
int rem,s=0;
while(n!=0)
{
rem=n%10;/* remainder i.e last digit of n*/
s=s*10+rem; /* multiplying previous sum by 10 i.e. shifiting its postion and
remainder is added */
n=n/10; /* quotient i.e to decrease number size by 1 digit */
}
return 
}