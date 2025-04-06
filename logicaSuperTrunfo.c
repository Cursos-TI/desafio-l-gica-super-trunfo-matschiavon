#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf("******  DESAFIO CARTAS SUPER TRUNFO  ******\n");
    
    // Declaração das variáveis para armazenar os dados das cartas
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2, pib_per_capita1, pib_per_capita2;
    float superPoder1, superPoder2;   

    // Leitura dos dados da primeira carta
    printf("\nDigite os dados da primeira carta\n");
    printf("\n");
    printf("Estado (letra de A a H):");
    scanf(" %c", &estado1); 
    printf("Código da Carta: ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", cidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);

    //Densidade Populacional = População / Área da cidade
    //Pib Per Capita = Pib / População

    
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    // Cálculo do Super Poder

    superPoder1 = (populacao1 + area1 + pib1 + (1 / densidade1));

    
    // Leitura dos dados da segunda carta
    printf("\nDigite os dados da segunda carta:\n");
    printf("\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2); 
    printf("Código da Carta: ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", cidade2); 
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    //Densidade Populacional = População / Área da cidade
    //Pib Per Capita = Pib / População

    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / area2;

    // Cálculo do Super Poder

    superPoder2 = (populacao2 + area2 + pib2 + (1 / densidade2));
    
    // Exibição das informações da primeira carta

    printf("\n***  DADOS DA CARTA 1  ***\n\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("Pib Per Capita: R$%.2f\n", pib_per_capita1);
    printf("Super Poder: %f\n", superPoder1);
    
    // Exibição das informações da segunda carta

    printf("\n*** DADOS DA CARTA 2  ***\n\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("Pib Per Capita: R$%.2f\n", pib_per_capita2);
    printf("Super Poder: %f\n", superPoder2);

    
    
    // PRIMEIRA COMPARAÇÃO
    int atributo1;

    printf("\n###...COMPARAÇÃO DE CARTAS...###\n\n");
    printf("ESCOLHA UMA DAS OPÇÕES!\n");
    printf("1. POPULAÇÃO. \n");
    printf("2. ÁREA. \n");
    printf("3. PIB. \n");
    printf("4. PONTOS TURÍSTICOS. \n");
    printf("5. DENSIDADE POPULACIONAL. \n");
    printf("Digite uma opção: ");
    scanf("%d", &atributo1);

    switch (atributo1){

        case 1:
            printf("Você escolheu: POPULAÇÃO.\n");

            if (populacao1 > populacao2) {
                printf("CARTA 1 Cidade: %s\n", cidade1);
                printf("        População: %lu\n", populacao1);

                printf("CARTA 2 Cidade: %s\n", cidade2);
                printf("        População: %lu\n", populacao2);

                printf("||...VITÓRIA DA CARTA 1...||\n\n");

            } else if (populacao1 < populacao2) {
                printf("CARTA 1 Cidade: %s\n", cidade1);
                printf("        População: %lu\n", populacao1);

                printf("CARTA 2  Cidade: %s\n", cidade2);
                printf("         População: %lu\n", populacao2);

                printf("||...VITÓRIA DA CARTA 2...||\n\n");

            } else {
                printf("CARTA 1 Cidade: %s\n", cidade1);
                printf("        População: %lu\n", populacao1);

                printf("CARTA 2  Cidade: %s\n", cidade2);
                printf("         População: %lu\n", populacao2);

                printf("||...EMPATE...||\n\n");
            }

            break;
        
        case 2:
            printf("Você escolheu: ÁREA.\n");

            if(area1 > area2) {
                printf("CARTA 1 Cidade: %s\n", cidade1);
                printf("        Área: %.2f\n", area1);

                printf("CARTA 2 Cidade: %s\n", cidade2);
                printf("        Área: %.2f\n", area2);

                printf("||...VITÓRIA DA CARTA 1...||\n\n"); 

            } else if (area1 < area2) {
                printf("CARTA 1 Cidade: %s\n", cidade1);
                printf("        Área: %.2f\n", area1);

                printf("CARTA 2 Cidade: %s\n", cidade2);
                printf("        Área: %.2f\n", area2);

                printf("||...VITÓRIA DA CARTA 2...||\n\n");
            } else {
                printf("||...EMPATE !!...||\n");
            }
            
            break;

        case 3:
            printf("Você escolheu: PIB\n");

            if(pib1 > pib2){
                printf("CARTA 1 Cidade: %s\n", cidade1);
                printf("        PIB: %.2f\n", pib1);

                printf("CARTA 2 Cidade: %s\n", cidade2);
                printf("        PIB: %.2f\n", pib2);

                printf("||...VITÓRIA DA CARTA 1...||\n\n");
            } else if (pib1 < pib2) {
                printf("CARTA 1 Cidade: %s\n", cidade1);
                printf("        PIB: %.2f\n", pib1);

                printf("CARTA 2 Cidade: %s\n", cidade2);
                printf("        PIB: %.2f\n", pib2);

                printf("||...VITÓRIA DA CARTA 2...||\n\n");
            } else {
                printf("||...EMPATE...||\n");
            }

            break;

        case 4:
            printf("Você escolheu: PONTOS TURÍSTICOS.\n");

            if (pontos1 > pontos2){
                printf("CARTA 1 Cidade: %s\n", cidade1);
                printf("        Pontos Turísticos: %d\n", pontos1);

                printf("CARTA 2 Cidade: %s\n", cidade2);
                printf("        Pontos Turísticos: %d\n", pontos2);

                printf("||...VITÓRIA DA CARTA 1...||\n\n");
            } else if (pontos1 < pontos2) {
                printf("CARTA 1 Cidade: %s\n", cidade1);
                printf("        Pontos Turísticos: %d\n", pontos1);

                printf("CARTA 2 Cidade: %s\n", cidade2);
                printf("        Pontos Turísticos: %d\n", pontos2);

                printf("||...VITÓRIA DA CARTA 2...||\n\n");
            } else {
                printf("||...EMPATE...||\n");
            }

            break;

        case 5:
            printf("Você escolheu: DENSIDADE POPULACIONAL. \n");
            
            if (densidade1 < densidade2){
                printf("CARTA 1 Cidade: %s\n", cidade1);
                printf("Densidade Populacional: %.2f\n", densidade1);

                printf("CARTA 2 Cidade: %s\n", cidade2);
                printf("Densidade Populacional: %.2f\n", pontos2);

                printf("||...VITÓRIA DA CARTA 1...||\n\n");
            } else if(densidade1 > densidade2) {
                printf("CARTA 1 Cidade: %s\n", cidade1);
                printf("Densidade Populacional: %.2f\n", densidade1);

                printf("CARTA 2 Cidade: %s\n", cidade2);
                printf("Densidade Populacional: %.2f\n", densidade2);

                printf("||...VITÓRIA DA CARTA 2...||\n\n");
            } else {
                printf("||...EMPATE...||\n");
            }

            break;
            
        default:
            printf("Opção Inválida!\n");

            break;
    }

    // SEGUNDA COMPARAÇÃO

    int atributo2;

    printf("***...SEGUNDA COMPARAÇÃO...***\n\n");
    printf("1. POPULAÇÃO. \n");
    printf("2. ÁREA. \n");
    printf("3. PIB. \n");
    printf("4. PONTOS TURÍSTICOS. \n");
    printf("5. DENSIDADE POPULACIONAL. \n");
    printf("Digite uma opção: ");
    scanf("%d", &atributo2);

    // IF PARA NÃO PERMITIR QUE SEJA ESCOLHIDO A MESMA OPÇÃO QUE DA PRIMEIRA COMPARAÇÃO
    if(atributo1 == atributo2) {
        printf("!!! ESCOLHA UMA OPÇÃO DIFERENTE DA PRIMEIRA !!!\n");
        scanf("%d", &atributo2);
    }

    switch (atributo2){
    
        case 1:
            printf("Você escolheu: POPULAÇÃO.\n");

            if (populacao1 > populacao2) {
                printf("CARTA 1 Cidade: %s\n", cidade1);
                printf("        População: %lu\n", populacao1);

                printf("CARTA 2 Cidade: %s\n", cidade2);
                printf("        População: %lu\n", populacao2);

                printf("||...VITÓRIA DA CARTA 1...||\n\n");

            } else if (populacao1 < populacao2) {
                printf("CARTA 1 Cidade: %s\n", cidade1);
                printf("        População: %lu\n", populacao1);

                printf("CARTA 2  Cidade: %s\n", cidade2);
                printf("         População: %lu\n", populacao2);

                printf("||...VITÓRIA DA CARTA 2...||\n\n");

            } else {
                printf("CARTA 1 Cidade: %s\n", cidade1);
                printf("        População: %lu\n", populacao1);

                printf("CARTA 2  Cidade: %s\n", cidade2);
                printf("         População: %lu\n", populacao2);

                printf("||...EMPATE...||\n\n");
            }

            break;
        
        case 2:
            printf("Você escolheu: ÁREA.\n");

            if(area1 > area2) {
                printf("CARTA 1 Cidade: %s\n", cidade1);
                printf("        Área: %.2f\n", area1);

                printf("CARTA 2 Cidade: %s\n", cidade2);
                printf("        Área: %.2f\n", area2);

                printf("||...VITÓRIA DA CARTA 1...||\n\n"); 

            } else if (area1 < area2) {
                printf("CARTA 1 Cidade: %s\n", cidade1);
                printf("        Área: %.2f\n", area1);

                printf("CARTA 2 Cidade: %s\n", cidade2);
                printf("        Área: %.2f\n", area2);

                printf("||...VITÓRIA DA CARTA 2...||\n\n");
            } else {
                printf("||...EMPATE !!...||\n");
            }
            
            break;

        case 3:
            printf("Você escolheu: PIB\n");

            if(pib1 > pib2){
                printf("CARTA 1 Cidade: %s\n", cidade1);
                printf("        PIB: %.2f\n", pib1);

                printf("CARTA 2 Cidade: %s\n", cidade2);
                printf("        PIB: %.2f\n", pib2);

                printf("||...VITÓRIA DA CARTA 1...||\n\n");
            } else if (pib1 < pib2) {
                printf("CARTA 1 Cidade: %s\n", cidade1);
                printf("        PIB: %.2f\n", pib1);

                printf("CARTA 2 Cidade: %s\n", cidade2);
                printf("        PIB: %.2f\n", pib2);

                printf("||...VITÓRIA DA CARTA 2...||\n\n");
            } else {
                printf("||...EMPATE...||\n");
            }

            break;

        case 4:
            printf("Você escolheu: PONTOS TURÍSTICOS.\n");

            if (pontos1 > pontos2){
                printf("CARTA 1 Cidade: %s\n", cidade1);
                printf("        Pontos Turísticos: %d\n", pontos1);

                printf("CARTA 2 Cidade: %s\n", cidade2);
                printf("        Pontos Turísticos: %d\n", pontos2);

                printf("||...VITÓRIA DA CARTA 1...||\n\n");
            } else if (pontos1 < pontos2) {
                printf("CARTA 1 Cidade: %s\n", cidade1);
                printf("        Pontos Turísticos: %d\n", pontos1);

                printf("CARTA 2 Cidade: %s\n", cidade2);
                printf("        Pontos Turísticos: %d\n", pontos2);

                printf("||...VITÓRIA DA CARTA 2...||\n\n");
            } else {
                printf("||...EMPATE...||\n");
            }

            break;

        case 5:
            printf("Você escolheu: DENSIDADE POPULACIONAL. \n");
            
            if (densidade1 < densidade2){
                printf("CARTA 1 Cidade: %s\n", cidade1);
                printf("Densidade Populacional: %.2f\n", densidade1);

                printf("CARTA 2 Cidade: %s\n", cidade2);
                printf("Densidade Populacional: %.2f\n", pontos2);

                printf("||...VITÓRIA DA CARTA 1...||\n\n");
            } else if(densidade1 > densidade2) {
                printf("CARTA 1 Cidade: %s\n", cidade1);
                printf("Densidade Populacional: %.2f\n", densidade1);

                printf("CARTA 2 Cidade: %s\n", cidade2);
                printf("Densidade Populacional: %.2f\n", densidade2);

                printf("||...VITÓRIA DA CARTA 2...||\n\n");
            } else {
                printf("||...EMPATE...||\n");
            }
            
            break;

        default:
            printf("Opção Inválida!\n"); 

            break;
           }

    // SOMANDO OS VALORES DOS DOIS ATRIBUTOS PARA SABER QUEM VENCEU!

    //PRIMEIRO MENU DE OPÇÕES

    printf("\nSOMA DOS ATRIBUTOS ESCOLHIDOS!\n");

    float carta1Menu1, carta2Menu1;

    if (atributo1 == 1){
        carta1Menu1 = populacao1;
        carta2Menu1 = populacao2;
    } else if (atributo1 == 2){
        carta1Menu1 = area1;
        carta2Menu1= area2;
    } else if (atributo1 == 3){
        carta1Menu1 = pib1;
        carta2Menu1 = pib2;
    }else if (atributo1 == 4){
        carta1Menu1 = pontos1;
        carta2Menu1 = pontos2;
    }else {
        carta1Menu1 = densidade1;
        carta2Menu1 = densidade2;
    }

    //SEGUNDO MENU DE OPÇÕES 

    float carta1Menu2, carta2Menu2;

    if (atributo2 == 1){
        carta1Menu2 = populacao1;
        carta2Menu2 = populacao2;       
    }else if(atributo2 == 2){
        carta1Menu2 = area1;
        carta2Menu2 = area2;
    }else if(atributo2 == 3){
        carta1Menu2 = pib1;
        carta2Menu2 = pib2;
    }else if(atributo2 == 4){
        carta1Menu2 = pontos1;
        carta2Menu2 = pontos2;
    }else {
        carta1Menu2 = densidade1;
        carta2Menu2 = densidade2;
    }    

    // SOMA FINAL

    float somacarta1 = carta1Menu1 + carta1Menu2;
    float somacarta2 = carta1Menu2 + carta2Menu2;

    printf("CARTA 1 - %s: %.2f \n", cidade1, somacarta1);
    printf("CARTA 2 - %s: %.2f \n", cidade2, somacarta2);

    if(somacarta1 == somacarta2){
        printf("EMPATE!\n");
    }else if(somacarta1 > somacarta2){
        printf("VITÓRIA O JOGADOR 1 - CARTA 1 %s\n", cidade1);
    } else {
        printf("VITÓRIA DO JOGADOR 2 - CARTA 2 %s\n", cidade2);
    }

    return 0;
}

