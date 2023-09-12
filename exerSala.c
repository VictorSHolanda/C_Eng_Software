#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[20];
    float notas[15];
    float media;
}dadosAlunos;

dadosAlunos adicionarAluno(dadosAlunos listaAlunos);
dadosAlunos calcularMedia(dadosAlunos listaAlunos);
void limparBuffer();

int main(){

    dadosAlunos listaAlunos[30];
    int menu = 1, escolhaMenu, indiceLista = 0;
    while(menu){
        printf("1-Adicionar um Aluno\n");
        printf("2-Calcular média de notas de um aluno\n");
        printf("3-Sair\n\n");
        scanf("%d", &escolhaMenu);
        switch(escolhaMenu){
            case 1:
                listaAlunos[indiceLista] = adicionarAluno(listaAlunos[indiceLista]);
                indiceLista++;
                break;
            case 2:
                char alunoEscolhido[20];
                int indiceAlunoEscolhido = 0;
                printf("\nDeseja calcular a média de qual aluno? ");
                scanf("%s", alunoEscolhido);
                do{
                    if(strcmp(alunoEscolhido, listaAlunos[indiceAlunoEscolhido].nome) == 0){
                        printf("A média de %s é: %.2f",listaAlunos[indiceAlunoEscolhido].nome, listaAlunos[indiceAlunoEscolhido].media);
                    }else{
                        indiceAlunoEscolhido++;
                    }
                } while(strcmp(alunoEscolhido, listaAlunos[indiceAlunoEscolhido].nome) != 0);
                break;
            case 3:
                menu = 0;
                break;
        }
    }
}

void limparBuffer(){
    while(getchar() != '\n');
}
dadosAlunos adicionarAluno(dadosAlunos listaAlunos){
    int qtdNotas;
    float somaNotas = 0;

    printf("Nome do aluno: ");
    limparBuffer();
    fgets(listaAlunos.nome, sizeof(listaAlunos.nome), stdin);
    printf("\n\n%s\n\n", listaAlunos.nome);
    printf("\nQuantas notas a serem adicionadas? ");
    scanf("%d", &qtdNotas);
    printf("Digite a nota: \n");

    for(int i = 0; i < qtdNotas; i++){
        printf("%i-", i+1);
        scanf("%f", &listaAlunos.notas[i]);
        printf("\n\n%f", listaAlunos.notas[i]);
        somaNotas+=listaAlunos.notas[i];
    }
    listaAlunos.media = somaNotas/qtdNotas;

    return listaAlunos;

}
dadosAlunos calcularMedia(dadosAlunos listaAlunos){
}

