#include <stdio.h>

int main() {

    // ===== DECLARAÇÃO DAS VARIÁVEIS =====
    char cidade1[50], cidade2[50];
    float populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    float densidade1, densidade2;
    float pib_per_capita1, pib_per_capita2;

    int atributo1, atributo2;
    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;
    float soma1, soma2;

    // ===== CADASTRO DAS CARTAS =====
    printf("===== SUPER TRUNFO - DESAFIO FINAL =====\n");
    printf("Preencha as informações da PRIMEIRA carta:\n");
    printf("----------------------------------------\n");
    printf("Nome da cidade: ");
    scanf(" %s", cidade1);
    printf("População: ");
    scanf("%f", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões R$): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos1);

    printf("\nPreencha as informações da SEGUNDA carta:\n");
    printf("----------------------------------------\n");
    printf("Nome da cidade: ");
    scanf(" %s", cidade2);
    printf("População: ");
    scanf("%f", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões R$): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // ===== CÁLCULOS =====
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    // ===== MENU DE ATRIBUTOS =====
    printf("\n----------------------------------------\n");
    printf("Escolha o PRIMEIRO atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB per Capita\n");
    printf("----------------------------------------\n");
    printf("Digite sua opção: ");
    scanf("%d", &atributo1);

    // ===== MENU DINÂMICO (remove o primeiro atributo) =====
    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");

    for (int i = 1; i <= 6; i++) {
        if (i == atributo1) continue; // não repete o mesmo atributo
        switch (i) {
            case 1: printf("1 - População\n"); break;
            case 2: printf("2 - Área\n"); break;
            case 3: printf("3 - PIB\n"); break;
            case 4: printf("4 - Pontos Turísticos\n"); break;
            case 5: printf("5 - Densidade Demográfica\n"); break;
            case 6: printf("6 - PIB per Capita\n"); break;
        }
    }
    printf("----------------------------------------\n");
    printf("Digite sua opção: ");
    scanf("%d", &atributo2);

    // Verificação de duplicidade
    if (atributo1 == atributo2) {
        printf("\n❌ Erro: Você escolheu o mesmo atributo duas vezes. Reinicie o jogo.\n");
        return 0;
    }

    // ===== COMPARAÇÕES =====
    printf("\n===== RESULTADO DA COMPARAÇÃO =====\n\n");
    printf("%s (Carta 1)  vs  %s (Carta 2)\n\n", cidade1, cidade2);

    // Função auxiliar via switch — Primeiro atributo
    switch (atributo1) {
        case 1:
            printf("Atributo 1: População\n");
            valor1_carta1 = populacao1;
            valor1_carta2 = populacao2;
            break;
        case 2:
            printf("Atributo 1: Área (km²)\n");
            valor1_carta1 = area1;
            valor1_carta2 = area2;
            break;
        case 3:
            printf("Atributo 1: PIB (bi R$)\n");
            valor1_carta1 = pib1;
            valor1_carta2 = pib2;
            break;
        case 4:
            printf("Atributo 1: Pontos Turísticos\n");
            valor1_carta1 = pontos1;
            valor1_carta2 = pontos2;
            break;
        case 5:
            printf("Atributo 1: Densidade Demográfica (menor vence)\n");
            valor1_carta1 = densidade1;
            valor1_carta2 = densidade2;
            break;
        case 6:
            printf("Atributo 1: PIB per Capita\n");
            valor1_carta1 = pib_per_capita1;
            valor1_carta2 = pib_per_capita2;
            break;
        default:
            printf("Opção inválida!\n");
            return 0;
    }

    // Segundo atributo
    switch (atributo2) {
        case 1:
            printf("Atributo 2: População\n");
            valor2_carta1 = populacao1;
            valor2_carta2 = populacao2;
            break;
        case 2:
            printf("Atributo 2: Área (km²)\n");
            valor2_carta1 = area1;
            valor2_carta2 = area2;
            break;
        case 3:
            printf("Atributo 2: PIB (bi R$)\n");
            valor2_carta1 = pib1;
            valor2_carta2 = pib2;
            break;
        case 4:
            printf("Atributo 2: Pontos Turísticos\n");
            valor2_carta1 = pontos1;
            valor2_carta2 = pontos2;
            break;
        case 5:
            printf("Atributo 2: Densidade Demográfica (menor vence)\n");
            valor2_carta1 = densidade1;
            valor2_carta2 = densidade2;
            break;
        case 6:
            printf("Atributo 2: PIB per Capita\n");
            valor2_carta1 = pib_per_capita1;
            valor2_carta2 = pib_per_capita2;
            break;
        default:
            printf("Opção inválida!\n");
            return 0;
    }

    // ===== EXIBIÇÃO DOS VALORES =====
    printf("\n%s - Atributo 1: %.2f | Atributo 2: %.2f\n", cidade1, valor1_carta1, valor2_carta1);
    printf("%s - Atributo 1: %.2f | Atributo 2: %.2f\n", cidade2, valor1_carta2, valor2_carta2);

    // ===== COMPARAÇÃO INDIVIDUAL =====
    // Regra especial para densidade: menor vence
    int inverso1 = (atributo1 == 5); 
    int inverso2 = (atributo2 == 5);

    float pontosCarta1 = 0, pontosCarta2 = 0;

    pontosCarta1 += (!inverso1) ? (valor1_carta1 > valor1_carta2) : (valor1_carta1 < valor1_carta2);
    pontosCarta2 += (!inverso1) ? (valor1_carta2 > valor1_carta1) : (valor1_carta2 < valor1_carta1);

    pontosCarta1 += (!inverso2) ? (valor2_carta1 > valor2_carta2) : (valor2_carta1 < valor2_carta2);
    pontosCarta2 += (!inverso2) ? (valor2_carta2 > valor2_carta1) : (valor2_carta2 < valor2_carta1);

    // ===== SOMA FINAL =====
    soma1 = valor1_carta1 + valor2_carta1;
    soma2 = valor1_carta2 + valor2_carta2;

    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", cidade1, soma1);
    printf("%s: %.2f\n", cidade2, soma2);

    // ===== RESULTADO FINAL =====
    printf("\n🏆 RESULTADO FINAL: ");
    if (soma1 > soma2)
        printf("%s venceu!\n", cidade1);
    else if (soma2 > soma1)
        printf("%s venceu!\n", cidade2);
    else
        printf("Empate!\n");

    printf("\n========================================\n");
    printf("Fim da rodada. Obrigado por jogar!\n");

    return 0;
}
