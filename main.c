#include <stdio.h>
#include <string.h>

int main()
{
    char escolha;
    printf("Ola Bem vindo ao sistema de codificacao e decodificacao\nInsira a baixo a Opção desejada:\nC - codificar\nD - Decodificar\n");
    scanf("%c", &escolha);
    if(escolha == 'C' || escolha == 'c')
    {
        printf("Escolha Codificar!\n");
    }
    else if (escolha == 'D' || escolha == 'd')
    {
        printf("Escolha Decodificar!\n");
    }
    else { 
        printf("Escolha invalida!\n");
    }
    return 0;
}