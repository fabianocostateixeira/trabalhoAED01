#include<stdio.h>

int main(){
    int opcao;
    do{
        float lado;
        printf("\n*** MENU DE OPCOES ***\n");
        printf("\n1 - Calcular area do quadrado");
        printf("\n2 - Calcular a area do triangulo retangulo");
        printf("\n3 - Sair");
        printf("\n\nDigite a opcao desejada: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("\nCALCULO DA AREA DO QUADRADO\n");
            printf("\nDigite o valor do lado do quadrado: ");
            scanf("%f", &lado);
            printf("\nA area do quadrado eh: %.2f\n", lado * lado);
            break;
        case 2:
            printf("\nCALCULO DA AREA DO TRIANGULO RETANGULO\n");
            break;
        case 3:
            printf("\nSAINDO DO PROGRAMA\n");
            break;
        default:
            printf("\nOPCAO INVALIDA\n");
            break;
        }
    }while(opcao != 3);
}