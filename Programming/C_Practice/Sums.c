#include <stdio.h>

int main() {
    int num1, num2, choice;
    
    printf("\nEnter number num1: ");
    scanf("%d",&num1);

    printf("Enter number num2: ");
    scanf("%d",&num2);

    printf("\nPress \n  1 : for Addition\n  2 : for Substraction\n  3 : for Multiplication\n  4 : for Division\n  5 : for Modulas\n\nEnter: ");
    scanf("%d",&choice);
    
    switch(choice)
    {
        case 1:
            printf("Ans = num1 + num2 = %d\n",num1+num2);
            break;
        case 2:
            printf("Ans = num - num2 = %d\n",num1-num2);
            break;
        case 3:
            printf("Ans = num1 * num2 = %d\n",num1*num2);
            break;
        case 4:
            printf("Ans = num / num2 = %d\n",num1/num2);
            break;
        case 5:
            printf("Ans = num / num2 = %d\n",num1%num2);
            break;
        default:
          printf("not valid\nanswer only eccept between 1-5");
    }
    
    
    return 0;
}