#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char convert[10] = {'A','B','C','D','E','F','G','H','I','J'}; //array para transformar numeros em letras

//char convert[10] = "ABCDEFGHIJ";
void Codificar(char texto[1000]) //FUNÇÃO PARA CODIFICAR
{
    char *teste = strtok(texto,"");
    for(int i = 0; i < strlen(texto); i++)
    {
        if(teste[i] >= '0' && teste[i] <= '9')
        {
            printf("\n%c <<< e um numero\n", teste[i]);
        }
        if(teste[i] == 'Z' || teste[i] == 'z')
        {
            printf("\n%c <-- e um Z",teste[i]);
        }
        printf("\n%c\n", teste[i]);
    }
}


void Decodificar(char texto[1000]) //FUNÇÃO PARA DECODIFICAR
{
    printf("%s\n", texto);
}

int main(void) //MAIN 
{
    void codificar(char texto[]);
    void decodificar(char texto[]);

    char escolha;
    printf("Ola Bem vindo ao sistema de codificacao e decodificacao\nInsira a baixo a opcao desejada:\nC - codificar\nD - Decodificar\n");
    scanf("%c", &escolha);
    
    if(escolha == 'C' || escolha == 'c')
    {
        char cod[1000];
        scanf("%s", cod);
        printf("Escolha Codificar!\n");
        Codificar(cod);

    }
    else if (escolha == 'D' || escolha == 'd')
    {
        char cod2[1000];
        scanf("%s", cod2);
        printf("Escolha Decodificar!\n");
        Decodificar(cod2);
    }
    else { 
        printf("Escolha invalida!\n");
    }
    return 0;
}

