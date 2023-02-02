#include <stdio.h>

#define TAM_NOME_CLIENTE 100
#define TAM_NOME_FILME 100

struct cliente {
    char nome[TAM_NOME_CLIENTE];
    int idade;
};

struct filme {
    int classificacao_filme;
    int esta_disponivel;
};

int main(void) {
    struct cliente cli;
    struct filme fi;
    int classificacao_filme;
   

    /*Solicitação nome do cliente*/
    printf("\n Informe o nome do cliente:");
    fflush(stdin);
    fgets(cli.nome, TAM_NOME_CLIENTE, stdin);

    /*Solicitação idade do cliente*/
    printf("\n Informe a idade do cliente: ");
    scanf("%d", &cli.idade);

    /*Solicitação CLASSIFICAÇÃO DO FILME*/
    printf("\n Informe a classificacao do filme: ");
    scanf("%d", &fi.classificacao_filme);

    /*Informe se o filme está disponível ou não*/
    printf("\n O filme solicitado está disponivel:Sim(1) ou Não(0)");
    scanf("%d", &fi.esta_disponivel);


    /*Exibição dos obtidos*/
    /*Nome*/printf("\n Cliente: %s", cli.nome);
    /*Idade*/printf("\n Idade: %d anos", cli.idade);
    /*Classificação do file*/printf("\n Classificacao do filme: %d anos", fi.classificacao_filme);
    /*Está disponivel ou não?*/printf("\n Esta disponivel %d", fi.esta_disponivel);
    /*Validação de faixa etária*/printf("\n Filme pode ser locado pelo cliente: %d", (fi.esta_disponivel) && (cli.idade >= fi.classificacao_filme));
    /*Restante da idade*/ printf("\n Anos restante: %d", (cli.idade < fi.classificacao_filme) * (fi.classificacao_filme - cli.idade));
    return 0;
}