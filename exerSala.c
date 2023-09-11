#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[20];
    float notas[15];
}dadosAlunos;

dadosAlunos adicionarAluno(dadosAlunos listaAlunos);
dadosAlunos calcularMedia(dadosAlunos listaAlunos);

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
                        calcularMedia(listaAlunos[indiceAlunoEscolhido]);
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

dadosAlunos adicionarAluno(dadosAlunos listaAlunos){
    int qtdNotas;

    printf("Nome do aluno: ");
    scanf("%s", listaAlunos.nome);
    printf("\nQuantas notas a serem adicionadas? ");
    scanf("%d", &qtdNotas);
    printf("Digite a nota: \n");

    for(int i = 0; i < qtdNotas; i++){
        printf("%i-", i+1);
        scanf("%f", &listaAlunos.notas[i]);
        printf("\n\n%f", listaAlunos.notas[i]);
    }

    return listaAlunos;

}
dadosAlunos calcularMedia(dadosAlunos listaAlunos){
    for()

}

