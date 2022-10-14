#include <stdio.h>
#include <math.h>


int main(){
    int opcao;
    printf("\nOpcao 1 - Jogo de cartas\n");
    printf("\nOpcao 2 - Sorteio\n");

    scanf("%d", &opcao);
    switch (opcao){
    case 1: {
        float aposta1, aposta2, meiopremio, premio;
        int carta1, carta2, carta3, carta4, total1, total2;
        printf("Voce escolheu a opcao de Jogo de cartas\n");
        printf("----------------------------------------\n");
        //Primeira carta do jogador 1
        printf("Jogador 1, qual e sua primeira carta?");
        scanf("%d", &carta1);
        //Primeira carta do jogador 2
        printf("Jogador 2, qual e sua primeira carta?");
        scanf("%d", &carta2);
        //Aposta do jogador 1
        printf("Jogador 1, digite o valor para apostar \n");
        scanf("%f", &aposta1);
        //Aposta do jogador 2
        printf("Jogador 2, digite o valor para apostar \n");
        scanf("%f", &aposta2);
        
        premio = aposta1 + aposta2;
        printf("Agora voces terao que mostrar a sua segunda carta\n");
        printf("----------------------------------------\n");
        //Segunda carta jogador 1
        printf("Jogador 1, qual a sua segunda carta? \n");
        scanf("%d", &carta3);
        //Segunda carta jogador 2
        printf("Jogador 2, qual a sua segunda carta? \n");
        scanf("%d", &carta4);

        if(carta1 == 0 || carta2 == 0){
            printf("O numero das cartas nao pode ser zero");
        }
        else if(carta3 == 0 || carta4 == 0){
            printf("O numero das cartas nao pode ser zero");

        }    
        //Teste do jogador 1
        if(carta1 == carta3)
            total1 = (carta1 + carta3) * 2;
        //Teste para ver se sao consecutivos  
        else if((carta1 - carta3) == 1 || -1){
            total1 = (carta1 + carta3) * 3;
            //Resto das possibilidades
         } else
                total1 = carta1 + carta3;
          

        //Teste do jogador 2 
        if(carta2 == carta4)
            total2 = (carta2 + carta4) * 2;

        //Teste para ver se sao consecutivos  
        else if((carta2 - carta4) == 1 || -1)
            total2 = (carta2 + carta4) * 3;

            //Resto das possibilidades
            else 
                total2 = carta2 + carta4;

        if(total1 == total2){
            meiopremio = (aposta1 + aposta2)/2;
            printf("%d \n", total1);
            printf("O valor apostado foi de R$ %.2f\n", premio);
            printf("Os jogadores tiveram resultados iguais e o premio sera dividido\n");
            printf("O jogador 1 recebeu R$ %.2f\n", meiopremio);
            printf("O jogador 2 recebeu R$ %.2f\n", meiopremio);
        }
        else if(total1 > total2){
            printf("%d \n", total1);
            printf("O valor apostado foi de R$ %.2f\n", premio);
            printf("O jogador 1 foi o vencedor e ira receber R$ %.2f ", premio);

        }
            else{
                printf("%d \n", total1);
                printf("O valor apostado foi de R$ %.2f\n", premio);
                printf("O jogador 2 foi o vencedor e ira receber R$ %.2f", premio);
            }

      }  break;
    case 2:{
        int pos_k, pos_l;
        printf("\nVoce escolheu a opcao de Jogo de cartas\n");
        printf("----------------------------------------\n");
        printf("\nDigite a posicao do Mestre Kung utilizando valores de 1 a 16\n");
        scanf("%d", &pos_k);
        printf("\nDigite a posicao do Mestre Lu utilizando valores de 1 a 16\n");
        scanf("%d", &pos_l);

        if(pos_l == pos_k)
            printf("\nAlgum dado esta errado, os dois jogadores nao podem estar na mesma posicao\n");
            return 0;
            //Se um estiver entre 1 e 8 e o outro entre 9 e 16
        
        if((pos_l <= 8 && pos_k > 8) || (pos_k <= 8 && pos_l > 8))
            printf("\nOs jogadores se enfrentarao somente na FINAL");
            
            //Se os dois estiverem entre 1 e 8
        if((pos_l < 9 && pos_k < 9) || (pos_k < 9 && pos_l < 9)){
            
            if((pos_l < 5 && pos_k < 5) || (pos_k < 5 && pos_l < 5)){//Se os dois estiverem entre 1 e 4

                if((pos_l == 1 && pos_k == 2) || (pos_k == 1 && pos_l == 2))//Se forem 1 e 2
                    printf("\nOs jogadores se enfrentarao nas OITAVAS");

                else if((pos_l == 3 && pos_k == 4) || (pos_k == 3 && pos_l == 4))//Se forem 4 e 3
                    printf("\nOs jogadores se enfrentaro nas OITAVAS");

                    else
                        printf("\nOs jogadores se enfrentarao nas QUARTAS");      
            }

            else if((pos_l > 4 && pos_k > 4) || (pos_k > 4 && pos_l > 4))//Se os dois estiverem entre 5 e 8
                    
                     if((pos_l == 5 && pos_k == 6) || (pos_k == 5 && pos_l == 6))//Se forem 5 e 6
                        printf("\nOs jogadores se enfrentarao nas OITAVAS");

                    else if((pos_l == 7 && pos_k == 8) || (pos_k == 7 && pos_l == 8))//Se forem 7 e 8
                        printf("\nOs jogadores se enfrentaro nas OITAVAS");

                        else
                            printf("\nOs jogadores se enfrentarao nas QUARTAS");

            if((pos_l <= 4 && pos_k > 4) || (pos_k <= 4 && pos_l > 4))//Se um valor estiver entre 1 e 4 e o outro entre 5 e 8
                printf("Os jogadores se enfrentarao somente na SEMIFINAL");
        }
         if((pos_l > 9 && pos_k > 9) || (pos_k > 9 && pos_l > 9)){
            
            if((pos_l < 13 && pos_k < 13) || (pos_k < 13 && pos_l < 13)){//Se os dois estiverem entre 9 e 13
                
                if((pos_l == 9 && pos_k == 10) || (pos_k == 9 && pos_l == 10))//Se forem 9 e 10
                    printf("\nOs jogadores se enfrentarao nas OITAVAS");
                
                else if((pos_l == 11 && pos_k == 12) || (pos_k == 11 && pos_l == 12))//Se forem 11 e 12
                    printf("\nOs jogadores se enfrentaro nas OITAVAS");
                    
                    else
                        printf("\nOs jogadores se enfrentarao nas QUARTAS");      
            }
            
            else if((pos_l > 12 && pos_k > 12) || (pos_k > 12 && pos_l > 12))//Se os dois estiverem entre 13 e 16
                    
                     if((pos_l == 13 && pos_k == 14) || (pos_k == 13 && pos_l == 14))//Se forem 13 e 14
                        printf("\nOs jogadores se enfrentarao nas OITAVAS");

                    else if((pos_l == 15 && pos_k == 16) || (pos_k == 15 && pos_l == 16))//Se forem 15 e 16
                        printf("\nOs jogadores se enfrentaro nas OITAVAS");

                        else
                             printf("\nOs jogadores se enfrentarao nas QUARTAS");

            if((pos_l <= 8 && pos_k > 8) || (pos_k <= 8 && pos_l > 8))//Se um valor estiver entre 8 e 12 e o outro entre 13 e 16
                printf("Os jogadores se enfrentarao somente na SEMIFINAL");
        }




    break;



    } default:
        printf("Nao foi escolhido nenhuma das opcoes, encerrando...");
        
        break;
    }

    return 0;
}