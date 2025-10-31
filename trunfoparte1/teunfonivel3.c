//Calcular a Densidade Populacional: Divida a população da cidade pela sua área. O resultado será a densidade populacional, 
//que representa o número de habitantes por quilômetro quadrado. Armazene esse valor em uma variável do tipo float.
 
//Calcular o PIB per Capita: Divida o PIB da cidade pela sua população. O resultado será o PIB per capita, que indica a riqueza média por pessoa na cidade. Armazene esse valor em uma variável do tipo float.
 
//Exibir os Resultados: Além de exibir as informações lidas do usuário (como no nível básico), 
//seu programa também deve exibir a densidade populacional e o PIB per capita calculados para cada cidade. Formate os valores de ponto flutuante com duas casas decimais.

//JOGO SUPER TRUNFO



#include <stdio.h>

int main() {

    char letra1, letra2;
    int populacao1, populacao2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    float area1, area2, pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;

    //variaveis calculadas
    float densidade1, densidade2;
    float pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;


//PRIMEIRA CARTA

    printf("JOGO SUPER TRUNFO - CIDADES BRASILEIRAS\n");
    printf("preencha as informações da primeira carta:\n");
    printf("-------------------------\n");

    printf("Digite a letra do estado de A a H da primeira carta:\n");
    scanf(" %c", &letra1);

    printf("Digite a letra escolhida mais um numero de 01 a 04(ex: A01):\n");
    scanf(" %s", &codigo1);

    printf("Digite o nome da (cidade sem espaço):\n");
    scanf(" %s", &cidade1);

    printf("Digite o numero de habitantes:\n");
    scanf(" %d", &populacao1);

    printf("Digite a área da cidade em km² (ex: 450.5):\n");
    scanf(" %f", &area1);

    printf("Digite o PIB(em bilhões de reais, ex: 2.5):\n");
    scanf(" %f", &pib1);

    printf("Digite o número de pontos turísticos:\n");
    scanf(" %d", &pontos_turisticos1);

//SEGUNDA CARTA
    printf("preencha as informações da segunda carta:\n");
    printf("-------------------------\n");

    printf("Digite a letra do estado de A a H da primeira carta:\n");
    scanf(" %c", &letra2);

    printf("Digite a letra escolhida mais um numero de 01 a 04(ex: B01):\n");
    scanf(" %s", &codigo2);

    printf("Digite o nome da (cidade sem espaço):\n");
    scanf(" %s", &cidade2);

    printf("Digite o numero de habitantes:\n");
    scanf(" %d", &populacao2);

    printf("Digite a área da cidade em km² (ex: 450.5):\n");
    scanf(" %f", &area2);

    printf("Digite o PIB(em bilhões de reais, ex: 2.5):\n");
    scanf(" %f", &pib2);

    printf("Digite o número de pontos turísticos:\n");
    scanf(" %d", &pontos_turisticos2);

    //CALCULOS ------------------------------

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    //SUPER PODER = soma dos outros atributos normalizados
    super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1 / densidade1);
    super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1 / densidade2);
    
    printf("INFORMAÇÕES DAS DUAS CARTAS:\n");
    printf("-------------------------\n");
    printf("CARTA 1:\n");
//info carta 1  
    printf("Letra da carta: %c\n", letra1);
    printf("Codigo da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População exata: %d\n", populacao1);
    printf("Área em km² em bilhoes: %.2f\n", area1);
    printf("PIB em bilhoes: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade1);
    printf("PIB per Capita: %.2f\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);


    printf("-------------------------\n");
    printf("CARTA 2:\n");
//info carta 2
    printf("Letra da carta: %c\n", letra2);
    printf("Codigo da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área em km² em bilhoes: %.2f\n", area2);
    printf("PIB em bilhoes: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d \n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

//resultado
    printf("-------------------------\n");
    printf("RESULTADO DA COMPARAÇÃO ENTRE AS DUAS CARTAS:\n");
    printf("1 simboliza a primeira carta ganhou, 0 simboliza a segunda carta ganhou.\n");

    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade populacional (menor vence): %d\n", densidade1 < densidade2);
    printf("PIB per Capita: %d\n", pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: %d\n", super_poder1 > super_poder2);


    return 0;
}
