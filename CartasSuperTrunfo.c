#include <stdio.h>
#include <string.h> //Biblioteca que incluí para manipular strings com o uso de 'strcpy' e 'strcmp'

int main() {
    
    //Declaração de variáveis para cadastro dos Países:
    char  pais1[20], pais2[20];
    int   populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int   numerodePontosTuristicos1, numerodePontosTuristicos2;
    
    //Declaração de variáveis para cáculo de Densidade Demográfica
    float densidadeDemografica1, densidadeDemografica2;

    //Cadastro da Carta 1 do País 1:
    printf("Digite o nome do País da Carta 1:\n");
    fgets(pais1, sizeof(pais1), stdin);

    printf("Digite a População do País da Carta 1:\n");
    scanf("%d",&populacao1);

    printf("Digite a Área do País da Carta 1:\n");
    scanf("%f",&area1);

    printf("Digite o PIB do País da Carta 1:\n");
    scanf("%f",&pib1);

    printf("Digite o número de pontos turistícos do País da Carta 1:\n");
    scanf("%d",&numerodePontosTuristicos1);

    //Cálculo da densidade demográfica do País da Carta 1:
    densidadeDemografica1 = populacao1 / area1;
    
    getchar ();
    
    //Cadastro da Carta 2 do País 2:
    printf("Digite o nome do País da Carta 2:\n");
    fgets(pais2, sizeof(pais2), stdin);
    
    printf("Digite a População do País da Carta 2:\n");
    scanf("%d",&populacao2);

    printf("Digite a Área do País da Carta 2:\n");
    scanf("%f",&area2);

    printf("Digite o PIB do País da Carta 2:\n");
    scanf("%f",&pib2);

    printf("Digite o número de pontos turistícos do País da Carta 2:\n");
    scanf("%d",&numerodePontosTuristicos2);

    printf("\n");

    //Cálculo da densidade demográfica do País da Carta 2:
    densidadeDemografica2 = populacao2 / area2;

    //variáveis para a impelmentação do Mênu:
    char atributoString1[40], atributoString2[40];
    int atributoEscolhido1, atributoEscolhido2;
    char atributoTexto1[40] = "1.População"; 
    char atributoTexto2[40] = "2.Área"; 
    char atributoTexto3[40] = "3.PIB";
    char atributoTexto4[40] = "4.Número de Pontos Turísticos";
    char atributoTexto5[40] = "5.Densidade Demográfica";

    //variáveis para continuar a usar a string "atributoTextoX" mesmo depois que o valor dela for apagado:

    char atributoTexto1Vers2[40];
    char atributoTexto2Vers2[40];
    char atributoTexto3Vers2[40];
    char atributoTexto4Vers2[40];
    char atributoTexto5Vers2[40];

    //variáveis para soma dos atributos escolhidos:
    int somaPopArea1, somaPopArea2;
    int somaPopPib1, somaPopPib2;  
    int somaPopNPT1, somaPopNPT2; 
    int somaPopDens1, somaPopDens2;
    int somaAreaPib1, somaAreaPib2; 
    int somaAreaNPT1, somaAreaNPT2;
    int somaAreaDens1, somaAreaDens2; 
    int somaPibNPT1, somaPibNPT2;
    int somaPibDens1, somaPibDens2; 
    int somaNPTDens1, somaNPTDens2;

    somaPopArea1 = (populacao1 + area1);
    somaPopArea2 = (populacao2 + area2);
    somaPopPib1 = (populacao1 + pib1);
    somaPopPib2 = (populacao2 + pib2);
    somaPopNPT1 = (populacao1 + numerodePontosTuristicos1);
    somaPopNPT2 = (populacao2 + numerodePontosTuristicos2);
    somaPopDens1 = (populacao1 + densidadeDemografica1);
    somaPopDens2 = (populacao2 + densidadeDemografica2);
    somaAreaPib1 = (area1 + pib1);
    somaAreaPib2 = (area2 + pib2);
    somaAreaNPT1 = (area1 + numerodePontosTuristicos1);
    somaAreaNPT2 = (area2 + numerodePontosTuristicos2);
    somaAreaDens1 = (area1 + densidadeDemografica1);
    somaAreaDens2 = (area2 + densidadeDemografica2);
    somaPibNPT1 = (pib1 + numerodePontosTuristicos1);
    somaPibNPT2 = (pib2 + numerodePontosTuristicos2);
    somaPibDens1 = (pib1 + densidadeDemografica1);
    somaPibDens2 = (pib2 + densidadeDemografica2);
    somaNPTDens1 = (numerodePontosTuristicos1 + densidadeDemografica1);
    somaNPTDens2 = (numerodePontosTuristicos2 + densidadeDemografica2);
    
    //Mênu do Jogo:
    //(1º Menu)
    printf("*** Jogo do Super Trunfo Países ***\n");
    printf("Escolha o 1º atributo:\n");
    printf("%s\n",atributoTexto1);
    printf("%s\n",atributoTexto2);
    printf("%s\n",atributoTexto3);
    printf("%s\n",atributoTexto4);
    printf("%s\n",atributoTexto5);
    printf("Escolha: ");
    scanf("%d",&atributoEscolhido1);

    /*
    Aqui eu pesquisei e utilizei algumas funções em C além do que é ensinado 
    pelo professor neste nível de aprendizado. 
    Aqui a função strcpy() é usada para substituir ou copiar o texto ou valor
    da string que é a opção escolhida por uma string vazia (""),
    removendo a string caso a opção seja escolhida pelo jogador. 
    Ou seja a função strcpy() é uma função da linguagem em C que 
    serve para copiar o conteúdo de uma string para outra.(nesse caso para uma
    string vazia ("")). Mas antes eu também utilizo strcpy() para salvar o valor de 
    "atributoTextoX" em "atributoString1"(uma variável que criei para exibir mais
    á frente qual opção o jogador escolheu), faço isso pra garantir que o valor
    da opção de texto apagada seja salva em outra variável antes de ser apagada: 
    */
    
    /*
    Switch para remover a opção escolhida e com lógica implementada para decidir o páis vencedor em cada
    um dos atributos. Aqui foi usada a estrutura de ternário para implementar a lógica.
    */

    switch (atributoEscolhido1) {
        case 1:
            strcpy(atributoTexto1Vers2,atributoTexto1);
            strcpy(atributoString1,atributoTexto1);
            printf("%s VS %s", pais1, pais2);
            printf("Você escolheu o atributo: %s\n", atributoString1);
            printf("%s : %d / %s : %d\n",pais1, populacao1, pais2, populacao2);
            populacao1 > populacao2 ? printf("O País %s da Carta 1 venceu no atributo 1.População!\n", pais1) 
            : printf("O País %s da Carta 2 venceu no atributo 1.População!\n", pais2);
            strcpy(atributoTexto1, "");
            printf("\n");
            break;
        case 2:
            strcpy(atributoTexto2Vers2,atributoTexto2);
            strcpy(atributoString1,atributoTexto2);
            printf("%s VS %s", pais1, pais2);
            printf("Você escolheu o atributo: %s\n", atributoString1);
            printf("%s : %.2f km² / %s : %.2f km²\n",pais1, area1, pais2, area2);
            area1 > area2 ? printf("O Pís %s da Carta 1 venceu no atributo 2.Área!\n", pais1) 
            : printf("O País%s da Carta 2 venceu no atributo 2.Área!\n", pais2);
            strcpy(atributoTexto2, "");
            printf("\n");  
            break;
        case 3:
            strcpy(atributoTexto3Vers2,atributoTexto3);
            strcpy(atributoString1,atributoTexto3);
            printf("%s VS %s", pais1, pais2);
            printf("Você escolheu o atributo: %s\n", atributoString1);
            printf("%s : US$ %.2f trilhões / %s : US$ %.2f trilhões\n",pais1, pib1, pais2, pib2);
            pib1 > pib2 ? printf("O País %s da Carta 1 venceu no atributo 3.PIB!\n", pais1) 
            : printf("O País %s da Carta 2 venceu no atributo 3.PIB!\n", pais2);
            strcpy(atributoTexto3, "");
            printf("\n");
            break;
        case 4:
            strcpy(atributoTexto4Vers2,atributoTexto4);
            strcpy(atributoString1,atributoTexto4);
            printf("%s VS %s", pais1, pais2);
            printf("Você escolheu o atributo: %s\n", atributoString1);
            printf("%s : %d / %s : %d\n",pais1, numerodePontosTuristicos1, pais2, numerodePontosTuristicos2);
            numerodePontosTuristicos1 > numerodePontosTuristicos2 ? 
            printf("O País %s da Carta 1 venceu no atributo 4.Número de Pontos Turísticos!\n", pais1) 
            : printf("O País %s da Carta 2 venceu no atributo 4.Número de Pontos Turísticos!\n", pais2);
            strcpy(atributoTexto4, "");
            printf("\n"); 
            break;
        case 5:
            strcpy(atributoTexto5Vers2,atributoTexto5);
            strcpy(atributoString1,atributoTexto5);
            printf("%s VS %s", pais1, pais2);
            printf("Você escolheu o atributo: %s\n", atributoString1);
            printf("%s : %.2f hab/km² / %s : %.2f hab/km²\n",pais1, densidadeDemografica1, pais2, densidadeDemografica2);
            densidadeDemografica1 < densidadeDemografica2 ? 
            printf("O País %s da Carta 1 venceu no atributo 5.Densidade Demográfica!\n", pais1) 
            : printf("O País %s da Carta 2 venceu no atributo 5.Densidade DEmográfica!\n", pais2);
            strcpy(atributoTexto5, "");
            printf("\n");
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }

    //Menu 2º após a escolha. Aqui o jogador irá escolher o 2º atributo:
    printf("Escolha o 2º atributo: \n");
    
    /*
    Aqui vemos mais uma função em C fora a parte que eu pesquisei. A função "strcmp()"
    Essa função serve para comparar duas strings.
    Aqui ela verifica se a string está vazia antes de imprimir
    Se a string vazia tiver ou seja retornar valor diferente de zero (!= 0),
    ela será impressa pois significa que ela não está vazia e poderá aparecer 
    impressa no 2º Menu. Isso garante que a oopção que já foi escolhida pelo
    jogador no 1º Menu e que foi removida, não apareça no 2º Menu:
    */

    if (strcmp(atributoTexto1, "") != 0) {
            printf("%s\n", atributoTexto1);
    } 
    if (strcmp(atributoTexto2, "") != 0) {
            printf("%s\n", atributoTexto2);
    }
    if (strcmp(atributoTexto3, "") != 0) {
            printf("%s\n", atributoTexto3);
    }  
    if (strcmp(atributoTexto4, "") != 0) {
            printf("%s\n", atributoTexto4);
    } 
    if (strcmp(atributoTexto5, "") != 0) {
            printf("%s\n", atributoTexto5);
    }
    
    printf("Escolha: ");
    scanf("%d",&atributoEscolhido2);
    printf("\n");
    
    switch (atributoEscolhido2)
    {
    case 1:
    if (atributoEscolhido1 == atributoEscolhido2) {
        printf("Opção Inválida! Você escolheu o mesmo atributo!\n");
    } else {
        strcpy(atributoString2, atributoTexto1);
        printf("%s VS %s\n", pais1, pais2);
        printf("Você escolheu o atributo: %s\n", atributoString2);
        printf("%s : %d / %s : %d\n",pais1, populacao1, pais2, populacao2);
        populacao1 < populacao2 ? printf("O País %s da Carta 2 venceu no atributo 1.População!\n", pais2) 
        : printf("O País %s da Carta 1 venceu no atributo 1.População!\n", pais1);
        printf("\n");
    }
        break;
    case 2:
    if (atributoEscolhido1 == atributoEscolhido2) {
        printf("Opção Inválida! Você escolheu o mesmo atributo!\n");
    } else {
        strcpy(atributoString2, atributoTexto2);
        printf("%s VS %s", pais1, pais2);
        printf("Você escolheu o atributo: %s\n", atributoString2);
        printf("%s : %.2f km² / %s : %.2f km²\n",pais1, area1, pais2, area2);
        area1 < area2 ? printf("O País %s da Carta 2 venceu no atributo 2.Área!\n", pais2) 
        : printf("O País %s da Carta 1 venceu no atributo 2.Área!\n", pais1);
        printf("\n");
    }
        break;
    case 3:
    if (atributoEscolhido1 == atributoEscolhido2) {
        printf("Opção Inválida! Você escolheu o mesmo atributo!\n");
    } else {
        strcpy(atributoString2, atributoTexto3);
        printf("%s VS %s", pais1, pais2);
        printf("Você escolheu o atributo: %s\n", atributoString2);
        printf("%s : US$ %.2f trilhões / %s : US$ %.2f trilhões\n",pais1, pib1, pais2, pib2);
        pib1 < pib2 ? printf("O País %s da Carta 2 venceu no atributo 3.PIB!\n", pais2) 
        : printf("O País %s da Carta 1 venceu no atributo 3.PIB!\n", pais1);
        printf("\n");
    }
        break;
    case 4:
    if (atributoEscolhido1 == atributoEscolhido2) {
        printf("Opção Inválida! Você escolheu o mesmo atributo!\n");
    } else {
        strcpy(atributoString2, atributoTexto4);
        printf("%s VS %s", pais1, pais2);
        printf("Você escolheu o atributo: %s\n", atributoString2);
        printf("%s : %d / %s : %d\n",pais1, numerodePontosTuristicos1, pais2, numerodePontosTuristicos2);
        numerodePontosTuristicos1 > numerodePontosTuristicos2 ? 
        printf("O País %s da Carta 2 venceu no atributo 4.Número de Pontos Turísticos!\n", pais2) 
        : printf("O País %s da Carta 1 venceu no atributo 4.Número de Pontos Turísticos!\n", pais1);
        printf("\n");
    }
        break;
    case 5:
    if (atributoEscolhido1 == atributoEscolhido2) {
        printf("Opção Inválida! Você escolheu o mesmo atributo!\n");
    } else {
        strcpy(atributoString2, atributoTexto5);
        printf("%s VS %s", pais1, pais2);
        printf("Você escolheu o atributo: %s\n", atributoString2);
        printf("%s : %.2f hab/km² / %s : %.2f hab/km²\n",pais1, populacao1, pais2, populacao2);
        densidadeDemografica1 > densidadeDemografica2 ? 
        printf("O País %s da Carta 2 venceu no atributo 5.Densidade Demográfica!\n", pais2) 
        : printf(" País %s da Carta 1 venceu no atributo 5.Densidade Demográfica!\n", pais1);
        printf("\n");
    }
    default:
        printf("Opção Inválida!");
    }

    if(strcmp(atributoString1,atributoTexto1Vers2) == 0 && strcmp(atributoString2,atributoTexto2) == 0 
    || strcmp(atributoString1,atributoTexto2Vers2) == 0 && strcmp(atributoString2,atributoTexto1) == 0) {
        if(somaPopArea1 > somaPopArea2) {
            printf("*** Soma dos Atributos escolhidos de cada carta ***\n\n");
            printf("Carta 1 / %s: %s + %s\n",pais1,atributoString1,atributoString2);
            printf("Carta 2 / %s: %s + %s\n",pais2,atributoString1,atributoString2);
            printf("%s : %d / %s : %d\n",pais1, somaPopArea1, pais2, somaPopArea2);
            printf("A Carta 1 do País %s Venceu!\n",pais1);
        } else {
            printf("*** Soma dos Atributos escolhidos de cada carta ***\n\n");
            printf("Carta 1 / %s: %s + %s\n",pais1,atributoString1,atributoString2);
            printf("Carta 2 / %s: %s + %s\n",pais2,atributoString1,atributoString2);
            printf("%s : %d / %s : %d\n",pais1, somaPopArea1, pais2, somaPopArea2);
            printf("A Carta 2 do País %s Venceu!\n",pais2);
        }
    } else if(strcmp(atributoString1,atributoTexto2Vers2) == 0 && strcmp(atributoString2,atributoTexto3) == 0 
    || strcmp(atributoString1,atributoTexto3Vers2) == 0 && strcmp(atributoString2,atributoTexto2) == 0) {
            if(somaAreaPib1 > somaAreaPib2) {
            printf("*** Soma dos Atributos escolhidos de cada carta ***\n\n");
            printf("Carta 1 / %s: %s + %s\n",pais1,atributoString1,atributoString2);
            printf("Carta 2 / %s: %s + %s\n",pais2,atributoString1,atributoString2);
            printf("%s : %d / %s : %d\n",pais1, somaAreaPib1, pais2, somaAreaPib2);
            printf("A Carta 1 do País %s Venceu!\n",pais1);
        } else {
            printf("*** Soma dos Atributos escolhidos de cada carta ***\n\n");
            printf("Carta 1 / %s: %s + %s\n",pais1,atributoString1,atributoString2);
            printf("Carta 2 / %s: %s + %s\n",pais2,atributoString1,atributoString2);
            printf("%s : %d / %s : %d\n",pais1, somaAreaPib1, pais2, somaAreaPib2);
            printf("A Carta 2 do País %s Venceu!\n",pais2);
        }
    } else if(strcmp(atributoString1,atributoTexto3Vers2) == 0 && strcmp(atributoString2,atributoTexto4) == 0 
    || strcmp(atributoString1,atributoTexto4Vers2) == 0 && strcmp(atributoString2,atributoTexto3) == 0) {
        if(somaPibNPT1 > somaPibNPT2) {
            printf("*** Soma dos Atributos escolhidos de cada carta ***\n\n");
            printf("Carta 1 / %s: %s + %s\n",pais1,atributoString1,atributoString2);
            printf("Carta 2 / %s: %s + %s\n",pais2,atributoString1,atributoString2);
            printf("%s : %d / %s : %d\n",pais1, somaPibNPT1, pais2, somaPibNPT2);
            printf("A Carta 1 do País %s Venceu!\n",pais1);
        } else {
            printf("*** Soma dos Atributos escolhidos de cada carta ***\n\n");
            printf("Carta 1 / %s: %s + %s\n",pais1,atributoString1,atributoString2);
            printf("Carta 2 / %s: %s + %s\n",pais2,atributoString1,atributoString2);
            printf("%s : %d / %s : %d\n",pais1, somaPibNPT1, pais2, somaPibNPT2);
            printf("A Carta 2 do País %s Venceu!\n",pais2);
        } 
    } else if(strcmp(atributoString1,atributoTexto4Vers2) == 0 && strcmp(atributoString2,atributoTexto5) == 0 
    || strcmp(atributoString1,atributoTexto5Vers2) == 0 && strcmp(atributoString2,atributoTexto4) == 0 ) {
        if(somaNPTDens1 > somaNPTDens2) {
            printf("*** Soma dos Atributos escolhidos de cada carta ***\n\n");
            printf("Carta 1 / %s: %s + %s\n",pais1,atributoString1,atributoString2);
            printf("Carta 2 / %s: %s + %s\n",pais2,atributoString1,atributoString2);
            printf("%s : %d / %s : %d\n",pais1, somaNPTDens1, pais2, somaNPTDens2);
            printf("A Carta 1 do País %s Venceu!\n",pais1);
        } else {
            printf("*** Soma dos Atributos escolhidos de cada carta ***\n\n");
            printf("Carta 1 / %s: %s + %s\n",pais1,atributoString1,atributoString2);
            printf("Carta 2 / %s: %s + %s\n",pais2,atributoString1,atributoString2);
            printf("%s : %d / %s : %d\n",pais1, somaNPTDens1, pais2, somaNPTDens2);
            printf("A Carta 2 do País %s Venceu!\n",pais2);
        } 
    } else if(strcmp(atributoString1,atributoTexto1Vers2) == 0 && strcmp(atributoString2,atributoTexto3) == 0 
    || strcmp(atributoString1,atributoTexto3Vers2) == 0 && strcmp(atributoString2,atributoTexto1) == 0 ) {
        if(somaPopPib1 > somaPopPib2) {
            printf("*** Soma dos Atributos escolhidos de cada carta ***\n\n");
            printf("Carta 1 / %s: %s + %s\n",pais1,atributoString1,atributoString2);
            printf("Carta 2 / %s: %s + %s\n",pais2,atributoString1,atributoString2);
            printf("%s : %d / %s : %d\n",pais1, somaPopPib1, pais2, somaPopPib2);
            printf("A Carta 1 do País %s Venceu!\n",pais1);
        } else {
            printf("*** Soma dos Atributos escolhidos de cada carta ***\n\n");
            printf("Carta 1 / %s: %s + %s\n",pais1,atributoString1,atributoString2);
            printf("Carta 2 / %s: %s + %s\n",pais2,atributoString1,atributoString2);
            printf("%s : %d / %s : %d\n",pais1, somaPopPib1, pais2, somaPopPib2);
            printf("A Carta 2 do País %s Venceu!\n",pais2);
        }
    } else if(strcmp(atributoString1,atributoTexto1Vers2) == 0 && strcmp(atributoString2,atributoTexto4) == 0 
    || strcmp(atributoString1,atributoTexto4Vers2) == 0 && strcmp(atributoString2,atributoTexto1) == 0 ) {
        if(somaPopNPT1 > somaPopNPT2) {
            printf("*** Soma dos Atributos escolhidos de cada carta ***\n\n");
            printf("Carta 1 / %s: %s + %s\n",pais1,atributoString1,atributoString2);
            printf("Carta 2 / %s: %s + %s\n",pais2,atributoString1,atributoString2);
            printf("%s : %d / %s : %d\n",pais1, somaPopNPT1, pais2, somaPopNPT2);
            printf("A Carta 1 do País %s Venceu!\n",pais1);
        } else {
            printf("*** Soma dos Atributos escolhidos de cada carta ***\n\n");
            printf("Carta 1 / %s: %s + %s\n",pais1,atributoString1,atributoString2);
            printf("Carta 2 / %s: %s + %s\n",pais2,atributoString1,atributoString2);
            printf("%s : %d / %s : %d\n",pais1, somaPopNPT1, pais2, somaPopNPT2);
            printf("A Carta 2 do País %s Venceu!\n",pais2);
        }
    } else if(strcmp(atributoString1,atributoTexto1Vers2) == 0 && strcmp(atributoString2,atributoTexto5) == 0 
    || strcmp(atributoString1,atributoTexto5Vers2) == 0 && strcmp(atributoString2,atributoTexto1) == 0 ) {
        if(somaPopDens1 > somaPopDens2) {
            printf("*** Soma dos Atributos escolhidos de cada carta ***\n\n");
            printf("Carta 1 / %s: %s + %s\n",pais1,atributoString1,atributoString2);
            printf("Carta 2 / %s: %s + %s\n",pais2,atributoString1,atributoString2);
            printf("%s : %d / %s : %d\n",pais1, somaPopDens1, pais2, somaPopDens2);
            printf("A Carta 1 do País %s Venceu!\n",pais1);
        } else {
            printf("*** Soma dos Atributos escolhidos de cada carta ***\n\n");
            printf("Carta 1 / %s: %s + %s\n",pais1,atributoString1,atributoString2);
            printf("Carta 2 / %s: %s + %s\n",pais2,atributoString1,atributoString2);
            printf("%s : %d / %s : %d\n",pais1, somaPopDens1, pais2, somaPopDens2);
            printf("A Carta 2 do País %s Venceu!\n",pais2);
        }
    } else if(strcmp(atributoString1,atributoTexto2Vers2) == 0 && strcmp(atributoString2,atributoTexto4) == 0 
    || strcmp(atributoString1,atributoTexto4Vers2) == 0 && strcmp(atributoString2,atributoTexto2) == 0 ) {
        if(somaAreaNPT1 > somaAreaNPT2) {
            printf("*** Soma dos Atributos escolhidos de cada carta ***\n\n");
            printf("Carta 1 / %s: %s + %s\n",pais1,atributoString1,atributoString2);
            printf("Carta 2 / %s: %s + %s\n",pais2,atributoString1,atributoString2);
            printf("%s : %d / %s : %d\n",pais1, somaAreaNPT1, pais2, somaAreaNPT2);
            printf("A Carta 1 do País %s Venceu!\n",pais1);
        } else {
            printf("*** Soma dos Atributos escolhidos de cada carta ***\n\n");
            printf("Carta 1 / %s: %s + %s\n",pais1,atributoString1,atributoString2);
            printf("Carta 2 / %s: %s + %s\n",pais2,atributoString1,atributoString2);
            printf("%s : %d / %s : %d\n",pais1, somaAreaNPT1, pais2, somaAreaNPT2);
            printf("A Carta 2 do País %s Venceu!\n",pais2);
        }
    } else if(strcmp(atributoString1,atributoTexto2Vers2) == 0 && strcmp(atributoString2,atributoTexto5) == 0 
    || strcmp(atributoString1,atributoTexto5Vers2) == 0 && strcmp(atributoString2,atributoTexto2) == 0 ) {
        if(somaAreaDens1 > somaAreaDens2) {
            printf("*** Soma dos Atributos escolhidos de cada carta ***\n\n");
            printf("Carta 1 / %s: %s + %s\n",pais1,atributoString1,atributoString2);
            printf("Carta 2 / %s: %s + %s\n",pais2,atributoString1,atributoString2);
            printf("%s : %d / %s : %d\n",pais1, somaAreaDens1, pais2, somaAreaDens2);
            printf("A Carta 1 do País %s Venceu!\n",pais1);
        } else {
            printf("*** Soma dos Atributos escolhidos de cada carta ***\n\n");
            printf("Carta 1 / %s: %s + %s\n",pais1,atributoString1,atributoString2);
            printf("Carta 2 / %s: %s + %s\n",pais2,atributoString1,atributoString2);
            printf("%s : %d / %s : %d\n",pais1, somaAreaDens1, pais2, somaAreaDens2);
            printf("A Carta 2 do País %s Venceu!\n",pais2);
        }
    } else if(strcmp(atributoString1,atributoTexto3Vers2) == 0 && strcmp(atributoString2,atributoTexto5) == 0 
    || strcmp(atributoString1,atributoTexto5Vers2) == 0 && strcmp(atributoString2,atributoTexto3) == 0 ) {
        if(somaPibDens1 > somaPibDens2) {
            printf("*** Soma dos Atributos escolhidos de cada carta ***\n\n");
            printf("Carta 1 / %s: %s + %s\n",pais1,atributoString1,atributoString2);
            printf("Carta 2 / %s: %s + %s\n",pais2,atributoString1,atributoString2);
            printf("%s : %d / %s : %d\n",pais1, somaPibDens1, pais2, somaPibDens2);
            printf("A Carta 1 do País %s Venceu!\n",pais1);
        } else {
            printf("*** Soma dos Atributos escolhidos de cada carta ***\n\n");
            printf("Carta 1 / %s: %s + %s\n",pais1,atributoString1,atributoString2);
            printf("Carta 2 / %s: %s + %s\n",pais2,atributoString1,atributoString2);
            printf("%s : %d / %s : %d\n",pais1, somaPibDens1, pais2, somaPibDens2);
            printf("A Carta 2 do País %s Venceu!\n",pais2);
        }
    } else if(strcmp(atributoString1,atributoTexto4Vers2) == 0 && strcmp(atributoString2,atributoTexto5) == 0 
    || strcmp(atributoString1,atributoTexto5Vers2) == 0 && strcmp(atributoString2,atributoTexto4) == 0 ) {
        if(somaNPTDens1 > somaNPTDens2) {
            printf("*** Soma dos Atributos escolhidos de cada carta ***\n\n");
            printf("Carta 1 / %s: %s + %s\n",pais1,atributoString1,atributoString2);
            printf("Carta 2 / %s: %s + %s\n",pais2,atributoString1,atributoString2);
            printf("%s : %d / %s : %d\n",pais1, somaNPTDens1, pais2, somaNPTDens2);
            printf("A Carta 1 do País %s Venceu!\n",pais1);
        } else {
            printf("*** Soma dos Atributos escolhidos de cada carta ***\n\n");
            printf("Carta 1 / %s: %s + %s\n",pais1,atributoString1,atributoString2);
            printf("Carta 2 / %s: %s + %s\n",pais2,atributoString1,atributoString2);
            printf("%s : %d / %s : %d\n",pais1, somaNPTDens1, pais2, somaNPTDens2);
            printf("A Carta 2 do País %s Venceu!\n",pais2);
        }
    } 

    return 0;

}

