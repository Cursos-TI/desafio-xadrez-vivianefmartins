#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída, necessária para funções como printf.

// Define a função 'moverTorre' que recebe um número inteiro 'casas' como argumento.
void moverTorre(int casas){
    // Condição de parada da recursão: executa enquanto 'casas' for maior que 0.
    if(casas > 0){
        // Imprime "Direita" seguido de uma nova linha.
        printf("Direita\n");
        // Chama recursivamente a função 'moverTorre' com 'casas' decrementado em 1.
        // Isso fará com que "Direita" seja impresso 'casas' vezes.
        moverTorre(casas - 1);
    }
    // Fim do bloco if.
}
// Fim da função moverTorre.

// Define a função 'moverRainha' que recebe um número inteiro 'casas' como argumento.
void moverRainha(int casas){
    // Condição de parada da recursão: executa enquanto 'casas' for maior que 0.
    if(casas > 0){
        // Imprime "Esquerda" seguido de uma nova linha.
        printf("Esquerda\n");
        // Chama recursivamente a função 'moverRainha' com 'casas' decrementado em 1.
        // Isso fará com que "Esquerda" seja impresso 'casas' vezes.
        moverRainha(casas - 1);
    }
    // Fim do bloco if.
}
// Fim da função moverRainha.

// Função principal, ponto de entrada do programa.
int main(){

    int i; // Declara uma variável inteira 'i', geralmente usada como contador em loops.
    int limite_vertical = 2; // Declara e inicializa a variável 'limite_vertical' com o valor 2.
    int max_iteracoes = 10; // Declara e inicializa a variável 'max_iteracoes' com o valor 10.
    
    //Mover a Torre 5 casas para direita 
    printf("\n"); // Imprime uma nova linha para formatação da saída.
    printf("--------------------------\n"); // Imprime uma linha separadora.
    printf("--- Movimento da Torre ---\n"); // Imprime o cabeçalho para o movimento da Torre.
    moverTorre(5); // Chama a função 'moverTorre' para simular o movimento da torre 5 casas para a direita.
                   // Isso resultará na impressão de "Direita\n" 5 vezes.

    //move o Bispo 5 casas na diagonal para cima e à direita 
    printf("\n"); // Imprime uma nova linha.
    printf("--------------------------\n"); // Imprime uma linha separadora.
    printf("--- Movimento do Bispo ---\n"); // Imprime o cabeçalho para o movimento do Bispo.
    // Inicia um loop 'for' para simular o movimento vertical do Bispo.
    // 'movimentoVertical' começa em 1 e vai até 5 (enquanto for menor que 6).
    for(int movimentoVertical = 1; movimentoVertical < 6; movimentoVertical++){
        // Inicia um loop 'for' aninhado para simular o movimento horizontal do Bispo.
        // 'movimentoHorizontal' começa em 1. O loop executa UMA VEZ, pois após a primeira iteração,
        // 'movimentoHorizontal' se torna 0, e a condição '0 > 0' é falsa.
        for(int movimentoHorizontal = 1; movimentoHorizontal > 0; movimentoHorizontal--){
            // Imprime "Cima, Direita", simulando um movimento diagonal.
            // Como o loop interno executa uma vez para cada iteração do loop externo,
            // esta linha será impressa 5 vezes.
            printf("Cima, Direita\n");
        }
        // Fim do loop horizontal.
    }
    // Fim do loop vertical.

    //move a Rainha 8 casas para esquerda 
    printf("\n"); // Imprime uma nova linha.
    printf("--------------------------\n"); // Imprime uma linha separadora.
    printf("--- Movimento da Rainha ---\n"); // Imprime o cabeçalho para o movimento da Rainha.
    moverRainha(8); // Chama a função 'moverRainha' para simular o movimento da rainha 8 casas para a esquerda.
                    // Isso resultará na impressão de "Esquerda\n" 8 vezes.

    //move o Cavalo 2 casas para cima e 1 casa para direita 
    printf("\n"); // Imprime uma nova linha.
    printf("---------------------------\n"); // Imprime uma linha separadora.
    printf("--- Movimento do Cavalo ---\n"); // Imprime o cabeçalho para o movimento do Cavalo.
    
    // Inicia um loop 'for' para simular o movimento do Cavalo.
    // 'i' começa em 0 e o loop continuaria até 'i' ser menor que 'max_iteracoes' (10),
    // mas há uma condição de parada ('break') dentro do loop.
    for (i = 0; i < max_iteracoes; i++) {

        // Verifica se 'i' (número de movimentos para cima já feitos) é maior ou igual a 'limite_vertical' (2).
        if (i >= limite_vertical) {
            break; // Se a condição acima for verdadeira, interrompe o loop (sai do 'for').
                   // Isso acontecerá quando 'i' for 2.
        }
        // Fim do bloco if.
        // Imprime "Cima". Esta linha será executada para i=0 e i=1 (2 vezes).
        printf("Cima\n");

    }
    // Fim do loop 'for' para o movimento do Cavalo.
    
    // Após o loop, imprime "Direita" uma vez.
    // Juntando com o loop anterior, o cavalo move "Cima", "Cima", "Direita".
    printf("Direita\n");
    
    
    // Retorna 0 para o sistema operacional, indicando que o programa terminou com sucesso.
    return 0;
}
// Fim da função main.