#include <stdio.h>

int main() {
    int populacao1 = 0, populacao2 = 0;
    float area1 = 0.0, area2 = 0.0;
    float pib1 = 0.0, pib2 = 0.0;
    int pontos_turisticos1 = 0, pontos_turisticos2 = 0;
    int pontoscarta1 = 0, pontoscarta2 = 0;
    char estado1 = 'A', estado2 = 'A';
    int opcao;

    // Cadastro da primeira cidade (Carta 1)
    printf("\n==== Cadastro da Cidade 1 ====\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1); // Ler estado como caractere
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cadastro da segunda cidade (Carta 2)
    printf("\n==== Cadastro da Cidade 2 ====\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2); // Ler estado como caractere
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // Menu principal
    printf("\nMenu Principal\n");
    printf("1. Comparar Cartas\n");
    printf("2. Sair do Jogo\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    // Switch para gerenciar as opções
    switch (opcao) {
        case 1:
            // Comparação das cartas
            if (populacao1 > populacao2) {
                pontoscarta1++;
                printf("Carta 1 ganhou 1 ponto por maior populacao!\n");
            } else if (populacao2 > populacao1) {
                pontoscarta2++;
                printf("Carta 2 ganhou 1 ponto por maior populacao!\n");
            }

            if (area1 > area2) {
                pontoscarta1++;
                printf("Carta 1 ganhou 1 ponto por maior area!\n");
            } else if (area2 > area1) {
                pontoscarta2++;
                printf("Carta 2 ganhou 1 ponto por maior area!\n");
            }

            if (pib1 > pib2) {
                pontoscarta1++;
                printf("Carta 1 ganhou 1 ponto por maior PIB!\n");
            } else if (pib2 > pib1) {
                pontoscarta2++;
                printf("Carta 2 ganhou 1 ponto por maior PIB!\n");
            }

            if (pontos_turisticos1 > pontos_turisticos2) {
                pontoscarta1++;
                printf("Carta 1 ganhou 1 ponto por mais pontos turisticos!\n");
            } else if (pontos_turisticos2 > pontos_turisticos1) {
                pontoscarta2++;
                printf("Carta 2 ganhou 1 ponto por mais pontos turisticos!\n");
            }

            if (estado1 > estado2) {
                pontoscarta1++;
                printf("Carta 1 ganhou 1 ponto pelo estado maior!\n");
            } else if (estado2 > estado1) {
                pontoscarta2++;
                printf("Carta 2 ganhou 1 ponto pelo estado maior!\n");
            }

            // Exibindo o resultado final
            if (pontoscarta1 > pontoscarta2) {
                printf("\nCarta 1 venceu com %d pontos!\n", pontoscarta1);
            } else if (pontoscarta2 > pontoscarta1) {
                printf("\nCarta 2 venceu com %d pontos!\n", pontoscarta2);
            } else {
                printf("\nEmpate!\n");
            }
            break;

        case 2:
            printf("\nSaindo do jogo...\n");
            break;

        default:
            printf("\nOpcao invalida! Tente novamente.\n");
            break;
    }

    return 0;
}
