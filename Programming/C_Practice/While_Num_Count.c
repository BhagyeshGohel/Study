#include <stdio.h>

int main() {
    int num, count = 0;
    
    printf("\nTo show while loop division Enter number: ");
    printf("\n\nEnter number: ");
    scanf("%d", &num);
    
    while(num > 1)
    {
        count++;
        num = num >> 1;
    }
        
        printf("While loop count = %d\n", count);

    return 0;
}
