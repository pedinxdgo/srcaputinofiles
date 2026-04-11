#include <stdio.h>
#include <string.h>

void main(){
    char frase[100];
    int espacos = 0;
    printf("Digite uma frase: ");
    fgets(frase, 100, stdin);
    for(int i = 0; frase[i] != '\0' ; i++) {
        if(frase[i] == ' ') {
            espacos++;
        }
    }
    printf("A frase tem %d espacos", espacos);
}