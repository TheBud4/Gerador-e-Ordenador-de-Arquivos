# Gerador e Ordenador de Arquivos

Este projeto é um programa CLI (Command Line Interface) desenvolvido para fins de aprendizado. Ele permite gerar arquivos de números em diferentes ordens (como ordem crescente, decrescente, aleatória, etc.) e com o tamanho definido pelo usuário. Além disso, o programa implementa vários algoritmos de ordenação que podem ser aplicados para ordenar esses números, gerando, ao final, um novo arquivo com os dados organizados de acordo com o método escolhido.

Os principais objetivos do projeto incluem o entendimento de algoritmos de ordenação e o gerenciamento de arquivos em uma interface de linha de comando.

## Funcionalidades

- **Geração de Arquivos**: Criação de arquivos contendo números em diferentes ordens (crescente, decrescente, aleatória).
- **Definição de Tamanho**: Possibilidade de definir o tamanho dos arquivos gerados.
- **Algoritmos de Ordenação**: Implementação de diversos algoritmos de ordenação, como Bubble Sort, Quick Sort, Merge Sort, entre outros.
- **Ordenação de Arquivos**: Aplicação dos algoritmos de ordenação nos arquivos gerados, resultando em novos arquivos organizados.
- **Interface de Linha de Comando**: Interação com o programa através de comandos no terminal, facilitando o uso e a automação de tarefas.

## Como Usar

1. Clone o repositório para sua máquina local.
2. Navegue até o diretório do projeto.
3. Compile o programa utilizando o compilador de sua preferência.
4. Execute o programa através da linha de comando, seguindo as instruções fornecidas.


# Documentação de Testes de Algoritmo

### Bubblesort

| X          | 500K        | 750K        | 1Milhão     |
|------------|-------------|-------------|-------------|
| Aleatório  | 569.221662  | 1315.701606 | 2217.202188 |
| Ordenado   | 221.784926  | 466.51564   | 862.19919   |
| Invertido  | 369.011725  | 829.529762  | 1448.874505 |

### InsertSort

| X          | 500K        | 750K        | 1Milhão     |
|------------|-------------|-------------|-------------|
| Aleatório  | 118.331836  | 266.601577  | 468.221457  |
| Ordenado   | 0.001069    | 0.001604    | 0.002127    |
| Invertido  | 237.476304  | 534.137453  | 942.019957  |

### Selection Sort

| X          | 500K        | 750K        | 1Milhão     |
|------------|-------------|-------------|-------------|
| Aleatório  | 568.630151  | 616.413249  | 924.635425  |
| Ordenado   | 484.358091  | 537.270750  | 925.917965  |
| Invertido  | 323.560337  | 463.718914  | 823.569986  |

# Maiores valores para algorítmos mais eficientes

### Shell Sort

| X          | 500K        | 750K        | 1Milhão     | 5Milhões   |
|------------|-------------|-------------|-------------|------------|
| Aleatório  | 0.180489    | 0.192079    | 0.274426    | 1.736814   |
| Ordenado   | 0.029256    | 0.031073    | 0.041919    | 0.244341   |
| Invertido  | 0.046277    | 0.047145    | 0.063727    | 0.365246   |

### Quick Sort

| X          | 500K        | 750K        | 1Milhão     | 5Milhões   |
|------------|-------------|-------------|-------------|------------|
| Aleatório  | 0.053918    | 0.083261    | 0.112505    | 0.620203   |
| Ordenado   | 0.014510    | 0.023734    | 0.030509    | 0.174105   |
| Invertido  | 0.014618    | 0.023800    | 0.030606    | 0.179189   |

### Merge Sort

| X          | 500K        | 750K        | 1Milhão     | 5Milhões   |
|------------|-------------|-------------|-------------|------------|
| Aleatório  | 0.076754    | 0.117657    | 0.157995    | 0.877489   |
| Ordenado   | 0.040172    | 0.061592    | 0.083023    | 0.455523   |
| Invertido  | 0.040400    | 0.061568    | 0.082756    | 0.465145   |

### Heap Sort

| X          | 500K        | 750K        | 1Milhão     | 5Milhões   |
|------------|-------------|-------------|-------------|------------|
| Aleatório  | 0.100964    | 0.155204    | 0.324980    | 2.060507   |
| Ordenado   | 0.074445    | 0.115046    | 0.232340    | 1.381673   |
| Invertido  | 0.071536    | 0.110469    | 0.226739    | 1.345362   |

### Radix Sort

| X          | 500K        | 750K        | 1Milhão     | 5Milhões   |
|------------|-------------|-------------|-------------|------------|
| Aleatório  | 0.029809    | 0.044342    | 0.103056    | 0.588349   |
| Ordenado   | 0.029456    | 0.044721    | 0.102085    | 0.521511   |
| Invertido  | 0.031815    | 0.044239    | 0.102610    | 0.551908   |
		

## Especificações do Sistema

| Especificação | Detalhe            |
|---------------|--------------------|
| Sistema       | Fedora Linux 40    |
| Processador   | Intel i7-11800H    |
| Memória       | 8 GB               |

### Notas
- Os valores estão em segundos e foram medidos em diferentes tamanhos de conjunto de dados.

## Licença

Este projeto está licenciado sob a Licença MIT. Consulte o arquivo `LICENSE` para mais informações.