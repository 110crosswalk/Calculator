#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, num1,num2,result;

    printf("what operatoin do you want to do?\n");      //you need put indintation in
    printf("press 1 to add\n");                         //you can combine three printfs in to one
    printf("press 2 to subtract\n");
    scanf("%d",&n);
    
    printf("please enter number\n");                    //separate logic by empty lines
    scanf("%d",&num1);
    
    printf("second number\n");
    scanf("%d",&num2);
    
    switch(n)
    {
        case 1: 
            result=num1+num2;                           //some people jem everything togather like this line
            printf("%d\n",result);                      //i think puting a spaces makes it more readable
        break;
        case 2: 
            result = num1 - num2;                           //like this
            printf("%d", result);
        break;
    }
  return 0;
}
