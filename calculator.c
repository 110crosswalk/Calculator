#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, num1,num2,result;


printf("what operatoin do you want to do?\n");
printf("press 1 to add\n");
printf("press 2 to subtract\n");
scanf("%d",&n);
printf("please enter number\n");
scanf("%d",&num1);
printf("second number\n");
scanf("%d",&num2);
switch(n)
{
    case 1: result=num1+num2;
    printf("%d\n",result);
    break;
    case 2: result=num1-num2;
    printf("%d",result);
    break;
}
  return 0;
}
