#include <stdio.h>

int main() {
    char opcao;

    do {
        printf("Escolha uma opção:\n");
        printf("1. Circuito Divisor de Tensão\n");
        printf("2. Sair\n");
        printf("Opção: ");
        scanf(" %c", &opcao);

        switch (opcao) {
            case '1': {
                // Circuito Divisor de Tensão
                double Vs, Vm, Im, R1, R2;

                // Solicitar entrada de dados
                printf("Informe a tensão de entrada (Vs): ");
                scanf("%lf", &Vs);
                printf("Informe a tensão de saída (Vm): ");
                scanf("%lf", &Vm);
                printf("Informe a corrente máxima no circuito: ");
                scanf("%lf", &Im);

                // Verificar possíveis erros
                if (Vm >= Vs) {
                    printf("Erro: A tensão de saída (Vm) deve ser menor que a tensão de entrada (Vs).\n");
                    break;
                }

                if (Im <= 0) {
                    printf("Erro: A corrente máxima no circuito deve ser maior que zero.\n");
                    break;
                }

                // Calcular resistências
                R2 = Vm / Im;
                R1 = (Vs - Vm) / Im;

                // Exibir resultados
                printf("Valor do R1: %.2lf ohms\n", R1);
                printf("Valor do R2: %.2lf ohms\n",R2);
                break; // Adicionado break para sair do switch após o caso '1'
            }
            case '2':
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }

        // Aguardar uma tecla
        printf("\nPressione Enter para continuar...");
        while (getchar() != '\n');

        // Limpar a tela
        

    } while (opcao != '2');

    return 0;
}
