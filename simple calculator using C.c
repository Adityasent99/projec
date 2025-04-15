#include<stdio.h>
int main()
{
    float a,b,result;
    char operator;
    printf("Enter first number : ");
    scanf("%f",&a);

    printf("Enter operator: + , - , / , * ");
    scanf(" %c",&operator);
     
    printf("Enter second number : ");
    scanf("%f", &b);

    switch(operator)
    {
        case '+':
        result = a + b ;
        printf("result: %f\n",result);
        break;

        case '-':
        result = a - b;
        printf("result: %f\n",result);
        break;

        case '*':
        result = a * b;
        printf("result: %f\n",result);
        break;

        case '/':
        if(b != 0)
        {
        result = a/b;
        printf("result : %f");
        }
        else
        {
          printf("not divisible");
        }
        break;

        default:
               printf("Invalid operator try again\n");



    }
    return 0;


}