#include <stdio.h>
#include <string.h>

int main() {
    char text[50] = "";
    gets(text);
    
    strcat(text, "??!");
    printf("%s", text);

    return 0;
}