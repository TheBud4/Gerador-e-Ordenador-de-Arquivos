#include "./GeradorDeArquivos.h"
#include "./Telas/GeradorDeArquivos.h"
#include "./Telas/GeradorDeAlgoritmos.h"

void exibirMenu() {
  printf("+---------------------------------------+\n");
  printf("| Digite a sua opção:                   |\n");
  printf("+---------------------------------------+\n");
  printf("|  0  - Sair                            |\n");
  printf("|  1  - Gerar Arquivos                  |\n");
  printf("|  2  - Ordenar Arquivos                |\n");
  printf("|  99 - Limpar tela                     |\n");
  printf("+---------------------------------------+\n");
}

int main() {
  int op = -1;

  while (op != 0) {
    exibirMenu();
    printf("> ");
    if (scanf("%d", &op) != 1) {
      printf("Entrada inválida. Por favor, insira um número.\n");
      while (getchar() != '\n');
      continue;
    }
    switch (op) {
      case 1:
        GeradorDeArquivos();
        break;
      case 2:
        GeradorDeAlgoritmos();
        break;
      case 99:
        printf("\033[H\033[J"); //Função ANSI para limpar a tela
        break;
      case 0:
        printf("Saindo...\n");
        break;
      default:
        printf("Opção inválida\n");
        break;
    }
  }
  return 0;
}