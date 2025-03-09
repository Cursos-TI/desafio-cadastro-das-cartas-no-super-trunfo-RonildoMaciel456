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
    float superPoder1, superPoder2;
    
    //Declaração de variáveis para cáculo de densidade populacional e PIB per Capita:
    float densidadePopuluacional1, densidadePopuluacional2;
    float pibPercapita1, pibPercapita2;

    //Dclaração das variáveis para comparação entre as Cartas 1 e 2: 
    //(obs: NPT = Número de Pontos Turísticos; DP = Densidade Populacional; PPC = PIB per Capita; SP = Super Poder)

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

    //Cálculo da densidade populacional e do PIB per Capita da Cidade de São Paulo:
    densidadePopuluacional1 = populacao1 / area1;
    pibPercapita1 = (pib1 * 1000000000) / (float) populacao1;

    //Cáculo do Super Poder da Carta 1: (Soma de todos os atributos da cidade)
    superPoder1 = (float) populacao1 + area1 + pib1 + numerodePontosTuristicos1 + densidadePopuluacional1 + pibPercapita1; 

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

    //Cálculo da densidade populacional e do PIB per Capita da Cidade do Rio de Janeiro:
    densidadePopuluacional2 = populacao2 / area2;
    pibPercapita2 = (pib2 * 1000000000) / (float) populacao2;

    //Cáculo do Super Poder da Carta 2: (Soma de todos os atributos da cidade)
    superPoder2 = (float) populacao2 + area2 + pib2 + numerodePontosTuristicos2 + densidadePopuluacional2 + pibPercapita2;

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
    printf("PIB per Capita: %.2f reais\n\n", pibPercapita2);

    //Resultado do Jogo Super Trunfo em C: (comparações entre as Cartas 1 e 2)
    printf("Comparação de Cartas: \n");
    printf("População: Carta 1 venceu %d\n",populacao1 > populacao2);
    printf("Área: Carta 1 venceu %d\n",area1 > area2);
    printf("PIB: Carta 1 venceu %d\n",pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu %d\n",numerodePontosTuristicos1 > numerodePontosTuristicos2);
    printf("Densidade Populacional: Carta 2 venceu %d\n",densidadePopuluacional1 < densidadePopuluacional2);
    printf("PIB per Capita: Carta 1 venceu %d\n",pibPercapita1 > pibPercapita2);
    printf("Super Poder: Carta 1 venceu %d\n\n",superPoder1 > superPoder2);

    //Resultado do Jogo Super Trunfo em C usando lógica com estruturas de decisão If e If-else: (comparações entre as Cartas 1 e 2)
 
    printf("Comparação de cartas (Densidade Populacional):\n");
    
    //Abaixo segue bloco de código com estrutura de decisão If e If-else usando o atributo Densidade Populacional:
    if (densidadePopuluacional1 < densidadePopuluacional2) {
        printf("Carta 1 - São Paulo (SP): %.2f\n",densidadePopuluacional1);
        printf("Resultado: Carta 1 (São Paulo) venceu!"); 
    } else {
        printf("Carta 2 - Rio de Janeiro (RJ): %.2f\n",densidadePopuluacional2);
        printf("Resultado: Carta 2 (Rio de Janeiro) venceu!"); 
    }
    
    return 0;

}

