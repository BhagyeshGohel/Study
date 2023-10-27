#include <stdio.h>

int main() {
    int marks;
    printf("\nEnter marks: ");
    scanf("%d", &marks);
    
    // marks are valid between 0-100
    
    if (0<marks && marks<100) {
     
        if (marks>30 && marks<100){
            printf("\nWell done you are pass.\n\n");
        
            if(marks>50){
                printf("And, you are aligible for scholarship.\n\n");
            }

            else if(marks=50){
                printf("But, you are not aligible for scholarship,\nbecause, marks should be accepted uppon 50 to got aligible for scholrship.\n\n");
            }
            
            else {
                printf("But, you are not aligible for scholarship.\n\n");
            }
            
        } else {
            printf("\nSorry to say but, you are failed");
            printf("\nBetter luck next time.\n\n");
        }
    }
    else {
       printf("\nThe marks should be accepted between 0-100 and the nubers only,");
       printf("\nTry 2nd time properlly. \n\n"); 
    }
    return 0;
}