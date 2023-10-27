#include <stdio.h>

int main() {
    char Day;
    printf("\nenter day: ");
    scanf("%c", &Day);
    
    switch (Day) {
        case 'a' & 'A': printf("Yes, today is holyday\nBecause, it's a Sunday.\n");
        break;
        case 'b' & 'B': printf("No, today is workingday\nBecause, it's a Monday.\n");
        break;
        case 'c' & 'C': printf("No, today is workingday\nBecause, it's a Tuesday.\n");
        break;
        case 'd' & 'D': printf("No, today is workingday\nBecause, it's a Wednesday.\n");
        break;
        case 'e' & 'E': printf("No, today is workingday\nBecause, it's a Thursday.\n");
        break;
        case 'f' & 'F': printf("No, today is workingday\nBecause, it's a Friyday.\n");
        break;
        case 'g' & 'G': printf("Yes, today is holyday\nBecause, it's a Saturday.\n");
        break;
        default : printf("not valid\nTry again ...\n");
    }
    return 0;
}