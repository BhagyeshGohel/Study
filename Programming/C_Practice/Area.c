#include <stdio.h>

int main() {
    int length;
    int width;

    printf("\nFill below value to calculate area of your propety");
    printf("\n\nenter your property lenth in feet: ");
    scanf("%d", &length);
    printf("enter your property width in feet: ");
    scanf("%d", &width);
    printf("\nthe squre area of your propety is: %d\n",length*width);
    
    return 0;
}