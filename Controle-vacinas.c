#include <stdio.h>
#include <string.h>

struct cadastro {
    int codigo;
    char nom[50];
    char vac[50];
    char cpf1[50];
    char data[50];
    char lote[50];
};

int main() {
    struct cadastro cliente[999];
    int num = 0;
    int opcao = 0;
    int i = 0;
    int n;
    int retorno;
    char cpf2[50];

    while (num != 4) {
        printf("\t\t\t OPCOES: \n\n\n");
        printf("1 - Cadastrar Vacina\n");
        printf("2 - Listar Aplicacoes\n");
        printf("3 - Consultar por CPF\n");
        printf("4 - SAIR.\n");
        scanf("%d", &num);
        switch (num) {
            case 1:
                do {
                    printf("\t\t\tCADASTRO\n\n\n");

                    cliente[i].codigo = i;

                    printf("- Nome:\t\n");
                    fflush(stdin);
                    gets(cliente[i].nom);
                    puts("\n");

                    printf("- CPF:\t\n");
                    fflush(stdin);
                    gets(cliente[i].cpf1);
                    puts("\n");

                    printf("- Vacina:\t\n");
                    fflush(stdin);
                    gets(cliente[i].vac);
                    puts("\n");

                    printf("- Data:\t\n");
                    fflush(stdin);
                    gets(cliente[i].data);
                    puts("\n");

                    printf("- Numero Lote:\t\n");
                    fflush(stdin);
                    gets(cliente[i].lote);
                    puts("\n");

                    printf("Sadastrar outra pessoa digite 1, se não 2");
                    scanf("%d", &opcao);
                } while(opcao == 1);
                break;

            case 2:
                system("cls");

                printf("\t\t\t VISUALIZAR CLIENTE: \n\n\n");
                for (i = 0; i < n; i++) {
                    printf(".cadastro: %d \n", i);
                    printf(".Nome: %s \n", cliente[i].nom);
                    printf(".CPF: %s \n", cliente[i].cpf1);
                    printf(".Vacina: %s \n", cliente[i].vac);
                    printf(".Data: %s \n", cliente[i].data);
                    printf(".Numero Lote: %s \n", cliente[i].lote);
                    printf("====================================\n\n");
                }
                system("pause");
                break;

            case 3:
                printf("Digite o CPF:");
                fflush(stdin);
                gets(cpf2);
                puts("\n");

                for (i = 0; i < n; i++) {
                    if (strcmp(cpf2, cliente[i].cpf1) == 0) {
                        printf(".cadastro: %d \n", i);
                        printf(".Nome: %s \n", cliente[i].nom);
                        printf(".CPF: %s \n", cliente[i].cpf1);
                        printf(".Vacina: %s \n", cliente[i].vac);
                        printf(".Data: %s \n", cliente[i].data);
                        printf(".Numero Lote: %s \n", cliente[i].lote);
                    } else {
                        printf("CPF não encontrado \n\n");
                    }
                }
                break;

            case 4:
                exit(0);
                break;

            default:
                printf("opicao errada, tente novamente!. \n\n");
                break;
        }
    }
    return 0;
}