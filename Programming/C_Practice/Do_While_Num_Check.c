#include <stdio.h>

int main() {
    int num;
    
    do
      {
            printf("\nCheck your number is = 100 or not.\n");
            printf("\nEnter number: ");
            scanf("%d", &num);
            
        if(num == 100)
        {
            printf("Right, 100 = %d\n", num);
            printf("Thank you.\n\n");
        }
        else
        {
            printf("Naah! 100 is not = to %d\n", num);
            printf("Try, Again.\n\n");
        }
      }
        
    while (num != 100);
        
    return 0;
}