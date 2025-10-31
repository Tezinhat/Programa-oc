#include <stdio.h>

int main() {

    char letra1, letra2;
    int populacao1, populacao2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    float area1, area2, pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;

    // Variáveis calculadas
    float densidade1, densidade2;
    float pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;

    // ===== CADASTRO DAS CARTAS =====
    printf("JOGO SUPER TRUNFO - CIDADES BRASILEIRAS\n");
    printf("Preencha as informações da PRIMEIRA carta:\n");
    printf("----------------------------------------\n");

    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &letra1);

    printf("Digite o código da carta (ex: A01): ");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade (sem espaço): ");
    scanf(" %s", cidade1);

    printf("Digite o número de habitantes: ");
    scanf(" %d", &populacao1);

    printf("Digite a área da cidade em km²: ");
    scanf(" %f", &area1);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf(" %f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontos_turisticos1);

    // ===== SEGUNDA CARTA =====
    printf("\nPreencha as informações da SEGUNDA carta:\n");
    printf("----------------------------------------\n");

    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &letra2);

    printf("Digite o código da carta (ex: B01): ");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade (sem espaço): ");
    scanf(" %s", cidade2);

    printf("Digite o número de habitantes: ");
    scanf(" %d", &populacao2);

    printf("Digite a área da cidade em km²: ");
    scanf(" %f", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf(" %f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontos_turisticos2);

    // ===== CÁLCULOS =====
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1 / densidade1);
    super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1 / densidade2);

    // ===== MENU INTERATIVO =====
    int opcao;
    printf("\n----------------------------------------\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("8 - Comparar TODOS os atributos\n");
    printf("----------------------------------------\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    printf("\n--- RESULTADO DA COMPARAÇÃO ---\n");
    printf("Comparando %s (Carta 1) x %s (Carta 2)\n\n", cidade1, cidade2);

    // ===== LÓGICA DE COMPARAÇÃO =====
    int vitorias1 = 0, vitorias2 = 0;

    switch (opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %d habitantes | %s: %d habitantes\n", cidade1, populacao1, cidade2, populacao2);
            if (populacao1 > populacao2) printf("Resultado: %s venceu!\n", cidade1);
            else if (populacao1 < populacao2) printf("Resultado: %s venceu!\n", cidade2);
            else printf("Resultado: Empate!\n");
            break;

        case 2:
            printf("Atributo: Área (km²)\n");
            printf("%s: %.2f | %s: %.2f\n", cidade1, area1, cidade2, area2);
            if (area1 > area2) printf("Resultado: %s venceu!\n", cidade1);
            else if (area1 < area2) printf("Resultado: %s venceu!\n", cidade2);
            else printf("Resultado: Empate!\n");
            break;

        case 3:
            printf("Atributo: PIB (bilhões de R$)\n");
            printf("%s: %.2f | %s: %.2f\n", cidade1, pib1, cidade2, pib2);
            if (pib1 > pib2) printf("Resultado: %s venceu!\n", cidade1);
            else if (pib1 < pib2) printf("Resultado: %s venceu!\n", cidade2);
            else printf("Resultado: Empate!\n");
            break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d | %s: %d\n", cidade1, pontos_turisticos1, cidade2, pontos_turisticos2);
            if (pontos_turisticos1 > pontos_turisticos2) printf("Resultado: %s venceu!\n", cidade1);
            else if (pontos_turisticos1 < pontos_turisticos2) printf("Resultado: %s venceu!\n", cidade2);
            else printf("Resultado: Empate!\n");
            break;

        case 5:
            printf("Atributo: Densidade Demográfica (hab/km²)\n");
            printf("%s: %.2f | %s: %.2f\n", cidade1, densidade1, cidade2, densidade2);
            if (densidade1 < densidade2) printf("Resultado: %s venceu (menor densidade)!\n", cidade1);
            else if (densidade1 > densidade2) printf("Resultado: %s venceu (menor densidade)!\n", cidade2);
            else printf("Resultado: Empate!\n");
            break;

        case 6:
            printf("Atributo: PIB per Capita\n");
            printf("%s: %.2f | %s: %.2f\n", cidade1, pib_per_capita1, cidade2, pib_per_capita2);
            if (pib_per_capita1 > pib_per_capita2) printf("Resultado: %s venceu!\n", cidade1);
            else if (pib_per_capita1 < pib_per_capita2) printf("Resultado: %s venceu!\n", cidade2);
            else printf("Resultado: Empate!\n");
            break;

        case 7:
            printf("Atributo: Super Poder\n");
            printf("%s: %.2f | %s: %.2f\n", cidade1, super_poder1, cidade2, super_poder2);
            if (super_poder1 > super_poder2) printf("Resultado: %s venceu!\n", cidade1);
            else if (super_poder1 < super_poder2) printf("Resultado: %s venceu!\n", cidade2);
            else printf("Resultado: Empate!\n");
            break;

        case 8:
            printf("🧾 Comparando TODOS os atributos:\n\n");

            // População
            if (populacao1 > populacao2) { printf("População: %s venceu!\n", cidade1); vitorias1++; }
            else if (populacao1 < populacao2) { printf("População: %s venceu!\n", cidade2); vitorias2++; }
            else printf("População: Empate!\n");

            // Área
            if (area1 > area2) { printf("Área: %s venceu!\n", cidade1); vitorias1++; }
            else if (area1 < area2) { printf("Área: %s venceu!\n", cidade2); vitorias2++; }
            else printf("Área: Empate!\n");

            // PIB
            if (pib1 > pib2) { printf("PIB: %s venceu!\n", cidade1); vitorias1++; }
            else if (pib1 < pib2) { printf("PIB: %s venceu!\n", cidade2); vitorias2++; }
            else printf("PIB: Empate!\n");

            // Pontos turísticos
            if (pontos_turisticos1 > pontos_turisticos2) { printf("Pontos Turísticos: %s venceu!\n", cidade1); vitorias1++; }
            else if (pontos_turisticos1 < pontos_turisticos2) { printf("Pontos Turísticos: %s venceu!\n", cidade2); vitorias2++; }
            else printf("Pontos Turísticos: Empate!\n");

            // Densidade (menor vence)
            if (densidade1 < densidade2) { printf("Densidade: %s venceu (menor densidade)!\n", cidade1); vitorias1++; }
            else if (densidade1 > densidade2) { printf("Densidade: %s venceu (menor densidade)!\n", cidade2); vitorias2++; }
            else printf("Densidade: Empate!\n");

            // PIB per Capita
            if (pib_per_capita1 > pib_per_capita2) { printf("PIB per Capita: %s venceu!\n", cidade1); vitorias1++; }
            else if (pib_per_capita1 < pib_per_capita2) { printf("PIB per Capita: %s venceu!\n", cidade2); vitorias2++; }
            else printf("PIB per Capita: Empate!\n");

            // Super Poder
            if (super_poder1 > super_poder2) { printf("Super Poder: %s venceu!\n", cidade1); vitorias1++; }
            else if (super_poder1 < super_poder2) { printf("Super Poder: %s venceu!\n", cidade2); vitorias2++; }
            else printf("Super Poder: Empate!\n");

            printf("\n🏆 Resultado Final: ");
            if (vitorias1 > vitorias2)
                printf("%s venceu o duelo geral (%d a %d)!\n", cidade1, vitorias1, vitorias2);
            else if (vitorias2 > vitorias1)
                printf("%s venceu o duelo geral (%d a %d)!\n", cidade2, vitorias2, vitorias1);
            else
                printf("Empate geral! (%d a %d)\n", vitorias1, vitorias2);
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
            break;
    }

    printf("\n----------------------------------------\n");
    printf("Fim da rodada!\n");

    return 0;
}
