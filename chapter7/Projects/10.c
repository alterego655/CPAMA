#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    int vowels = 0;
    
    printf("Enter a sentence: ");
    
    while ((ch = getchar()) != '\n') {
        
        switch (toupper(ch)) {
            case 'A': case 'E': case 'I': case 'O': case 'U':
                vowels++;
                break;
        }
    }
    printf("Your sentence contains %d vowels.", vowels);
    
    return 0;
}
