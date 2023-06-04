#include<stdio.h>

int main() {
    char opcao = 49;

    while (opcao!=48)
    {
        printf("\n1) Opcao 1");
        printf("\n2) Opcao 2");
        printf("\n3) Opcao 3");
        printf("\n0) SAIR");
        printf("\nInforme a opcao: ");
        scanf(" %c", &opcao);

        // printf("Opcao: %c", opcao);
        switch (opcao)
        {
        case 49:
            printf("Opcao 1 selecionada!");
            break;
        case 50:
            printf("Opcao 2 selecionada!");
            break;
        case 51:
            printf("Opcao 3 selecionada!");
            break;
        case 48:
            break;
        default:
            printf("Opcao invalida! Selecione uma opcao correta!");
            break;
        }
    }

    return 0;
}
