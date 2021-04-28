#include <stdio.h>
#include <ctype.h>

int main(void) 
{
    float character_count = 0.0f, word_count = 0.0f;
        
    char ch;
    
    printf("Enter a sentence: ");

    while ((ch = getchar()) != '\n') {
        
        if (ch == ' ') {
            word_count++;
            continue;
        }

        character_count++;
    }
    word_count += 1;
    printf("Average word length: %.1f", character_count / word_count);

    return 0;
}
    
