#include <stdio.h>
#include <string.h>

int main() {
    char ch;            
    char str[100];      
    char sentence[100]; 

    scanf("%c", &ch);
    scanf("%s", str);
    
    getchar();

    scanf("%[^\n]%*c", sentence);

    printf("%c\n", ch);
    printf("%s\n", str);
    printf("%s\n", sentence);

    return 0;
}