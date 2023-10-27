// for know about today is holiday or workingday by add single charactor in prompt space step by step as(a="sunday", b="monday", c="tuesday", d="wednesday", e="thurseday", f="friyday", g="saturnday";)
#include <stdio.h>

int main() {
    char day;
    
    printf("\nwritedown today's day name at last of this santex to get know about holiday: ");
    scanf("%c", &day);
    // printf("%c", day);
    if (day=='a' | day=='A'){
        printf("\nYes, today is holiday\nBecause, it's a Sunday.\n");
    }
        else if (day=='b' | day=='B'){
        printf("\nNo, today is workingday\nBecause, it's a Monday.\n");
    }
        else if (day=='c' | day=='C'){
        printf("\nNo, today is workingday\nBecause, it's a Tuesday.\n");
    }
        else if (day=='d' | day=='D'){
        printf("\nNo, today is workingday\nBecause, it's a Wednesday.\n");
    }
        else if (day=='e' | day=='E'){
        printf("\nNo, today is workingday\nBecause, it's a Thursday.\n");
    }
        else if (day=='f' | day=='F'){
        printf("\nNo, today is workingday\nBecause, it's a Friyday.\n");
    }
        else if (day=='g' | day=='G'){
        printf("\nYes, today is holiday\nBecause, it's a Saturday.\n");
    }
        else{
        printf("\nNot valid\nTry again ...\n");
    }
    return 0;
}
