#include <stdio.h>
#include <string.h>

int main(){
    
    char s[50];
    
    fgets(s, sizeof(s), stdin);
    
    printf("Hello, World!\n");
    printf("%s",s);
    
    return 0;
}