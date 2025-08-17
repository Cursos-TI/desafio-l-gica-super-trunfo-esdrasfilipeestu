#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado1[2], estado2[2], codigoCarta1[3], codigoCarta2[3], nomeCidade1[30], nomeCidade2[30];
    int populacaoCidade1, populacaoCidade2, pontosTuristicosCidade1, pontosTuristicosCidade2;
    float areaCidade1, areaCidade2, pibCidade1, pibCidade2;
    float densidadePopulacional1, densidadePopulacional2, pibPerCapitaCidade1, pibPerCapitaCidade2, inversoDensidadePopulacional1, inversoDensidadePopulacional2;
    float superPoder1, superPoder2;
    int opcaoMenu, opcaoMenu2;
    float valorAtributoSelecionado1, valorAtributoSelecionado2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Informe o Estado da Carta 1 \n");
    scanf("%s", estado1);

    printf("Informe o Código da Carta 1 \n");
    scanf("%s", codigoCarta1);

    printf("Informe o Nome da Cidade da Carta 1 \n");
    getchar(); // consome o \n que ficou no buffer
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0;

    printf("Informe a População da Cidade 1: \n");
    scanf("%d", &populacaoCidade1);

    printf("Informe a Área em KM² da Cidade 1: \n");
    scanf("%f", &areaCidade1);

    printf("Informe o PIB da Cidade 1: \n");
    scanf("%f", &pibCidade1);

    printf("Informe o Número de Pontos Turísticos da Cidade 1: \n");
    scanf("%d", &pontosTuristicosCidade1);

    printf("-------------------------------------------------- \n");

    printf("Informe o Estado da Carta 2: \n");
    scanf("%s", estado2);

    printf("Informe o Código da Carta 2: \n");
    scanf("%s", codigoCarta2);

    printf("Informe o Nome da Cidade da Carta 2 \n");
    getchar(); // consome o \n que ficou no buffer
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = '\0';

    printf("Informe a População da Cidade 2: \n");
    scanf("%d", &populacaoCidade2);

    printf("Informe a Área em KM² da Cidade 2: \n");
    scanf("%f", &areaCidade2);

    printf("Informe o PIB da Cidade 2: \n");
    scanf("%f", &pibCidade2);

    printf("Informe o Número de Pontos Turísticos da Cidade 2: \n");
    scanf("%d", &pontosTuristicosCidade2);

    densidadePopulacional1 = populacaoCidade1 / areaCidade1;
    densidadePopulacional2 = populacaoCidade2 / areaCidade2;

    inversoDensidadePopulacional1 = areaCidade1 / populacaoCidade1;
    inversoDensidadePopulacional2 = areaCidade2 / populacaoCidade2;

    pibPerCapitaCidade1 = pibCidade1 / populacaoCidade1;
    pibPerCapitaCidade2 = pibCidade2 / populacaoCidade2;

    superPoder1 = (float) populacaoCidade1 + areaCidade1 + pontosTuristicosCidade1 + pibPerCapitaCidade1 + inversoDensidadePopulacional1;
    superPoder2 = (float) populacaoCidade2 + areaCidade2 + pontosTuristicosCidade2 + pibPerCapitaCidade2 + inversoDensidadePopulacional2;

     // Iniciando Menu Interativo:
    printf("------------------------------------------------------------------- \n");
    printf(" Selecione Qual o Primeiro Atributo Deseja Comparar \n");
    printf("------------------------------------------------------------------- \n");
    printf("1 - População \n");
    printf("2 - Área \n");
    printf("3 - PIB \n");
    printf("4 - Número de Pontos Turísticos \n");
    printf("5 - Densidade Demográfica \n");
    scanf("%d", &opcaoMenu);

    if (opcaoMenu > 5 || opcaoMenu <= 0) {
        printf("Opção Selecionada é Inválida! \n");
        return 0;
    }

    printf("------------------------------------------------------------------- \n");
    printf(" Selecione Qual o Segundo Atributo Deseja Comparar \n");
    printf("------------------------------------------------------------------- \n");
    if (opcaoMenu != 1)
        printf("1 - População \n");
    if (opcaoMenu != 2)
        printf("2 - Área \n");
    if (opcaoMenu != 3)
        printf("3 - PIB \n");
    if (opcaoMenu != 4)
        printf("4 - Número de Pontos Turísticos \n");
    if (opcaoMenu != 5)
        printf("5 - Densidade Demográfica \n");
    scanf("%d", &opcaoMenu2);

    if (opcaoMenu2 > 5 || opcaoMenu2 <= 0) {
        printf("Opção Selecionada é Inválida! \n");
        return 0;
    }
   
    if (opcaoMenu == opcaoMenu2) {
        printf("Opção de Comparação de Atribuitos São Iguais! \n");
    } else {
        printf("---------------------------------------------------------------- \n");
        printf(" Comparação Atributo 1 \n");
        printf("---------------------------------------------------------------- \n \n");
        // Comparação do Atributo 1
        switch (opcaoMenu) {
            case 1:
                printf("População da Cidade %s: %d \n", nomeCidade1, populacaoCidade1);
                printf("População da Cidade %s: %d \n", nomeCidade2, populacaoCidade2);
                if (populacaoCidade1 == populacaoCidade2) {
                    printf("Empate Entre as Cidade %s e %s \n", nomeCidade1, nomeCidade2);
                } else {
                    printf("Cidade Ganhadora %s: \n", (populacaoCidade1 > populacaoCidade2 ? nomeCidade1 : nomeCidade2));
                }
            break;

            case 2:
                printf("Área da Cidade %s: %f \n", nomeCidade1, areaCidade1);
                printf("Área da Cidade %s: %f \n", nomeCidade2 , areaCidade2);
                if (areaCidade1 == areaCidade2) {
                    printf("Empate Entre as Cidade %s e %s \n", nomeCidade1, nomeCidade2);
                } else {
                    printf("Cidade Ganhadora %s: \n", (areaCidade1 > areaCidade2 ? nomeCidade1 : nomeCidade2));
                }
            break;

            case 3:
                printf("PIB da Cidade %s: %f \n", nomeCidade1, pibCidade1);
                printf("PIB da Cidade %s: %f \n", nomeCidade2, pibCidade2);
                if (pibCidade1 == pibCidade2) {
                    printf("Empate Entre as Cidade %s e %s \n", nomeCidade1, nomeCidade2);
                } else {
                    printf("Cidade Ganhadora %s: \n", (pibCidade1 > pibCidade2 ? nomeCidade1 : nomeCidade2));
                }
            break;

            case 4:
                printf("Número de Pontos Turísticos da Cidade %s: %f \n", nomeCidade1, pontosTuristicosCidade1);
                printf("Número de Pontos Turísticos da Cidade %s: %f \n", nomeCidade2, pontosTuristicosCidade2);
                if (pontosTuristicosCidade1 == pontosTuristicosCidade2) {
                    printf("Empate Entre as Cidade %s e %s \n", nomeCidade1, nomeCidade2);
                } else {
                    printf("Cidade Ganhadora %s: \n", (pontosTuristicosCidade1 > pontosTuristicosCidade2 ? nomeCidade1 : nomeCidade2));
                }
            break;

            case 5:
                printf("Densidade Demográfica da Cidade %s: %f \n", nomeCidade1, densidadePopulacional1);
                printf("Densidade Demográfica da Cidade %s: %f \n", nomeCidade2, densidadePopulacional2);
                if (densidadePopulacional1 == densidadePopulacional2) {
                    printf("Empate Entre as Cidade %s e %s \n", nomeCidade1, nomeCidade2);
                } else {
                    printf("Cidade Ganhadora %s: \n", (densidadePopulacional1 < densidadePopulacional2 ? nomeCidade1 : nomeCidade2));
                }
            break;
        
            default:
                printf("Seleção de Menus Inválidas!");
                break;
        }

        printf("---------------------------------------------------------------- \n");
        printf(" Comparação Atributo 2 \n");
        printf("---------------------------------------------------------------- \n \n");
        // Comparação do Atributo 2
        switch (opcaoMenu2) {
            case 1:
                printf("População da Cidade %s: %d \n", nomeCidade1, populacaoCidade1);
                printf("População da Cidade %s: %d \n", nomeCidade2, populacaoCidade2);
                if (populacaoCidade1 == populacaoCidade2) {
                    printf("Empate Entre as Cidade %s e %s \n", nomeCidade1, nomeCidade2);
                } else {
                    printf("Cidade Ganhadora %s: \n", (populacaoCidade1 > populacaoCidade2 ? nomeCidade1 : nomeCidade2));
                }
            break;

            case 2:
                printf("Área da Cidade %s: %f \n", nomeCidade1, areaCidade1);
                printf("Área da Cidade %s: %f \n", nomeCidade2 , areaCidade2);
                if (areaCidade1 == areaCidade2) {
                    printf("Empate Entre as Cidade %s e %s \n", nomeCidade1, nomeCidade2);
                } else {
                    printf("Cidade Ganhadora %s: \n", (areaCidade1 > areaCidade2 ? nomeCidade1 : nomeCidade2));
                }
            break;

            case 3:
                printf("PIB da Cidade %s: %f \n", nomeCidade1, pibCidade1);
                printf("PIB da Cidade %s: %f \n", nomeCidade2, pibCidade2);
                if (pibCidade1 == pibCidade2) {
                    printf("Empate Entre as Cidade %s e %s \n", nomeCidade1, nomeCidade2);
                } else {
                    printf("Cidade Ganhadora %s: \n", (pibCidade1 > pibCidade2 ? nomeCidade1 : nomeCidade2));
                }
            break;

            case 4:
                printf("Número de Pontos Turísticos da Cidade %s: %f \n", nomeCidade1, pontosTuristicosCidade1);
                printf("Número de Pontos Turísticos da Cidade %s: %f \n", nomeCidade2, pontosTuristicosCidade2);
                if (pontosTuristicosCidade1 == pontosTuristicosCidade2) {
                    printf("Empate Entre as Cidade %s e %s \n", nomeCidade1, nomeCidade2);
                } else {
                    printf("Cidade Ganhadora %s: \n", (pontosTuristicosCidade1 > pontosTuristicosCidade2 ? nomeCidade1 : nomeCidade2));
                }
            break;

            case 5:
                printf("Densidade Demográfica da Cidade %s: %f \n", nomeCidade1, densidadePopulacional1);
                printf("Densidade Demográfica da Cidade %s: %f \n", nomeCidade2, densidadePopulacional2);
                if (densidadePopulacional1 == densidadePopulacional2) {
                    printf("Empate Entre as Cidade %s e %s \n", nomeCidade1, nomeCidade2);
                } else {
                    printf("Cidade Ganhadora %s: \n", (densidadePopulacional1 < densidadePopulacional2 ? nomeCidade1 : nomeCidade2));
                }
            break;
        
            default:
                printf("Seleção de Menus Inválidas!");
                break;
        }

        printf("---------------------------------------------------------------- \n");
        printf(" Comparação Soma dos Atributos \n \n");

        // Comparar a soma dos atributos
        if (superPoder1 == superPoder2) {
            printf("Deu Empate, Ambas as Cartas Possuem o mesmo Valor");
        } else {
            printf("Carta com Maior Soma Dos Atributos: %s \n", (superPoder1 > superPoder2 ? "Carta 1" : "Carta 2"));
        }

        printf("\n---------------------------------------------------------------- \n \n");
    }


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("-------------------------------------------------------- \n");
    printf("---- Carta 1 ---- \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigoCarta1);
    printf("Nome da Cidade: %s \n", nomeCidade1);
    printf("População: %d \n", populacaoCidade1);
    printf("Área: %f \n", areaCidade1);
    printf("PIB: %f \n", pibCidade1);
    printf("Número de Pontos Turísticos: %d \n", pontosTuristicosCidade1);
    printf("Densidade Populacional: %f \n", densidadePopulacional1);
    printf("PIB per Capita: %f \n", pibPerCapitaCidade1);
    printf("Super Poder: %f \n", superPoder1);

    printf("-------------------------------------------------------- \n");
    printf("---- Carta 2 ---- \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigoCarta2);
    printf("Nome da Cidade: %s \n", nomeCidade2);
    printf("População: %d \n", populacaoCidade2);
    printf("Área: %f \n", areaCidade2);
    printf("PIB: %f \n", pibCidade2);
    printf("Número de Pontos Turísticos: %d \n", pontosTuristicosCidade2);
    printf("Densidade Populacional: %f \n", densidadePopulacional2);
    printf("PIB per Capita: %f \n", pibPerCapitaCidade2);
    printf("Super Poder: %f \n", superPoder2);

    return 0;
}