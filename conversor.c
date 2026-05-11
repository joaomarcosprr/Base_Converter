#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int v[32];

void Decimal_Binario(){
    int n, i = 0;
    printf("Digite o Valor na Base Decimal: ");
    scanf("%d", &n);
    while(n > 0){
        v[i] = n % 2;
        n = n / 2;
        i++;
    }
    system("cls");
    printf("Seu valor em Birario eh: ");
    for(int j = i - 1; j >= 0; j--){
        printf("%d", v[j]);
    }
    printf("\nAperte ENTER: ");
    getchar();
    getchar();
};

void Decimal_Octal(){
    int n, i = 0;
    printf("Digite o Valor na Base Decimal: ");
    scanf("%d", &n);
    while(n > 0){
        v[i] = n % 8;
        n = n / 8;
        i++;
    }
    system("cls");
    printf("Seu valor em Octal eh: ");
    for(int j = i - 1; j >= 0; j--){
        printf("%d", v[j]);
    }
    printf("\nAperte ENTER: ");
    getchar();
    getchar();
};

void Decimal_Hexa(){
    int n, i = 0;
    printf("Digite o Valor na Base Decimal: ");
    scanf("%d", &n);
    while(n > 0){
        v[i] = n % 16;
        n = n / 16;
        i++;
    }
    system("cls");
    printf("Seu valor em Hexadecimal eh: ");
    for(int j = i - 1; j >= 0; j--){
        if (v[j] <= 9){
            printf("%d", v[j]);
        } else if(v[j] == 10){
            printf("A");
        }else if(v[j] == 11){
            printf("B");
        }else if(v[j] == 12){
            printf("C");
        }else if(v[j] == 13){
            printf("D");
        }else if(v[j] == 14){
            printf("E");
        }else{
            printf("F");
        }
    }
    printf("\nAperte ENTER: ");
    getchar();
    getchar();
};



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
                    Decimal_Binario();
                    sair_base = true;
                }else if(base_fim == 2){
                    Decimal_Octal();
                    sair_base = true;
                }else if(base_fim == 3){
                    Decimal_Hexa();
                    sair_base = true;
                }else{
                    printf("Este valor nao e valido, aperte ENTER para voltar");
                    sair_base = false;
                    getchar();
                    getchar();
                }
                }while(!sair_base);

            break;

            case 2:
                do{
                system("cls");
                printf("Para qual outra base voce quer converter\n");
                printf("1 - Decimal\n");
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
                    sair_base = false;
                    getchar();
                    getchar();
                }
                }while(!sair_base);

            break;

            case 3:
                do{
                system("cls");
                printf("Para qual outra base voce quer converter\n");
                printf("1 - Decimal\n");
                printf("2 - Binario\n");
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
                    sair_base = false;
                    getchar();
                    getchar();
                }
                }while(!sair_base);

            break;

            case 4:
                do{
                system("cls");
                printf("Para qual outra base voce quer converter\n");
                printf("1 - Decimal\n");
                printf("2 - Binario\n");
                printf("3 - Octal\n");
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
                    sair_base = false;
                    getchar();
                    getchar();
                }
                }while(!sair_base);

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