#include<stdio.h>
int main()
{
 int a, b;
 int sum;
 char confirm = 'n';
 do
 {
 printf("Enter first integer: ");
 scanf("%d", &a);
 printf("Enter second integer: ");
 scanf("%d", &b);
 sum = a + b;
 printf("The sum of %d and %d is %d\n", a, b, sum);
 printf("Do you have more sums for me [y/N]? ");
 scanf(" %c", &confirm);
 }
 while(confirm == 'y' || confirm == 'Y');
 return 0;
}

