#include <stdio.h>

int main() {
    const float pi = 3.14;
    	  float r;

    printf("\nenter radius of your circle: ");
    scanf("%f", &r);
    printf("\nyour circle radius is: %f\n", pi * r * r );
    
    return 0;   
}
