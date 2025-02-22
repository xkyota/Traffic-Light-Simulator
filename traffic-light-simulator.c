#include <stdio.h> 
#include <string.h>

int main(void){ 
    char color[10], colors[3][7] = {"red", "green", "yellow"}; 
    int i = 0; 

    printf("Enter a color >>> "); 
    scanf("%s", color); 

    for (i = 0; i < 3; i++)
    {
        if (strcmp(colors[i], color) == 0) 
        {
            switch (i)
            {
            case 0:
                printf("Stop \n"); 
                break;
            case 1:
                printf("Go \n"); 
                break;
            case 2: 
                printf("Slow down \n");
                break; 
            default: 
                printf("Invalid value \n");
                break;
            } 
            
        }
    }
    return 0; 
}