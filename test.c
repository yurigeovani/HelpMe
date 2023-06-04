#include<stdio.h>

int main() {
    int opcao = 2;

    while (opcao!=0)
    {
        printf("\n1) Opcao 1");
        printf("\n2) Opcao 2");
        printf("\n3) Opcao 3");
        printf("\n0) SAIR");
        printf("\nInforme a opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("\nOpcao 1 selecionada!");
            break;
        case 2:
            printf("\nOpcao 2 selecionada!");
            break;
        case 3:
            printf("\nOpcao 3 selecionada!");
            break;
        case 0:
            break;
        default:
            printf("\nOpca: ")
            printf("\nOpcao invalida! Selecione uma opcao valida!");
            break;
        }
    }
    
    return 0;
}
