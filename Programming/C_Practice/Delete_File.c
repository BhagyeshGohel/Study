#include <stdio.h>

int main() {
    char Delete;
    
    printf("\nAre you sure you want to delete file? type Yes [Y/y] / No [N/n] : ");
    scanf("%c", &Delete);
    
    switch(Delete)
    {
        case 'y':
        case 'Y': {printf("\nFile was deleted succesfully ...\n\n");}
            break;
        case 'n':
        case 'N': {printf("\nFile was not deleted ...\n\n");}
            break;
        default:{printf("\nThe input was incorrect ...\n\n");}
    }

    return 0;
}
