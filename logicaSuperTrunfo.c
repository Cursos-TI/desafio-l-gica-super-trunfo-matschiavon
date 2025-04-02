#include <stdio.h>

int main() {
    printf("######  DESAFIO CARTAS SUPER TRUNFO  ######\n");
    
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
    printf("PIB: R$%.2f bilhões de reais\n", pib1);
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
    printf("PIB: R$%.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("Pib Per Capita: R$%.2f\n", pib_per_capita2);
    printf("Super Poder: %f\n", superPoder2);

    // Criando Menu Interativo
    
    int opcao1;

    printf("\n**** COMPARANDO AS CARTAS !!! ****\n");
    printf("1. POPULAÇÃO \n");
    printf("2. ÁREA \n");
    printf("3. PIB \n");
    printf("4. PONTOS TURÍSTICOS \n");
    printf("5. DENSIDADE POPULACIONAL \n");
    printf("ESCOLHA UMA OPÇÃO: \n");
    scanf("%d", &opcao1);

    switch (opcao1) {

        case 1:
        printf("Você escolheu: POPULAÇÃO.\n");
        
        if (populacao1 > populacao2) {
            printf("Cidade 1: %s\n", cidade1);
            printf("População: %lu habitantes\n", populacao1);

            printf("Cidade 2: %s\n", cidade2);
            printf("População: %lu habitantes\n\n", populacao2);

            printf("### CARTA 1 VENCEU !!! ###\n");
        }
        else {
            printf("Cidade 1: %s\n", cidade1);
            printf("População: %lu habitantes\n", populacao1);

            printf("Cidade 2: %s\n", cidade2);
            printf("População: %lu habitantes\n\n", populacao2);

            printf(" ### CARTA 2 VENCEU !!! ###\n");
        }

        break;
    
        case 2:
        printf("Você escolheu: ÁREA.\n");

        if (area1 > area2) {
            printf("Cidade 1: %s\n", cidade1);
            printf("Área: %.2f km²\n", area1);

            printf("Cidade 2: %s\n", cidade2);
            printf("Área: %.2f km²\n\n", area2);
            
            printf("### CARTA 1 VENCEU !!! ###\n");
        }
        else {
            printf("Cidade 1: %s\n", cidade1);
            printf("Área: %.2f km²\n", area1);

            printf("Cidade 2: %s\n", cidade2);
            printf("Área: %.2f km²\n\n", area2);

            printf("### CARTA 2 VENCEU !!! ###\n");
        }

        break;

        case 3:
        printf("Você escolheu: PIB.\n");

        if (pib1 > pib2) {
            printf("Cidade 1: %s\n", cidade1);
            printf("PIB: R$%.2f bilhões de reais\n", pib1);

            printf("Cidade 2: %s\n", cidade2);
            printf("PIB: R$%.2f bilhões de reais\n\n", pib2);

            printf("### CARTA 1 VENCEU !!! ###\n");
        }
        else {
            printf("Cidade 1: %s\n", cidade1);
            printf("PIB: R$%.2f bilhões de reais\n", pib1);

            printf("Cidade 2: %s\n", cidade2);
            printf("PIB: R$%.2f bilhões de reais\n\n", pib2);

            printf("### CARTA 2 VENCEU !!! ###\n");
        }

        break;
        
        case 4:
        printf("Você escolheu: PONTOS TURÍSTICOS.\n");

        if (pontos1 >pontos2) {
            printf("Cidade 1: %s\n", cidade1);
            printf("Pontos Turísticos: %d\n", pontos1);

            printf("Cidade 2: %s\n", cidade2);
            printf("Pontos Turísticos: %d\n\n", pontos2);

            printf("### CARTA 1 VENCEU !!! ###\n");
        }
        else {
            printf("Cidade 1: %s\n", cidade1);
            printf("Pontos Turísticos: %d\n", pontos1);

            printf("Cidade 2: %s\n", cidade2);
            printf("Pontos Turísticos: %d\n\n", pontos2);

            printf("### CARTA 2 VENCEU !!! ###\n");
        }

        break;

        case 5:
        printf("Você escolheu: DENSIDADE POPULACIONAL");

        if (densidade1 < densidade2){
            printf("Cidade 1: %s\n", cidade1);
            printf("Densidade Populacional: %.2f hab/km²\n", densidade1);

            printf("Cidade 2: %s\n", cidade2);
            printf("Densidade Populacional: %.2f hab/km²\n\n", densidade2);

            printf("### CARTA 1 VENCEU !!! ###\n");
        }
        else {
            printf("Cidade 1: %s\n", cidade1);
            printf("Densidade Populacional: %.2f hab/km²\n", densidade1);

            printf("Cidade 2: %s\n", cidade2);
            printf("Densidade Populacional: %.2f hab/km²\n\n", densidade2);

            printf("### CARTA 2 VENCEU !!! ###\n");
        }

        break;

        default:
        printf("Opção Inválida!!!\n");



        
    }

    // Comparando o Super Poder
    
    printf("SUPER PODER: ");

    if (superPoder1 > superPoder2) {
        printf("Carta 1 venceu.\n");
    }
    else {
        printf("Carta 2 venceu.\n");
    }
    return 0;
}