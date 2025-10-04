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
    scanf("%s", &codigo1);

    //Adicionando o nome da Cidade

    printf("Digite o Nome da Cidade: ");
    scanf("%s", &nomedacidade1);

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
    scanf("%s", &codigo2);

    //Adicionando o nome da Cidade
    printf("Digite o Nome da Cidade: ");
    scanf("%s", &nomedacidade2);

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


    //Utilizando IF-ELSE para calcular o atributo de população das 2 cartas e definir a vencedora

    if (populacao1 > populacao2){
        printf("\nComparação das cartas (Atributo: População):\n");
        printf("\nCarta 1 - %c: %lu", estado1[0], populacao1);
        printf("\nCarta 2 - %c: %lu", estado2[0], populacao2);
        printf("\nResultado: Carta %c venceu\n", estado1[0]);
    }
        else{
            printf("\nComparação das cartas (Atributo: População):\n");
            printf("\nCarta 1 - %c: %lu", estado1[0], populacao1);
            printf("\nCarta 2 - %c: %lu", estado2[0], populacao2);
            printf("\nResultado: Carta %c venceu!\n", estado2[0]);
        }

    return 0;
}