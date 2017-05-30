#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, num1,num2,result;
    char option;

    do{
    printf("What operatoin do you want to do?\n");
    printf(" Press 1 to Add\n Press 2 to Subtract\n Press 3 to Multiply\n Press 4 to Divid\n");
    scanf("%d",&n);
    printf("please enter number\n");
    scanf("%d",&num1);
    printf("second number\n");
    scanf("%d",&num2);
    switch(n)
        {
        case 1: result=num1 + num2;
        printf("%d\n",result);
        break;
        case 2: result=num1 - num2;
        printf("%d\n",result);
        break;
        case 3: result=num1 * num2;
        printf("%d\n",result);
        break;
        case 4: result=num1 / num2;
        printf("%d\n",result);
        break;

        default:printf("Dose not Comput, shuting down.");

    }
    printf("\n do you want to continue y/n? \n");
    option=getche();
    }while(option=='y');
    getch();
  return 0;
}
