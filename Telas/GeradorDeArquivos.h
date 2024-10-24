#ifndef GERADOR_DE_ARQUIVOS_H
#define GERADOR_DE_ARQUIVOS_H

void exibirMenuDeGeracaoDeArquivos(){
  printf("+---------------------------------------+\n");
  printf("| Digite a sua opção:                   |\n");
  printf("+---------------------------------------+\n");
  printf("|  0  - Voltar                          |\n");
  printf("|  1  - Gerar arquivo ordenado          |\n");
  printf("|  2  - Gerar arquivo invertido         |\n");
  printf("|  3  - Gerar arquivo desordenado       |\n");
  printf("|  4  - Gerar todos os tipos            |\n");
  printf("|  99 - Limpar tela                     |\n");
  printf("+---------------------------------------+\n");
}

void GeradorDeArquivos() {
  int tam, op = -1;

  while (op != 0) {
    exibirMenuDeGeracaoDeArquivos();
    printf("> ");
    if (scanf("%d", &op) != 1) {
      printf("Entrada inválida. Por favor, insira um número.\n");
      while (getchar() != '\n');
      continue;
    }

    switch (op) {
      case 1:
        printf("Digite o tamanho do arquivo: \n");
        printf("> ");
        if (scanf("%d", &tam) != 1) {
          printf("Entrada inválida. Por favor, insira um número.\n");
          while (getchar() != '\n');
          continue;
        }
        gerarArquivoOrdenado(tam);
        break;
      case 2:
        printf("Digite o tamanho do arquivo: \n");
        printf("> ");
        if (scanf("%d", &tam) != 1) {
          printf("Entrada inválida. Por favor, insira um número.\n");
          while (getchar() != '\n');
          continue;
        }
        gerarArquivoInvertido(tam);
        break;
      case 3:
        printf("Digite o tamanho do arquivo: \n");
        printf("> ");
        if (scanf("%d", &tam) != 1) {
          printf("Entrada inválida. Por favor, insira um número.\n");
          while (getchar() != '\n');
          continue;
        }
        gerarArquivoDesordenado(tam);
        break;
      case 4:
        printf("Digite o tamanho do arquivo: \n");
        printf("> ");
        if (scanf("%d", &tam) != 1) {
          printf("Entrada inválida. Por favor, insira um número.\n");
          while (getchar() != '\n');
          continue;
        }
       // gerarTodos(tam);
        break;
      case 99:
        printf("\033[H\033[J");  // Função ANSI para limpar a tela
        break;
      case 0:
        printf("Voltando...\n");
        break;
      default:
        printf("Opção inválida\n");
        break;
    }
  }
  
}

#endif  // !GERADOR_DE_ARQUIVOS_H