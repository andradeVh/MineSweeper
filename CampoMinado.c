#include <stdio.h>

#define TAMANHO_MAXIMO 100

#include <stdlib.h>
#include <time.h>

char tabuleiro[TAMANHO_MAXIMO][TAMANHO_MAXIMO];
char tabuleiroMinas[TAMANHO_MAXIMO][TAMANHO_MAXIMO];
int altura, largura;

void popularTabuleiro(int tamanho);

void gerarMinas();

void gameLoop();

int main()
{
    
    gameloop();
    return 0;
}

void popularTabuleiro(int tamanho)
{
    altura = largura = tamanho;

    for (int i = 0; i < altura; i++)
    {
        for (int j = 0; j < largura; j++)
        {
            tabuleiro[i][j] = '*';
            tabuleiroMinas[i][j] = '*';
        }
    }
}

void displayTabuleiro()
{

    for (int i = 0; i < altura; i++)
    {
        for (int j = 0; j < largura; j++)
        {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

void gerarMinas()
{
    int area = altura * largura;

    // pode variar dependendo da dificuldade.
    int qtdMinas = area / 4;

    int random = rand();

    for (int i = 0; i <= qtdMinas; i++)
    {
        int x = rand() % altura;
        int y = rand() % largura;

        if (tabuleiroMinas[x][y] == '*')
        {
            tabuleiroMinas[x][y] = 'M'; // Marca a posição como mina
        }
        else
        {
            i--;
        }
    }
}

void clicarCelula(int x, int y)
{
    tabuleiro[x][y] = ' ';
}

void gameLoop()
{
    while (1)
    {
        displayTabuleiro();
        
    }
}