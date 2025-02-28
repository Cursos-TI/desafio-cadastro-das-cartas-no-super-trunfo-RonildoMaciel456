#include <stdio.h>



int main() {
    
    //Declaração de variáveis para cadastro de estados e cidades:

    char  estado1, estado2;
    char  codigo1[20], codigo2[20];
    char  nomedaCidade1[20], nomedaCidade2[20];
    int   populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int   numerodePontosTuristicos1, numerodePontosTuristicos2;
    float densidadePopuluacional1, densidadePopuluacional2;
    float pibPercapita1, pibPercapita2;

    //Bloco de cadastro do estado e da cidade da Carta 1:

    printf("Digite uma letra de 'A' a 'H' para escolher o estado da Carta 1:\n");
    scanf(" %c",&estado1);

    printf("Digite o código da Carta 1 com a letra do estado seguida de um número de 01 a 04 (ex: A01, B03):\n");
    scanf("%s",codigo1);

    getchar ();

    printf("Digite o nome da cidade da Carta 1:\n");
    fgets(nomedaCidade1, sizeof(nomedaCidade1), stdin);

    printf("Digite a População da cidade da Carta 1:\n");
    scanf("%d",&populacao1);

    printf("Digite a Área da cidade da Carta 1:\n");
    scanf("%f",&area1);

    printf("Digite o PIB da cidade da Carta 1:\n");
    scanf("%f",&pib1);

    printf("Digite o número de pontos turistícos da cidade da Carta 1:\n");
    scanf("%d",&numerodePontosTuristicos1);

    //Cálculo da densidade populacional e do PIB per Capita da Cidade de São Paulo
    
    densidadePopuluacional1 = populacao1 / area1;
    pibPercapita1 = (pib1 * 1000000000) / (float) populacao1;

    printf("\n");

    getchar ();

    //Bloco de cadastro do estado e da cidade da Carta 2:

    printf("Digite uma letra de 'A' a 'H' para escolher o estado da Carta 2:\n");
    scanf("%c",&estado2);

    printf("Digite o código da Carta 2 com a letra do estado seguida de um número de 01 a 04 (ex: A01, B03):\n");
    scanf("%s",&codigo2);

    getchar ();

    printf("Digite o nome da cidade da Carta 2:\n");
    fgets(nomedaCidade2, sizeof(nomedaCidade2), stdin);
    
    printf("Digite a População da cidade da Carta 2:\n");
    scanf("%d",&populacao2);

    printf("Digite a Área da cidade da Carta 2:\n");
    scanf("%f",&area2);

    printf("Digite o PIB da cidade da Carta 2:\n");
    scanf("%f",&pib2);

    printf("Digite o número de pontos turistícos da cidade da Carta 2:\n");
    scanf("%d",&numerodePontosTuristicos2);

    //Cálculo da densidade populacional e do PIB per Capita da Cidade do Rio de Janeiro
    
    densidadePopuluacional2 = populacao2 / area2;
    pibPercapita2 = (pib2 * 1000000000) / (float) populacao2;

    printf("\n");

    //Impressão dos dados de cadastro da Carta 1:

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s",nomedaCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turistícos: %d\n", numerodePontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopuluacional1);
    printf("PIB per Capita: %.2f reais\n", pibPercapita1);

    printf("\n");

    //Impressão dos dados de cadastro da Carta 2:

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s",nomedaCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turistícos: %d\n", numerodePontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopuluacional2);
    printf("PIB per Capita: %.2f reais\n", pibPercapita2);

    return 0;
}
