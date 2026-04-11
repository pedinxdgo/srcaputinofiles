#include <stdio.h>
#include <string.h>

void main(){
    char palavra[50];
    printf("Digite uma palavra: ");
    scanf("%s", &palavra);
    int i;
    for(i = 0; palavra[i] != '\0'; i++){
    }
    for(i = i - 1; i >= 0; i--) {
        printf("%c", palavra[i]);
    }
    }
