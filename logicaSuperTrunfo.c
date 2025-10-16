#include <stdio.h>

int main() {

    //Declarando as variáveis

    char estado1[2];
    char codigo1[4];
    char nomedacidade1[20];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    float densidadepop1;
    float pibpercapita1;
    float superpoder1;
    float invertdensidadepop1;

    char estado2[2];
    char codigo2[4];
    char nomedacidade2[20];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidadepop2;
    float pibpercapita2;
    float superpoder2;
    float invertdensidadepop2;

    int escolhaAtributo1;
    int escolhaAtributo2;

    int resultado1;
    int resultado2;
    //Instruindo o usuário sobre como criar as cartas de acordo com as regras do jogo

    printf("Seja muito bem-vindo(a) ao Jogo Cartas Super Trunfo!\n");
    printf("O jogo é bem simples e possui algumas regras que você deve seguir, segue as regras abaixo:\n");
    printf("\nRegra número 1: O Estado deve ser somente uma letra de A à H.\n");
    printf("Regra número 2: O Código da carta deve ser a letra do estado em que ela se encontra juntamente com 01, 02, 03 ou 04. Exemplo: A01.\n");
    printf("Regra número 3: A cidade não pode ter nome composto, somente nome único.\n");
    printf("Regra número 4: O PIB é convertido automaticamente para Bilhões, então insira o valor em dezenas ou centenas.\n");
    printf("\nTenha um bom jogo e divirta-se!\n");

    //Adicionado a Carta 1

    printf("\nAdicione a Carta 1:\n");

    //Adicionando o Estado
 
    printf("\nDigite o Estado: "); 
    scanf(" %c", estado1);

    //Adicionando o Código da carta

    printf("Digite o Código da Carta: ");
    scanf("%s", codigo1);

    //Adicionando o nome da Cidade

    printf("Digite o Nome da Cidade: ");
    scanf("%s", nomedacidade1);

    //Adicionando a população da Cidade

    printf("Digite a População da Cidade: ");
    scanf("%lu", &populacao1);

    //Adicionando a área da Cidade

    printf("Digite a Área em Km²: ");
    scanf("%f", &area1);

    //Adicionando o PIB da Cidade

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    //Adicionando o número de pontos turísticos da Cidade

    printf("Digite o Número de Pontos Turísticos da Cidade: ");
    scanf("%d", &pontosturisticos1);

     //Adicionando a Carta 2

    printf("\nAdicione a Carta 2:\n");

    //Adicionando o Estado

    printf("Digite o Estado: ");
    scanf(" %c", estado2);
 
    //Adicionando o Código da carta

    printf("Digite o Código da Carta: ");
    scanf("%s", codigo2);

    //Adicionando o nome da Cidade
    printf("Digite o Nome da Cidade: ");
    scanf("%s", nomedacidade2);

    //Adicionando a população da Cidade

    printf("Digite a População: ");
    scanf("%lu", &populacao2);

    //Adicionando a área da Cidade

    printf("Digite a Área em Km²: ");
    scanf("%f", &area2);

    //Adicionando o PIB da Cidade

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    //Adicionando o número de pontos turísticos da Cidade

    printf("Digite o Número de Pontos Turísticos da Cidade: ");
    scanf("%d", &pontosturisticos2);

    //Demonstrando as Cartas 1 e 2 e calculando os atributos que necessitam de entrada de dados para serem calculados

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1[0]);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomedacidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km2", area1);
    printf("\nPIB: %.2f bilhões de reais", pib1);
    printf("\nNúmeros de Pontos Turísticos: %d\n", pontosturisticos1);
    densidadepop1 = populacao1 / area1;
    pibpercapita1 = (pib1 * 1000000000) / populacao1;
    printf("Densidade Populacional: %.2f hab/km²", densidadepop1);
    invertdensidadepop1 = 1 / densidadepop1;
    printf("\nPIB per Capita: %.2f reais\n", pibpercapita1);
    superpoder1 = (float) populacao1 + (float) area1 + (float) pib1 + (float) pontosturisticos1 + (float) invertdensidadepop1 + (float) pibpercapita1;
    printf("Super Poder: %.2f\n", superpoder1);
    

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2[0]);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomedacidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²", area2);
    printf("\nPIB: %.2f bilhões de reais", pib2);
    printf("\nNúmeros de Pontos Turísticos: %d\n", pontosturisticos2);
    densidadepop2 = populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000) / populacao2;
    printf("Densidade Populacional: %.2f hab/km²", densidadepop2);
    invertdensidadepop2 = 1 / densidadepop2;
    printf("\nPIB per Capita: %.2f reais\n", pibpercapita2);
    superpoder2 = (float) populacao2 + (float) area2 + (float) pib2 + (float) pontosturisticos2 + (float) invertdensidadepop2 + (float) pibpercapita2;
    printf("Super Poder: %.2f\n", superpoder2);


    //Montando o menu interativo para o jogador escolher o primeiro atributo que será comparado

    printf("\nEscolha o primeiro atributo para ser comparado: \n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Números de pontos turísticos\n");
    printf("5. Densidade Populacional\n");
    scanf("%d", &escolhaAtributo1);

    //Realizando as comparações do primeiro atributo escolhido e armazenando em uma variavel

    switch(escolhaAtributo1){
        case 1:
        printf("\nVocê escolheu o atributo: População\n");
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        break;
        case 2:
        printf("\nVocê escolheu o atributo: Área\n");
        resultado1 = area1 > area2 ? 1 : 0;
        break;
        case 3:
        printf("\nVocê escolheu o atributo: PIB\n");
        resultado1 = pib1 > pib2 ? 1 : 0;
        break;
        case 4:
        printf("\nVocê escolheu o atributo: Pontos Turísticos\n");
        resultado1 = pontosturisticos1 > pontosturisticos2 ? 1 : 0;
        break;
        case 5:
        printf("\nVocê escolheu o atributo: Densidade Populacional\n");
        resultado1 = densidadepop1 < densidadepop2? 1 : 0;
        break;
        default:
        printf("Opção inválida!");
        break;
    }

    //Montando o menu interativo para o jogador escolher o segundo atributo que será comparado

    printf("\nEscolha o segundo atributo para ser comparado: \n");
    printf("\n### ATENÇÃO: DEVE SER DIFERENTE DO PRIMEIRO ATRIBUTO ESCOLHIDO ###\n");
    printf("\n1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Números de pontos turísticos\n");
    printf("5. Densidade Populacional\n");
    scanf("%d", &escolhaAtributo2);

    //Verificando se o segundo atributo é diferente do primeiro, realizando as comparações do segundo atributo escolhido e armazenando em uma variavel

    if(escolhaAtributo1 == escolhaAtributo2){
        printf("Você escolheu o mesmo atributo.\n");
    } else{
        switch(escolhaAtributo2){
        case 1:
        printf("\nVocê escolheu o atributo: População\n");
        resultado2 = populacao1 > populacao2 ? 1 : 0;
        break;
        case 2:
        printf("\nVocê escolheu o atributo: Área\n");
        resultado2 = area1 > area2 ? 1 : 0;
        break;
        case 3:
        printf("\nVocê escolheu o atributo: PIB\n");
        resultado2 = pib1 > pib2 ? 1 : 0;
        break;
        case 4:
        printf("\nVocê escolheu o atributo: Pontos Turísticos\n");
        resultado2 = pontosturisticos1 > pontosturisticos2 ? 1 : 0;
        break;
        case 5:
        printf("\nVocê escolheu o atributo: Densidade Populacional\n");
        resultado2 = densidadepop1 < densidadepop2? 1 : 0;
        break;
        default:
        printf("Opção inválida!");
        break;
        }
    }
    
    //Fazendo o comparativo final para ver qual carta tem mais pontos

    if((resultado1 == 1) && (resultado2 == 1)){
        printf("\n%s x %s\n", nomedacidade1, nomedacidade2);
        switch(escolhaAtributo1){
        case 1:
        printf("Primeiro atributo escolhido: População\n");
        printf("População 1: %lu - População 2: %lu\n", populacao1, populacao2);
        break;
        case 2:
        printf("Primeiro atributo escolhido: Área\n");
        printf("Área 1: %.2f - Área 2: %.2f\n", area1, area2);
        break;
        case 3:
        printf("Primeiro atributo escolhido: PIB\n");
        printf("PIB 1: %.2f - PIB 2: %.2f\n", pib1, pib2);
        break;
        case 4:
        printf("Primeiro atributo escolhido: Pontos Turísticos\n");
        printf("Pontos Turísticos 1: %d - Pontos Turísticos 2: %d\n", pontosturisticos1, pontosturisticos2);
        break;
        case 5:
        printf("Primeiro atributo escolhido: Densidade Populacional\n");
        printf("Densidade Populacional 1: %.2f - Densidade Populacional 2: %.2f\n", densidadepop1, densidadepop2);
        break;
        }

        switch(escolhaAtributo2){
        case 1:
        printf("Segundo atributo escolhido: População\n");
        printf("População 1: %lu - População 2: %lu\n", populacao1, populacao2);
        break;
        case 2:
        printf("Segundo atributo escolhido: Área\n");
        printf("Área 1: %.2f - Área 2: %.2f\n", area1, area2);
        break;
        case 3:
        printf("Segundo atributo escolhido: PIB\n");
        printf("PIB 1: %.2f - PIB 2: %.2f\n", pib1, pib2);
        break;
        case 4:
        printf("Segundo atributo escolhido: Pontos Turísticos\n");
        printf("Pontos Turísticos 1: %d - Pontos Turísticos 2: %d\n", pontosturisticos1, pontosturisticos2);
        break;
        case 5:
        printf("Segundo atributo escolhido: Densidade Populacional\n");
        printf("Densidade Populacional 1: %.2f - Densidade Populacional 2: %.2f\n", densidadepop1, densidadepop2);
        break;
        }
        printf("Carta 1 Venceu!\n");
    } else if(resultado1 != resultado2){
        printf("\n%s x %s\n", nomedacidade1, nomedacidade2);
        switch(escolhaAtributo1){
        case 1:
        printf("Primeiro atributo escolhido: População\n");
        printf("População 1: %lu - População 2: %lu\n", populacao1, populacao2);
        break;
        case 2:
        printf("Primeiro atributo escolhido: Área\n");
        printf("Área 1: %.2f - Área 2: %.2f\n", area1, area2);
        break;
        case 3:
        printf("Primeiro atributo escolhido: PIB\n");
        printf("PIB 1: %.2f - PIB 2: %.2f\n", pib1, pib2);
        break;
        case 4:
        printf("Primeiro atributo escolhido: Pontos Turísticos\n");
        printf("Pontos Turísticos 1: %d - Pontos Turísticos 2: %d\n", pontosturisticos1, pontosturisticos2);
        break;
        case 5:
        printf("Primeiro atributo escolhido: Densidade Populacional\n");
        printf("Densidade Populacional 1: %.2f - Densidade Populacional 2: %.2f\n", densidadepop1, densidadepop2);
        break;
        }

        switch(escolhaAtributo2){
        case 1:
        printf("Segundo atributo escolhido: População\n");
        printf("População 1: %lu - População 2: %lu\n", populacao1, populacao2);
        break;
        case 2:
        printf("Segundo atributo escolhido: Área\n");
        printf("Área 1: %.2f - Área 2: %.2f\n", area1, area2);
        break;
        case 3:
        printf("Segundo atributo escolhido: PIB\n");
        printf("PIB 1: %.2f - PIB 2: %.2f\n", pib1, pib2);
        break;
        case 4:
        printf("Segundo atributo escolhido: Pontos Turísticos\n");
        printf("Pontos Turísticos 1: %d - Pontos Turísticos 2: %d\n", pontosturisticos1, pontosturisticos2);
        break;
        case 5:
        printf("Segundo atributo escolhido: Densidade Populacional\n");
        printf("Densidade Populacional 1: %.2f - Densidade Populacional 2: %.2f\n", densidadepop1, densidadepop2);
        break;
        }
        printf("Empatou!\n");
    } else{
        printf("\n%s x %s\n", nomedacidade1, nomedacidade2);
        switch(escolhaAtributo1){
        case 1:
        printf("Primeiro atributo escolhido: População\n");
        printf("População 1: %lu - População 2: %lu\n", populacao1, populacao2);
        break;
        case 2:
        printf("Primeiro atributo escolhido: Área\n");
        printf("Área 1: %.2f - Área 2: %.2f\n", area1, area2);
        break;
        case 3:
        printf("Primeiro atributo escolhido: PIB\n");
        printf("PIB 1: %.2f - PIB 2: %.2f\n", pib1, pib2);
        break;
        case 4:
        printf("Primeiro atributo escolhido: Pontos Turísticos\n");
        printf("Pontos Turísticos 1: %d - Pontos Turísticos 2: %d\n", pontosturisticos1, pontosturisticos2);
        break;
        case 5:
        printf("Primeiro atributo escolhido: Densidade Populacional\n");
        printf("Densidade Populacional 1: %.2f - Densidade Populacional 2: %.2f\n", densidadepop1, densidadepop2);
        break;
        }

        switch(escolhaAtributo2){
        case 1:
        printf("Segundo atributo escolhido: População\n");
        printf("População 1: %lu - População 2: %lu\n", populacao1, populacao2);
        break;
        case 2:
        printf("Segundo atributo escolhido: Área\n");
        printf("Área 1: %.2f - Área 2: %.2f\n", area1, area2);
        break;
        case 3:
        printf("Segundo atributo escolhido: PIB\n");
        printf("PIB 1: %.2f - PIB 2: %.2f\n", pib1, pib2);
        break;
        case 4:
        printf("Segundo atributo escolhido: Pontos Turísticos\n");
        printf("Pontos Turísticos 1: %d - Pontos Turísticos 2: %d\n", pontosturisticos1, pontosturisticos2);
        break;
        case 5:
        printf("Segundo atributo escolhido: Densidade Populacional\n");
        printf("Densidade Populacional 1: %.2f - Densidade Populacional 2: %.2f\n", densidadepop1, densidadepop2);
        break;
        }
        printf("Carta 2 Venceu!\n");
    }

    return 0;
}