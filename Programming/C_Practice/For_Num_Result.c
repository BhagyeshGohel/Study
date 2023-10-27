#include <stdio.h>

int main() {
    int num;

    printf("\nTo show for loop division Enter number: ");
    scanf("%d", &num);
    printf("\nResult:");
    
    for(num; num >= 1; num = num / 2)
    {
        printf("  %d", num);
    }

    printf("\n\n");

    return 0;
}
