#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(){
    bool sair = false, sair_base = false;
    int base_inicio, base_fim;
    do{
        system("cls");
        printf("Ola caro usuario!\n");
        printf("Qual tipo de conversao voce quer que eu faca?\n");
        printf("1 - Decimal para outra base\n");
        printf("2 - Binario para outra base\n");
        printf("3 - Octal para outra base\n");
        printf("4 - Hexadecimal para outra base\n");
        printf("5 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &base_inicio);

        switch (base_inicio)
        {
            case 1:
                do{
                system("cls");
                printf("Para qual outra base voce quer converter\n");
                printf("1 - Binario\n");
                printf("2 - Octal\n");
                printf("3 - Hexadecimal\n");
                printf("Opcao: ");
                scanf("%d", &base_fim);
                if(base_fim == 1){

                    sair_base = true;
                }else if(base_fim == 2){
                    
                    sair_base = true;
                }else if(base_fim == 3){
                    
                    sair_base = true;
                }else{
                    printf("Este valor nao e valido, aperte ENTER para voltar");
                    sair_base = true;
                    getchar();
                    getchar();
                }
                }while(!sair_base);

            break;

            case 2:
                system("cls");
                printf("Para qual outra base voce quer converter\n");
                printf("1 - Decimal\n");
                printf("2 - Octal\n");
                printf("3 - Hexadecimal\n");
                printf("Opcao: ");
                scanf("%d", &base_fim);

            break;

            case 3:
                system("cls");
                printf("Para qual outra base voce quer converter\n");
                printf("1 - Decimal\n");
                printf("2 - Binario\n");
                printf("3 - Hexadecimal\n");
                printf("Opcao: ");
                scanf("%d", &base_fim);

            break;

            case 4:
                system("cls");
                printf("Para qual outra base voce quer converter\n");
                printf("1 - Decimal\n");
                printf("2 - Binario\n");
                printf("3 - Octal\n");
                printf("Opcao: ");
                scanf("%d", &base_fim);

            break;

            case 5:
                sair = true;
            break;

            default:
                printf("Este valor nao eh valido!\n");
                printf("Aperte ENTER para voltar para o MENU!");
                getchar();
                getchar();
            break;

        }


    }while(!sair);
    return 0;
}