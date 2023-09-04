#include <stdio.h>
#include <string.h>
#include <ctype.h>

char mensagem[1000];
int numCaracteres[1000];

void cifrarMensagem();
void decifrarMensagem();

int main(){
    int opcao, continuar = 1;
    while(continuar){
        printf("1-Cifrar uma mensagem");
        printf("\n2-Decifrar uma mensagem");
        printf("\n3-Sair\n");
        scanf("%d", &opcao); 
        switch(opcao){
            case 1:
                cifrarMensagem();
                break;
            case 2:
                decifrarMensagem();
                break;
            case 3: 
                continuar = 0;
                break;
        }
    }
}

void cifrarMensagem(){
    printf("Digite uma mensagem: ");
    fflush(stdin);
    fgets(mensagem, sizeof(mensagem), stdin);

    for(int i = 0; i <= strlen(mensagem); i++){
        if(isalpha(mensagem[i]))
            numCaracteres[i] = mensagem[i] + 2;
            mensagem[i] = numCaracteres[i];  
        }

    printf("\n\nMensagem criptografada: ");
    printf("%s", mensagem);
    printf("\n\n");
}

void decifrarMensagem(){
    for(int i = 0; i <= strlen(mensagem); i++){
        if(isalpha(mensagem[i]))
            numCaracteres[i] = mensagem[i] - 2;
            mensagem[i] = numCaracteres[i];  
        }
    printf("\n\nMensagem descriptografada: ");
    printf("%s", mensagem);
    printf("\n\n");
}