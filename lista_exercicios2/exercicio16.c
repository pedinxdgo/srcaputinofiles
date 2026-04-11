#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void main(){
    char palavra[50];
    char palavraInvertida[50];
    int i, tamanho;
    bool palindromo = true;
    printf("Digite uma palavra: ");
    scanf("%s", &palavra);
    tamanho = strlen(palavra);
    for(i = 0; i < tamanho; i++) {
        if (palavra[i] != palavra[tamanho - i - 1]) {
            palindromo = false;
        }
    }
    if(palindromo == false) {
        printf("\nA palavra inserida nao e um palindromo");
    }
    else{
    printf("A palavra e um palindromo");
    }
}

