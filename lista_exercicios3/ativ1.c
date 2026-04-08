#include <stdio.h>

void main(){
    int numero;
    for(int i = 0; i < 5; i++){
        printf("Digite um numero: \n");
        scanf("%d", &numero);
        printf("%d", numero);
    }
    printf("%d", numero);
}