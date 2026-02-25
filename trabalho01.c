#include<stdio.h>

int main(){
    int opcao;
    do{
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