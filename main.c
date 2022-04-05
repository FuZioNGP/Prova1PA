#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char convert[10] = {'A','B','C','D','E','F','G','H','I','J'}; //array para transformar numeros em letras

/*char numeroparaletra(char numero)
{
    switch (numero)
    {
        case '0':
            return 'ZA';
            break;
        case '1':
            return 'ZB';
            break;
        case '2':
            return 'ZC';
            break;
        case '3':
            return 'ZD';
            break;
        case '4':
            return 'ZE';
            break;
        case '5':
            return 'ZF';
            break;
        case '6':
            return 'ZG';
            break;
        case '7':
            return 'ZH';
            break;
        case '8':
            return 'ZI';
            break;
        case '9':
            return 'ZJ';
            break;
        default:
            break;
    }
}*/

//char convert[10] = "ABCDEFGHIJ";
void Codificar(char texto[1000]) //FUNÇÃO PARA CODIFICAR
{
    char *teste = strtok(texto,"");
    //int count = 1;
    char num[1000];
    for(int i = 0; i < strlen(texto); i++)
    {
        if(teste[i] >= '0' && teste[i] <= '9')
        {
            printf("\n%c <<< e um numero\n", teste[i]);
        }
        if(teste[i] == 'Z' || teste[i] == 'z')
        {
            printf("\n%c <-- e um Z",teste[i]);
            strcat(num, "ZZ");
        }
        if(teste[i] == teste[i-1])
        {
            //count++;
        }
        else{
            printf("\n%c\n", teste[i]);
            strcat(num, &teste[i]);
            //printf("%s", teste[i]);
        }

    }
    //printf("%d letras repetidas", count);
    printf("%s\n", num);
    return;
}


void Decodificar(char texto[1000]) //FUNÇÃO PARA DECODIFICAR
{
    printf("%s\n", texto);
}

int main(void) //MAIN 
{
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

