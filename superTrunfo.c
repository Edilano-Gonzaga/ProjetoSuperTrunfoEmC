#include <stdio.h>

int main() {
    int populacao1, numerosDePontosTuristicos1;
    int populacao2, numerosDePontosTuristicos2;
    char nome[50];
    char estado1[50], nomeDaCidade1[50], codigoDaCarta1[50];
    char estado2[50], nomeDaCidade2[50], codigoDaCarta2[50];
    float areaTerritorial1, pib1;
    float areaTerritorial2, pib2;
    float densidadePopulacional_Estd01;
    float pibPercapita_Estd01;
    float densidadePopulacional_Estd02, pibPercapita_Estd02;

    

    printf("*** Olá, Seja Bem-vindo ao Super Trunfo, nível Novato! ***\n");
    printf("Primeiro informe seu nome: \n");
    scanf("%s", nome);

    printf("\nNome do Usuário: %s\n", nome);

    // --- Cadastrar carta 1 --- 
    printf("\nVamos cadastrar a Primeira carta! \n");

    printf("Por favor escolha um Estado do Nordeste: \n");
    scanf("%s", estado1);

    printf("\nInforme o código da carta (ex: A01, B02): \n");
    scanf("%s", codigoDaCarta1);

    printf("\nInforme o nome da cidade: \n");
    scanf("%s", nomeDaCidade1);

    printf("\nInforme a população da cidade: \n");
    scanf("%d", &populacao1);
    getchar(); // limpa o ENTER

    printf("\nInforme a área territorial (em km²): \n");
    scanf("%f", &areaTerritorial1);
    getchar(); // limpa o ENTER

    printf("\nInforme o PIB da cidade (em bilhões de reais): \n");
    scanf("%f", &pib1);
    getchar(); // limpa o ENTER

    printf("\nInforme o número de pontos turísticos: \n");
    scanf("%d", &numerosDePontosTuristicos1);
    getchar(); // limpa o ENTER

    // Calculo carta 1
    densidadePopulacional_Estd01 = populacao1 / areaTerritorial1;
    pibPercapita_Estd01 = (pib1 * 1000000000) / populacao1;

    

     //Cadastrar carta 2
     printf("\nVamos cadastrar a segunda carta!\n");
    
     printf("Por favor escolha um Estado do Nordeste: \n");
     scanf("%s", estado2);

     printf("\nInforme o código da carta (ex: A01, B02): \n");
     scanf("%s", codigoDaCarta2);

     printf("\nInforme o nome da cidade: \n");
     scanf("%s", nomeDaCidade2);

     printf("\nInforme a população da cidade: \n");
     scanf("%d", &populacao2);
     getchar(); // limpa o ENTER

     printf("\nInforme a área territorial (em km²): \n");
     scanf("%f", &areaTerritorial2);
     getchar(); // limpa o ENTER

     printf("\nInforme o PIB da cidade (em bilhões de reais): \n");
     scanf("%f", &pib2);
     getchar(); // limpa o ENTER

     printf("\nInforme o número de pontos turísticos: \n");
     scanf("%d", &numerosDePontosTuristicos2);
     getchar(); // limpa o ENTER

    // Calculo carta 2
    densidadePopulacional_Estd02 = populacao2 / areaTerritorial2;
    pibPercapita_Estd02 = (pib2 * 1000000000) / populacao2;



    // --- Mostrar dados da carta 1 ---
    printf("\n===== CARTA 1 =====\n");
    printf("\nEstado: %s\n", estado1);
    printf("\nCódigo da Carta: %s\n", codigoDaCarta1);
    printf("\nCidade: %s\n", nomeDaCidade1);
    printf("\nPopulação: %d habitantes\n", populacao1);
    printf("\nÁrea Territorial: %.2f km²\n", areaTerritorial1);
    printf("\nPIB: R$ %.5f bilhões\n", pib1);
    printf("\nPontos Turísticos: %d\n", numerosDePontosTuristicos1);
    printf("\n Densidade Populacional: %.2f hab/km²", densidadePopulacional_Estd01);
    printf("\nPib per capita: %.2f", pibPercapita_Estd01);
    
  

     // --- Mostrar dados da carta 2 ---
     printf("\n===== CARTA 2 =====\n");
     printf("\nEstado: %s\n", estado2);
     printf("\nCódigo da Carta: %s\n", codigoDaCarta2);
     printf("\nCidade: %s\n", nomeDaCidade2);
     printf("\nPopulação: %d habitantes\n", populacao2);
     printf("\nÁrea Territorial: %.2f km²\n", areaTerritorial2);
     printf("\nPIB: R$ %.2f bilhões\n", pib2);
     printf("\nPontos Turísticos: %d\n", numerosDePontosTuristicos2);
     printf("\n Densidade Populacional: %.2f hab/km²\n", densidadePopulacional_Estd02);
     printf("\nPib percapita: %.2f\n", pibPercapita_Estd02);

         // Calcular Super Poder para cada carta
    float superPoder1 = populacao1 + areaTerritorial1 + (pib1 * 1000000000) + numerosDePontosTuristicos1 + pibPercapita_Estd01 + (1 / densidadePopulacional_Estd01);
    float superPoder2 = populacao2 + areaTerritorial2 + (pib2 * 1000000000) + numerosDePontosTuristicos2 + pibPercapita_Estd02 + (1 / densidadePopulacional_Estd02);

    printf("\nSuper Poder da Carta 1: %.2f\n", superPoder1);
    printf("\nSuper Poder da Carta 2: %.2f\n", superPoder2);

    // --- Comparação por PIB per capita --
    printf("Comparação de cartas (Atributo:PIB per capita):\n");
    printf("Carta 1 - %s (%s): R$ %.2f por habitante\n", nomeDaCidade1, estado1, pibPercapita_Estd01);
    printf("Carta 2 - %s (%s): R$ %.2f por habitante\n", nomeDaCidade2, estado2, pibPercapita_Estd02);

    // Estrutura de comparação if-else
    if(pibPercapita_Estd01 > pibPercapita_Estd02){
        printf("Resultado: Carta 1 (%s - %s) Venceu!", nomeDaCidade1, estado1);
    } else {
        printf("Ressultado: Carta 2 (%s - %s) Venceu!", nomeDaCidade2, estado2);
    }

    // int resultado;

    // printf("\n\nComparação de Cartas:\n");

    // resultado = (populacao1 > populacao2);
    // printf("\nPopulação: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    // resultado = (areaTerritorial1 > areaTerritorial2);
    // printf("\nÁrea: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    // resultado = (pib1 > pib2);
    // printf("\nPIB: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    // resultado = (numerosDePontosTuristicos1 > numerosDePontosTuristicos2);
    // printf("\nPontos Turísticos: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    // resultado = (densidadePopulacional_Estd01 < densidadePopulacional_Estd02); // MENOR VENCE
    // printf("\nDensidade Populacional: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    // resultado = (pibPercapita_Estd01 > pibPercapita_Estd02);
    // printf("\nPIB per Capita: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    // resultado = (superPoder1 > superPoder2);
    // printf("\nSuper Poder: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    // printf("\n");


    return 0;
}
