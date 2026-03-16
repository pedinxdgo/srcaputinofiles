#include <stdio.h>


float IMC(float peso, float altura){
        float resultado;

        resultado = peso/(altura*altura);

        return (resultado);
}

float boletim(float n1, float n2){
    float media;
    media = (n1 + n2) /2;
    return (media);
    }

int ehPar(int numero1){
    int verificar;
    if (numero1 % 2 == 0){
        verificar = 0;
    }
    else{
        verificar = 1;
    }
    return (verificar);
    }


int main(){
    int funcao;
    float peso, altura;
    float nota1, nota2;
    int numero;
    float imc;
    int parOuImpar;
    float media;


    printf("============= 1 - Calcular IMC ============\n");
    printf("============= 2 - Calcular media ============\n");
    printf("============= 3 - Verificar par/impar ============\n");
    //printf("============= 4 - Sair ============\n");
    printf("Digite uma opcao: ");
    scanf("%d", &funcao);
    switch(funcao){
        case 1:
            printf("Digite seu peso em kg: \n");
            scanf("%f", &peso);
            printf("Digite sua altura em cm: \n");
            scanf("%f", &altura);
            imc = IMC(peso, altura);
            printf("Seu IMC e: %.2f \n", imc);
            break;
        case 2:
            
            printf("Digite a primeira nota do aluno: \n");
            scanf("%f", &nota1);
            printf("Digite a segunda nota do aluno: \n");
            scanf("%f", &nota2);
        
            media = boletim(nota1, nota2);
            printf("A media do aluno e %.2f", media);
            break;
        case 3:
            printf("========== 0 - Par ========");
            printf("========== 1 - Impar ========");
            printf("digite um numero: ");
            scanf("%d", &numero);
            parOuImpar = ehPar(numero);
            printf("O numero e classificado como: %d", parOuImpar);
            break;
        //case 4:
            //printf("Saindo do programa...");
        default:
            printf("Opcao invalida");
        }
    return 0;
}