#include <stdio.h>

int main() {

    int op, num;

    printf("Menu\n");
    printf("-----------------\n");
    printf("1- Resto da divisão por 2\n");
    printf("2- Divisao por 2\n");
    printf("3- Sair\n");
    printf("Digite uma opção [1-3]: ");
    scanf("%i", &op);

    switch(op){
    case 1:
        printf("Digite o numero a ser verificado: ");
        scanf("%i", &num);
        printf("%i %% 2 = %i", num, num%2);
        break;
    case 2:
        printf("Digite o numero a ser dividido: ");
        scanf("%i", &num);
        printf("%i / 2 = %i", num, num/2);
        break;
    case 3:
        printf("Adeus fiii!!!!\n");
        break;
    default: printf("Opcao invalida");
    }

    return 0;
}
