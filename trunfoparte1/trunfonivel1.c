//•	Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char//
 
//•	Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)//
 
//•	Nome da Cidade: O nome da cidade. Tipo: char[] (string)//
 
//•	População: O número de habitantes da cidade. Tipo: int//
 
//•	Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
 
//•	PIB: O Produto Interno Bruto da cidade. Tipo: float
 
//•	Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int

//JOGO SUPER TRUNFO



#include <stdio.h>

int main() {

    char letra1, letra2;
    int populacao1, populacao2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    float area1, area2, pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;

//PRIMEIRA CARTA

    printf("JOGO SUPER TRUNFO - CIDADES BRASILEIRAS\n");
    printf("preencha as informações da primeira carta:\n");
    printf("-------------------------\n");

    printf("Digite a letra do estado de A a H da primeira carta:\n");
    scanf(" %c", &letra1);

    printf("Digite a letra escolhida mais um numero de 01 a 04:\n");
    scanf(" %s", &codigo1);

    printf("Digite o nome da cidade sem espaço:\n");
    scanf(" %s", &cidade1);

    printf("Digite o numero de habitantes:\n");
    scanf(" %d", &populacao1);

    printf("Digite a área em km²:\n");
    scanf(" %f", &area1);

    printf("Digite o PIB:\n");
    scanf(" %f", &pib1);

    printf("Digite o número de pontos turísticos:\n");
    scanf(" %d", &pontos_turisticos1);

//SEGUNDA CARTA
    printf("preencha as informações da segunda carta:\n");
    printf("-------------------------\n");

    printf("Digite a letra do estado de A a H da primeira carta:\n");
    scanf(" %c", &letra2);

    printf("Digite a letra escolhida mais um numero de 01 a 04:\n");
    scanf(" %s", &codigo2);

    printf("Digite o nome da cidade sem espaço:\n");
    scanf(" %s", &cidade2);

    printf("Digite o numero de habitantes:\n");
    scanf(" %d", &populacao2);

    printf("Digite a área em km²:\n");
    scanf(" %f", &area2);

    printf("Digite o PIB:\n");
    scanf(" %f", &pib2);

    printf("Digite o número de pontos turísticos:\n");
    scanf(" %d", &pontos_turisticos2);
    
    printf("INFORMAÇÕES DAS DUAS CARTAS:\n");
    printf("-------------------------\n");
    printf("CARTA 1:\n");
//info carta 1  
    printf("Letra da carta: %c\n", letra1);
    printf("Codigo da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área em km²: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos1);

    printf("-------------------------\n");
    printf("CARTA 2:\n");
//info carta 2
    printf("Letra da carta: %c\n", letra2);
    printf("Codigo da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área em km²: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d \n", pontos_turisticos2);

    return 0;
}
