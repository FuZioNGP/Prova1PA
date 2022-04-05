#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char convert[10] = {'A','B','C','D','E','F','G','H','I','J'}; //array para transformar numeros em letras

void Codificar(char texto[1000]) //FUNÇÃO PARA CODIFICAR
{
    int count = 1;
    char num[1000];
    int i = 0;
    char *teste = strtok(texto,"");
    do
    {
        i++;
        if(teste[i] >= '0' && teste[i] <= '9')
        {
            switch (teste[i])
            {
            case '0':
                strcat(num,"ZA");
                break;
            case '1':
                strcat(num,"ZB");
                break;
            case '2':
                strcat(num,"ZC");
                break;
            case '3':
                strcat(num,"ZD");
                break;
            case '4':
                strcat(num,"ZE");
                break;
            case '5':
                strcat(num,"ZF");
                break;
            case '6':
                strcat(num,"ZG");
                break;
            case '7':
                strcat(num,"ZH");
                break;
            case '8':
                strcat(num,"ZI");
                break;
            case '9':
                strcat(num,"ZJ");
                break;
            default:
                break;
            }
        }
        else if(teste[i] == 'Z' || teste[i] == 'z')
        {
            strcat(num, "ZZ");
        }
        else if(teste[i] == teste[i-1])
        {
            count++;
        }//A
        else{
            strcat(num, &teste[i]);
        }   
    } 
    while (i < strlen(texto));
    printf("\n%s%d\n", num, count);
}


void Decodificar(char texto[1000]) //FUNÇÃO PARA DECODIFICAR
{
    int count = 1;
    char dec[1000];
    int i = 0;
    char *teste = strtok(texto,"");
    do
    {
        i++;
        switch (teste[i])
        {
        case 'A':
            strcat(dec,"0");
            break;
        case 'B':
            strcat(dec,"1");
            break;
        case 'C':
            strcat(dec,"2");
            break;
        case 'D':
            strcat(dec,"3");
            break;
        case 'E':
            strcat(dec,"4");
            break;
        case 'F':
            strcat(dec,"5");
            break;
        case 'G':
            strcat(dec,"6");
            break;
        case 'H':
            strcat(dec,"7");
            break;
        case 'I':
            strcat(dec,"8");
            break;
        case 'J':
            strcat(dec,"9");
            break;
        default:
            break;
        }
        if(teste[i] == 'Z' || teste[i] == 'z')
        {
            strcat(dec, "");
        }
        else{
            strcat(dec, &teste[i]);
        }   
    } 
    while (i < strlen(texto));
    printf("\n%s\n", dec);
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
        //printf("%s", codificar(cod));
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

