#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char cartaA[1];
        char cartaB[1];
        char cidadeA[15];
        char cidadeB[15];
        int populacaoA;
        int populacaoB;

    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
printf("Carta A:\n");

              printf("Digite a Primeira Cidade: \n");
              scanf("%s",&cidadeA);

              printf("Digite a Segunda Cidade: \n");
              scanf("%s",&cidadeB);

              printf("Digite a população da 1º Cidade: \n");
              scanf("%d", &populacaoA);

              printf("Digite a população da 2º Cidade: \n");
              scanf("%d", &populacaoB);

printf("A primeira cidade é: %s \n", cidadeA);
              printf("A sua População é:   %d  \n", populacaoA);
             
              printf("A Segunda cidade é:  %s   \n", cidadeB);   
              printf("A sua População e:    %d   \n",populacaoB);



    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }
                if (populacaoA > populacaoB)
                {
                    printf(" A Cidade: %s   Venceu:\n",cidadeA);
                }

                else
                {
                    printf("A Cidade: %s venceu:\n", cidadeB);
                }
                
                
                




    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
