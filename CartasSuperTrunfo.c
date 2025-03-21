#include <stdio.h>
#include <string.h> //Biblioteca que inclui para manipular strings com o uso de 'strcpy' e 'strcmp'

int main() {
    
    //Declaração de variáveis para cadastro dos Países:
    char  pais1[20], pais2[20];
    //char  codigo1[20], codigo2[20];
    int   populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int   numerodePontosTuristicos1, numerodePontosTuristicos2;
    //float superPoder1, superPoder2;
    
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

    //variáveis para a impelmentação do Mênu:
    char atributoString1[40], atributoString2[40];
    int atributoEscolhido1, atributoEscolhido2;
    char atributoTexto1[40] = "1.População"; 
    char atributoTexto2[40] = "2.Área"; 
    char atributoTexto3[40] = "3.PIB";
    char atributoTexto4[40] = "4.Número de Pontos Turísticos";
    char atributoTexto5[40] = "5.Densidade Demográfica";
    //variáveis para a soma dos dois atributos escolhidos pelo jogador:
    int somaDosAtributos1, somaDosAtributos2;

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
    
    // Switch para remover a opção escolhida
    switch (atributoEscolhido1) {
        case 1:
            printf("%s VS %s", pais1, pais2);
            populacao1 > populacao2 ? printf("O País %s da Carta 1 venceu no atributo 1.População!\n", pais1) 
            : printf("O País %s da Carta 2 venceu no atributo 1.População!\n", pais2);
            strcpy(atributoString1,atributoTexto1);
            strcpy(atributoTexto1, "");
            printf("\n");
            break;
        case 2:
            printf("%s VS %s", pais1, pais2);
            area1 > area2 ? printf("O Pís %s da Carta 1 venceu no atributo 2.Área!\n", pais1) 
            : printf("O País%s da Carta 2 venceu no atributo 2.Área!\n", pais2);
            strcpy(atributoString1,atributoTexto2);
            strcpy(atributoTexto2, "");
            printf("\n");  
            break;
        case 3:
            printf("%s VS %s", pais1, pais2);
            pib1 > pib2 ? printf("O País %s da Carta 1 venceu no atributo 3.PIB!\n", pais1) 
            : printf("O País %s da Carta 2 venceu no atributo 3.PIB!\n", pais2);
            strcpy(atributoString1,atributoTexto3);
            strcpy(atributoTexto3, "");
            printf("\n");
            break;
        case 4:
            printf("%s VS %s", pais1, pais2);
            numerodePontosTuristicos1 > numerodePontosTuristicos2 ? 
            printf("O País %s da Carta 1 venceu no atributo 4.Número de Pontos Turísticos!\n", pais1) 
            : printf("O País %s da Carta 2 venceu no atributo 4.Número de Pontos Turísticos!\n", pais2);
            strcpy(atributoString1,atributoTexto4);
            strcpy(atributoTexto4, "");
            printf("\n"); 
            break;
        case 5:
            printf("%s VS %s", pais1, pais2);
            densidadeDemografica1 < densidadeDemografica2 ? 
            printf("O País %s da Carta 1 venceu no atributo 5.Densidade Demográfica!\n", pais1) 
            : printf("O País %s da Carta 2 venceu no atributo 5.Densidade DEmográfica!\n", pais2);
            strcpy(atributoString1,atributoTexto5);
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
        printf("Você escolheu os atributos: %s e %s\n", atributoString1, atributoString2);
        populacao1 < populacao2 ? printf("O País %s da Carta 2 venceu no atributo 1.População!\n", pais2) 
        : printf("O País %s da Carta 1 venceu no atributo 1.População!\n", pais1);
    }
        break;
    case 2:
    if (atributoEscolhido1 == atributoEscolhido2) {
        printf("Opção Inválida! Você escolheu o mesmo atributo!\n");
    } else {
        strcpy(atributoString2, atributoTexto2);
        printf("%s VS %s", pais1, pais2);
        printf("Você escolheu os atributos: %s e %s\n", atributoString1, atributoString2);
        area1 < area2 ? printf("O País %s da Carta 2 venceu no atributo 2.Área!\n", pais2) 
        : printf("O País %s da Carta 1 venceu no atributo 2.Área!\n", pais1);
    }
        break;
    case 3:
    if (atributoEscolhido1 == atributoEscolhido2) {
        printf("Opção Inválida! Você escolheu o mesmo atributo!\n");
    } else {
        strcpy(atributoString2, atributoTexto3);
        printf("%s VS %s", pais1, pais2);
        printf("Você escolheu os atributos: %s e %s\n", atributoString1, atributoString2);
        pib1 < pib2 ? printf("O País %s da Carta 2 venceu no atributo 3.PIB!\n", pais2) 
        : printf("O País %s da Carta 1 venceu no atributo 3.PIB!\n", pais1);
    }
        break;
    case 4:
    if (atributoEscolhido1 == atributoEscolhido2) {
        printf("Opção Inválida! Você escolheu o mesmo atributo!\n");
    } else {
        strcpy(atributoString2, atributoTexto4);
        printf("%s VS %s", pais1, pais2);
        printf("Você escolheu os atributos: %s e %s\n", atributoString1, atributoString2);
        numerodePontosTuristicos1 < numerodePontosTuristicos2 ? 
        printf("O País %s da Carta 2 venceu no atributo 4.Número de Pontos Turísticos!\n", pais2) 
        : printf("O País %s da Carta 1 venceu no atributo 4.Número de Pontos Turísticos!\n", pais1);
    }
        break;
    case 5:
    if (atributoEscolhido1 == atributoEscolhido2) {
        printf("Opção Inválida! Você escolheu o mesmo atributo!\n");
    } else {
        strcpy(atributoString2, atributoTexto5);
        printf("%s VS %s", pais1, pais2);
        printf("Você escolheu os atributos: %s e %s\n", atributoString1, atributoString2);
        densidadeDemografica1 > densidadeDemografica2 ? 
        printf("O País %s da Carta 2 venceu no atributo 5.Densidade Demográfica!\n", pais2) 
        : printf(" País %s da Carta 1 venceu no atributo 5.Densidade Demográfica!\n", pais1);
    }
        break;
    default:
        printf("Opção Inválida!");
        break;
    }

    /*
    switch (atributo1)
    {
    case 1:
        printf("%s : %d / %s : %d\n", pais1, populacao1, pais2, populacao2);
        populacao1 > populacao2 ? printf("O %s da Carta 1 Venceu a Rodada 1!\n", pais1) 
        : printf("O %s da Carta 2 Venceu a Rodada2!\n", pais2);
        break;
    case 2:
        printf("%s : %.2fkm² / %s : %.2fkm²\n", pais1, area1, pais2, area2);
        area1 > area2 ? printf("O %s da Carta 1 Venceu a Rodada 1!\n", pais1) 
        : printf("O %s da Carta 2 Venceu a Rodada 2!\n", pais2);
        break;
    case 3:
        printf("%s : US$ %.2f trilhões / %s : US$ %.2f trilhões\n", pais1, pib1, pais2, pib2);
        pib1 > pib2 ? printf("O %s da Carta 1 Venceu a Rodada 1!\n", pais1) 
        : printf("O %s da Carta 2 Venceu a Rodada 2!\n", pais2);
        break;
    case 4:
        printf("%s : %d / %s : %d", pais1, numerodePontosTuristicos1, pais2, numerodePontosTuristicos2);
        numerodePontosTuristicos1 > numerodePontosTuristicos2 ? printf("O %s da Carta 1 Venceu a Rodada 1!\n", pais1) 
        : printf("O %s da Carta 2 Venceu a Rodada 2!\n", pais2);
        break;
    case 5:
        printf("%s : %.2f hab/km² / %s : %.2f hab/km²\n", pais1, densidadeDemografica1, pais2, densidadeDemografica2);
        densidadeDemografica1 < densidadeDemografica2 ? printf("O %s da Carta 1 Venceu a Rodada 1!\n", pais1) 
        : printf("O %s da Carta 2 Venceu a Rodada 2!\n", pais2);
        break;
    }
    */

    

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

