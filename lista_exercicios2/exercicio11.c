#include <stdio.h>
#include <string.h>

void main(){
    char palavra[50];
    int i, tamanho;
    tamanho = strlen(palavra);
    printf("Digite uma palavra: ");
    scanf("%s", &palavra);
    for(i = tamanho - 1; i >= 0; i--) {
        printf("%c", palavra[i]);
    }
}