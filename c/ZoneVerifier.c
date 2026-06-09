#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

int banner() {
    system("cls");
    printf("|=========================|\n");
    printf("|===== Zone Verifier =====|\n");
    printf("|=========================|\n");
}

int main(){
    banner();

    float codigo_produto;
    char regiao[50];

    printf("Esse programa ira ler o codigo do produto que voce inserir, e iremos informar de qual regiao do Brasil o produto vem, ou se ele e importado.\n");

    printf("Insira o codigo do produto, localizado na embalagem do mesmo: ");
    scanf("%f" ,&codigo_produto);

    switch ((int)codigo_produto) {
        case 1: strcpy(regiao, "Este produto e da regiao Sul.");
         break;
        case 2: strcpy(regiao, "Este produto e da regiao Norte");
         break;
        case 3: strcpy(regiao, "Este produto e da regiao Leste");
         break;
        case 4: strcpy(regiao, "Este produto e da regiao Oeste");
         break;
        case 5: strcpy(regiao, "Este produto e da regiao Nordeste");
         break;
        case 6: strcpy(regiao, "Este produto e da regiao Nordeste");
         break;
        case 7: strcpy(regiao, "Este produto e da regiao Sudeste");
         break;
        case 8: strcpy(regiao, "Este produto e da regiao Sudeste");
         break;
        case 9: strcpy(regiao, "Este produto e da regiao Sudeste");
         break;
        case 10: strcpy(regiao, "Este produto e da regiao Centro-Oeste");
            default:
                strcpy(regiao, "Este produto é IMPORTADO!!!");
                break;
    }

    system("cls");

    printf("\n%s", regiao,"\n");
}
