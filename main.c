#include <stdio.h>
#include <string.h>

#define DIM      1000
#define HIST_DIM 256

//calcular quantas vezes cada letra se repete
void calcular( int *hist, const char*str) {
    memset( hist, 0, HIST_DIM * sizeof(int));
    while(*str)
        hist[(unsigned char) *(str++)]++;
}


int main(void) {
    unsigned char c;
    int histograma[HIST_DIM];
    char texto[DIM] = "";

    printf("Informe um texto: ");
    gets(texto);

    calcular( histograma, texto );

    for( c = 'a'; c <= 'z'; c++ )
        printf("%c = %d\n", c, histograma[c]);

    return 0;
}

char convert[10] = {'A','B','C','D','E','F','G','H','I','J'}; //array para transformar numeros em letras

//char convert[10] = "ABCDEFGHIJ";
void Codificar(char texto[1000]) //FUNÇÃO PARA CODIFICAR
{
    if(strcmp(texto, "Z") != 0) 
    {
        printf("contem Z");
    }
    printf("%s\n", texto);
}


void Decodificar(char texto[1000]) //FUNÇÃO PARA DECODIFICAR
{
    printf("%s\n", texto);
}

void DiferenciarZ(Char texto[1000]) // Função para fazer diferenciação de Z's
{
  if (texto)
}
int main() //MAIN 
{
  
    char escolha;
    printf("Ola Bem vindo ao sistema de codificacao e decodificacao\nInsira a baixo a opcao desejada:\nC - codificar\nD - Decodificar\n");
    scanf("%c", &escolha);
    if(escolha == 'C' || escolha == 'c')
    {
        char cod[1000] = "";
        scanf("%s", &cod);
        printf("Escolha Codificar!\n");
        Codificar(cod);
    }
    else if (escolha == 'D' || escolha == 'd')
    {
        char cod[1000] = "";
        scanf("%s", &cod);
        printf("Escolha Decodificar!\n");
        Codificar(cod);
    }
    else { 
        printf("Escolha invalida!\n");
    }
    return 0;
}
