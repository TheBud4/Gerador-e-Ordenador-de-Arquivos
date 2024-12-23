#ifndef GERAR_ARQUIVO_DESORDENADO_H
#define GERAR_ARQUIVO_DESORDENADO_H

void shuffle(int *array, int size) {
  for (int i = size - 1; i > 0; i--) {
    int j = rand() % (i + 1);
    // Troca os elementos
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
  }
}

void gerarArquivoDesordenado(int tam) {
  FILE *desordenado;
  char nomeArquivo[100];
  int *array = malloc((tam + 1) * sizeof(int));

  for (int i = 0; i <= tam; i++) {
    array[i] = i;  
  }

  srand(time(NULL));
  shuffle(array, tam + 1);

  sprintf(nomeArquivo, "desordenado_tam:%d.txt", tam);
  desordenado = fopen(nomeArquivo, "w");
  for (int i = 0; i <= tam; i++) {
    fprintf(desordenado, "%d\n", array[i]);
  }
  fclose(desordenado);
  printf("Arquivo desordenado criado com sucesso!\n");

  // Libera a memória alocada
  free(array);
}

#endif  // !GERAR_ARQUIVO_DESORDENADO_H