#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int checaNumero(char valores);

int main(int argc, char *argv[]){
    int indiceVenda = 0, indiceDinheiroRecebido = 0, valorVenda, valorDinheiroRecebido;

    for(int i = 0; i < argc; i++){
        if(strcmp(argv[i], "-v") == 0){ 
            indiceVenda = i;
        }
        if(strcmp(argv[i], "-r") == 0){
            indiceDinheiroRecebido = i;
        }
    }
    if(indiceVenda == 0){
        printf("\nInforme a chave da venda '-v'\n");
        return 1;
    }
    if(indiceDinheiroRecebido == 0){
        printf("\nInforme a chave do dinheiro recebido '-r'\n");
        return 1;
    }
    printf("Aqui tudo bem");
    char numeroOuString[20];
    strcpy(numeroOuString, argv[indiceVenda+1]);
    int numeroOuNao = checaNumero(numeroOuString), erro = 0;
    if(numeroOuNao == 0){
        printf("\nErro! Informe o valor da venda!\n");
        erro = 1;
    }
    strcpy(numeroOuString, argv[indiceDinheiroRecebido+1]);
    numeroOuNao = checaNumero(numeroOuString);
    if(numeroOuNao == 0){
        printf("\nErro! Informe o valor do dinheiro recebido!\n");
        erro = 1;
    }
    if(erro)
        return 1;

    
    // numeroOuString = argv[indiceVenda+1];
    // valorVenda = atoi(argv[indiceVenda + 1]);
    // valorDinheiroRecebido = atoi(argv[indiceDinheiroRecebido + 1]);
    // if(valorVenda == 0){
    //     printf("\nErro! Informe o valor da venda!\n");
    // }
    // if(valorDinheiroRecebido == 0){
    //     printf("\nErro! Informe o valor do dinheiro recebido!\n");
    // }

    //printf("%i \n recebido %i\n", valorVenda, valorDinheiroRecebido);
    

}
int checaNumero(char valores){
    int vOuF = -1;
    for(int i=0; i<strlen(valores); i++){
        if(isdigit(valores[i])){
            vOuF = 1;
        }else{
            vOuF = 0;
        }      
    }
    return vOuF;
}