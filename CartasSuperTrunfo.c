#include <stdio.h>



int main() {
    
    //Declaração de variáveis para cadastro de estados e cidades:

    char  estado1, estado2;
    char  codigo1[20], codigo2[20];
    char  nomedaCidade1[20], nomedaCidade2[20];
    int   populacao1, populacao2;
    float area1,area2;
    float pib1, pib2;
    int   numerodePontosTuristicos1, numerodePontosTuristicos2;

    //Bloco de cadastro do estado e da cidade da Carta 1:

    printf("Digite uma letra de 'A' a 'H' para escolher o estado da Carta 1:\n");
    scanf(" %c",&estado1);

    printf("Digite o código da Carta 1 com a letra do estado seguida de um número de 01 a 04 (ex: A01, B03):\n");
    scanf("%s ",codigo1);

    printf("Digite o nome da cidade da Carta 1:\n");
    scanf("%s",nomedaCidade1);

    printf("Digite a População da cidade da Carta 1:\n");
    scanf("%d",&populacao1);

    printf("Digite a Área da cidade da Carta 1:\n");
    scanf("%f",&area1);

    printf("Digite o PIB da cidade da Carta 1:\n");
    scanf("%f",&pib1);

    printf("Digite o número de pontos turistícos da cidade da Carta 1:\n");
    scanf("%d",&numerodePontosTuristicos1);

    getchar ();

    //Bloco de cadastro do estado e da cidade da Carta 2:

    printf("Digite uma letra de 'A' a 'H' para escolher o estado da Carta 2:\n");
    scanf("%c",&estado2);

    printf("Digite o código da Carta 2 com a letra do estado seguida de um número de 01 a 04 (ex: A01, B03):\n");
    scanf("%s",&codigo2);

    printf("Digite o nome da cidade da Carta 2:\n");
    scanf("%s",nomedaCidade2);

    printf("Digite a População da cidade da Carta 2:\n");
    scanf("%d",&populacao2);

    printf("Digite a Área da cidade da Carta 2:\n");
    scanf("%f",&area2);

    printf("Digite o PIB da cidade da Carta 2:\n");
    scanf("%f",&pib2);

    printf("Digite o número de pontos turistícos da cidade da Carta 2:\n");
    scanf("%d",&numerodePontosTuristicos2);

    //Impressão dos dados de cadastro da Carta 1:

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomedaCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f km²\n", area1);
    printf("PIB: %f bilhões de reais\n", pib1);
    printf("Número de Pontos Turistícos: %d\n\n", numerodePontosTuristicos1);

    //Impressão dos dados de cadastro da Carta 2:

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomedaCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Número de Pontos Turistícos: %d\n\n", numerodePontosTuristicos2);

    return 0;
}
