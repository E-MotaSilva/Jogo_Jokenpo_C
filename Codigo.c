#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    int main(){

        int escolha, escolhapc, menu;

        printf(" ====== BEM VINDO AO JOGO JOKENPO ======\n");

        do {
        printf(" \n");
        printf("---------------\n");
        printf("1 - Iniciar jogo\n");
        printf("2 - Ver regras do jogo\n");
        printf("3 - Encerrar\n");
        printf(" \n");
        printf("Escolha abaixo a opcao desejada: ");
        scanf("%d", &menu);
        printf(" \n");

        switch (menu)   {
        case 1:
            srand(time(0));
            escolhapc = rand() % 3 + 1;

            printf("Ok, vamos comecar o game!\n");
            printf("Voce quer PEDRA(1), PAPEL(2) OU TESOURA(3)?: ");
            scanf("%d", &escolha);
            printf(" \n");

                if (escolha == 1) {
                    printf("Voce escolheu PEDRA\n");
                    }              
                else if (escolha == 2) {
                    printf("Voce escolheu PAPEL\n");
            }
                else if (escolha == 3) {
                    printf("Voce escolheu TESOURA\n");
            }
                else {
                    printf("Escolha invalida!\n");               
            }
          if (escolhapc == 1) {
           printf("Seu adversario escolheu PEDRA\n");
           printf(" \n");
          }
          else if (escolhapc == 2) {
            printf("Seu adversario escolheu PAPEL\n");
            printf(" \n");
          }
          else {
            printf("Seu adversario escolheu TESOURA\n");
            printf(" \n");
          }
        if (escolha == escolhapc) {
            printf("Voces EMPATARAM!\n");
        }
        else if ( 
                (escolha > escolhapc && escolhapc != 1) ||
                (escolha == 2 && escolhapc == 1) ||
                (escolha == 1 && escolhapc ==3) ) {
            printf("Voce GANHOU!");
        }
        else {
            printf("Voce PERDEU!");
        }
            break;
        case 2:
            printf("---- REGRAS DO JOGO ----\n");
            printf(" \n");
            printf("PEDRA ganha de TESOURA\n");
            printf("TESOURA ganha de PAPEL\n");
            printf("PAPEL ganha de PEDRA\n");
            printf("Opcoes iguais equivalem a um EMPATE\n");
            printf(" \n");

            break;
        default:
            printf("Jogo encerrado");
            break;
        }
    }  
        while (menu != 3);

        return 0;
    }
