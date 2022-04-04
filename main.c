#include <stdio.h>
#include <string.h>

void Codificar(char texto[1000])
{
    printf("%s\n", texto);
}
void Decodificar(char texto[1000])
{
    printf("%s\n", texto);
}
int main()
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
