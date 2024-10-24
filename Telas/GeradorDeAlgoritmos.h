#ifndef GERADOR_DE_ALGORITMOS_H
#define GERADOR_DE_ALGORITMOS_H

void exibirMenuDeAlgoritmos(){
  printf("+-------------------------------------------+\n");
  printf("| Digite a sua opção:                       |\n");
  printf("+-------------------------------------------+\n");
  printf("|  0  - Voltar                              |\n");
  printf("|  1  - Ordenar Arquivo Com Bubble Sort     |\n");
  printf("|  2  - Ordenar Arquivo Com Insertion Sort  |\n");
  printf("|  3  - Ordenar Arquivo Com Selection Sort  |\n");
  printf("|  4  - Ordenar Arquivo Com Shell Sort      |\n");
  printf("|  5  - Ordenar Arquivo Com Quick Sort      |\n");
  printf("|  6  - Ordenar Arquivo Com Merge Sort      |\n");
  printf("|  7  - Ordenar Arquivo Com Heap Sort       |\n");
  printf("|  8  - Ordenar Arquivo Com Radix Sort      |\n");
  printf("|  99 - Limpar tela                         |\n");
  printf("+-------------------------------------------+\n");
}

void GeradorDeAlgoritmos(){
  int op = -1;
  char nomeArquivo[100];

  while (op != 0) {
    exibirMenuDeAlgoritmos();
    printf("> ");
    if (scanf("%d", &op) != 1) {
      printf("Entrada inválida. Por favor, insira um número.\n");
      while (getchar() != '\n');
      continue;
    }

    switch (op) {
      case 1:
        printf("Digite o arquivo a ser testado: \n");
        printf("> ");
        scanf("%s", nomeArquivo);
        gerarBenchmarkHeapSort(nomeArquivo);
        break;
      case 2:
        printf("Digite o arquivo a ser testado: \n");
        printf("> ");
        scanf("%s", nomeArquivo);
        gerarBenchmarkInsertionSort(nomeArquivo);
        break;
      case 3:
        printf("Digite o arquivo a ser testado: \n");
        printf("> ");
        scanf("%s", nomeArquivo);
        gerarBenchmarkSelectionSort(nomeArquivo);
        break;
      case 4:
        printf("Digite o arquivo a ser testado: \n");
        printf("> ");
        scanf("%s", nomeArquivo);
        gerarBenchmarkShellSort(nomeArquivo);
        break;
      case 5:
        printf("Digite o arquivo a ser testado: \n");
        printf("> ");
        scanf("%s", nomeArquivo);
        gerarBenchmarkQuickSort(nomeArquivo);
        break;
      case 6:
        printf("Digite o arquivo a ser testado: \n");
        printf("> ");
        scanf("%s", nomeArquivo);
        gerarBenchmarkMergeSort(nomeArquivo);
        break;
      case 7:
        printf("Digite o arquivo a ser testado: \n");
        printf("> ");
        scanf("%s", nomeArquivo);
        gerarBenchmarkHeapSort(nomeArquivo);
        break;
      case 8:
        printf("Digite o arquivo a ser testado: \n");
        printf("> ");
        scanf("%s", nomeArquivo);
        gerarBenchmarkRadixSort(nomeArquivo);
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

#endif  // !GERADOR_DE_ALGORITMOS_H