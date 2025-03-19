#include <stdio.h>



int main() {
    
    //Declaração de variáveis para cadastro dos Países:
    char  pais1[20], pais2[20];
    //char  codigo1[20], codigo2[20];
    int   populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int   numerodePontosTuristicos1, numerodePontosTuristicos2;
    float superPoder1, superPoder2;
    
    //Declaração de variáveis para cáculo de Densidade Demográfica
    float densidadeDemografica1, densidadeDemografica2;
    //float pibPercapita1, pibPercapita2;

    /*
    Dclaração das variáveis para comparação entre as Cartas 1 e 2: 
    (obs: NPT = Número de Pontos Turísticos; DP = Densidade Populacional; PPC = PIB per Capita; SP = Super Poder)
    */
    
    /*
    //Bloco de cadastro do estado e da cidade da Carta 1:
    printf("Digite uma letra de 'A' a 'H' para escolher o estado da Carta 1:\n");
    scanf(" %c",&estado1);

    printf("Digite o código da Carta 1 com a letra do estado seguida de um número de 01 a 04 (ex: A01, B03):\n");
    scanf("%s",codigo1);

    getchar ();
    */
    
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
    
    /*
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
    */
    
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
    
    /*
    pibPercapita2 = (pib2 * 1000000000) / (float) populacao2;

    //Cáculo do Super Poder da Carta 2: (Soma de todos os atributos da cidade)
    superPoder2 = (float) populacao2 + area2 + pib2 + numerodePontosTuristicos2 + densidadePopuluacional2 + pibPercapita2;
    
    printf("\n");

    //Impressão dos dados de cadastro da Carta 1:
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da País: %s",nomedaCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f trilhões de dólares\n", pib1);
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
    */

    
    /*
    Resultado do Jogo Super Trunfo em C 
    usando menu interativo com switch 
    e usando lógica com estruturas de decisão If e If-else: 
    (comparações entre as Cartas 1 e 2)
    */

    int atributo1, atributo2;
    int escolha;
    char atributoTexto1[50] = '1. População'; 
    char atributoTexto2[50] = '2. Área'; 
    char atributoTexto3[50] = '3. PIB';
    char atributoTexto4[50] = '4. Número de Pontos Túrísticos';
    char atributoTexto5[50] = '5. Densidade Demográfica';

    
    //Menu do Jogo:
    printf("*** Jogo do Super Trunfo Países ***\n");
    printf("Escolha o 1º atributo:\n");
    printf("%s\n",atributoTexto1);
    printf("%s\n",atributoTexto2);
    printf("%s\n",atributoTexto3);
    printf("%s\n",atributoTexto4);
    printf("%s\n",atributoTexto5);
    printf("Escolha: ");
    scanf("%d",&atributo1);
    scanf("%s",&escolha);

    
    
    printf("*** Jogo do Super Trunfo Países ***\n");
    printf("Escolha o 2º atributo:\n");
    printf("%s\n",atributoTexto1);
    printf("%s\n",atributoTexto2);
    printf("%s\n",atributoTexto3);
    printf("%s\n",atributoTexto4);
    printf("%s\n",atributoTexto5);
    printf("Escolha: ");
    scanf("%d",&atributo2);


    
    /*
    //Bloco de código onde as decisões são tomadas de acordo com a escolha do jogador:
    switch (atributo1)
    {
        case '1':
        if (populacao1 > populacao2)
        {
            printf("%s VS %s\n", pais1,pais2);
            printf("*** POPULAÇÃO ***\n");
            printf("%s: %d\n%s: %d\n", pais1, populacao1,pais2,populacao2);
            printf("### Carta 1 do País %s Venceu! ###\n", pais1);
        } 
        else if (populacao2 > populacao1)  
        {
            printf("%s VS %s\n", pais1, pais2);
            printf("*** POPULAÇÃO ***\n");
            printf("%s: %d\n %s: %d\n", pais1, populacao1, pais2, populacao2);
            printf("### Carta 2 do País %s Venceu! ###\n", pais2);
        } 
        else 
        {
            printf("%s VS %s\n", pais1,pais2);
            printf("*** POPULAÇÃO ***\n");
            printf("%s: %d\n%s: %d\n", pais1, populacao1,pais2,populacao2);
            printf("### Empate! ###");
        }
        
        break;
        
        case 2:
        if (area1 > area2)
        {
            printf("%s VS %s\n", pais1, pais2);
            printf("*** ÁREA ***\n");
            printf("%s: %.3f km²\n %s: %.3f km²\n", pais1, area1, pais2, area2);
            printf("### Carta 1 do País %s Venceu! ###\n", pais1);
        } 
        else if (area2 > area1)  
        {
            printf("%s VS %s\n", pais1, pais2);
            printf("*** ÁREA ***\n");
            printf("%s: %.3f km²\n %s: %.3f km²\n", pais1, area1, pais2, area2);
            printf("### Carta 2 do País %s Venceu! ###\n", pais2);
        } 
        else 
        {
            printf("%s VS %s\n", pais1, pais2);
            printf("*** ÁREA ***\n");
            printf("%s: %.3f km²\n %s: %.3f km²\n", pais1, area1, pais2, area2);
            printf("### Empate! ###");
        }
        
        break;

        case 3:
        if (pib1 > pib2)
        {
            printf("%s VS %s\n", pais1, pais2);
            printf("*** PIB ***\n");
            printf("%s: US$ %.2f trilhões\n %s: US$ %.2f trilhões\n", pais1, pib1, pais2, pib2);
            printf("### Carta 1 do País %s Venceu! ###\n", pais1);
        } 
        else if (pib2 > pib1)
        {
            printf("%s VS %s\n", pais1, pais2);
            printf("*** PIB ***\n");
            printf("%s: US$ %.2f trilhões\n %s: US$ %.2f trilhões\n", pais1, pib1, pais2, pib2);
            printf("### Carta 2 do País %s Venceu! ###\n", pais2);
        } 
        else 
        {
            printf("%s VS %s\n", pais1, pais2);
            printf("*** PIB ***\n");
            printf("%s: US$ %.2f trilhões\n %s: US$ %.2f trilhões\n", pais1, pib1, pais2, pib2);
            printf("### Carta 2 Venceu ###");
            printf("### Empate! ###");
        }
        
        break;

        case 4:
        if (numerodePontosTuristicos1 > numerodePontosTuristicos2)
        {
            printf("%s VS %s\n", pais1, pais2);
            printf("*** NÚMERO DE PONTOS TURÍSTICOS ***\n");
            printf("%s: %d Pontos Turísticos\n %s: %d Pontos Turísticos\n", pais1, numerodePontosTuristicos1, pais2, numerodePontosTuristicos2);
            printf("### Carta 1 do País %s Venceu! ###\n", pais1);
        } 
        else if (numerodePontosTuristicos2 > numerodePontosTuristicos1) 
        {
            printf("%s VS %s\n", pais1, pais2);
            printf("*** NÚMERO DE PONTOS TURÍSTICOS ***\n");
            printf("%s: %d Pontos Turísticos\n %s: %d Pontos Turísticos\n", pais1, numerodePontosTuristicos1, pais2, numerodePontosTuristicos2);
            printf("### Carta 2 do País %s Venceu! ###\n", pais2);
        } 
        else 
        {
            printf("%s VS %s\n", pais1, pais2);
            printf("*** NÚMERO DE PONTOS TURÍSTICOS ***\n");
            printf("%s: %d Pontos Turísticos\n %s: %d Pontos Turísticos\n", pais1, numerodePontosTuristicos1, pais2, numerodePontosTuristicos2);
            printf("### Empate! ###");
        }
        
        break;

        case 5:
        if (densidadeDemografica1 < densidadeDemografica2)
        {
            printf("%s VS %s\n", pais1, pais2);
            printf("*** DENSIDADE DEMOGRÁFICA ***\n");
            printf("%s: %.2f hab / km²\n %s: %.2f hab / km²\n", pais1, densidadeDemografica1, pais2, densidadeDemografica2);
            printf("### Carta 1 do País %s Venceu! ###\n", pais1);
        } 
        else if (densidadeDemografica2 < densidadeDemografica1)  
        {
            printf("%s VS %s\n", pais1, pais2);
            printf("*** DENSIDADE DEMOGRÁFICA ***\n");
            printf("%s: %.2f hab / km²\n %s: %.2f hab / km²\n", pais1, densidadeDemografica1, pais2, densidadeDemografica2);
            printf("### Carta 2 do País %s Venceu! ###\n", pais2);
        } 
        else 
        {
            printf("%s VS %s\n", pais1, pais2);
            printf("*** DENSIDADE DEMOGRÁFICA ***\n");
            printf("%s: %.2f hab / km²\n %s: %.2f hab / km²\n", pais1, densidadeDemografica1, pais2, densidadeDemografica2);
            printf("### Empate! ###");
        }

        break;

        default:
            printf("Opção Inválida!");
        
        break;
        


    }
    */
    
    return 0;

}

