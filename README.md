# C_Learning

Meus estudos dirigidos de C e C++ na PUC Minas. Cada pasta `EdXX` é um estudo; dentro delas
os arquivos seguem a numeração da lista (`Exemplo0401`, `Tarefa0520`...).

| Pasta | Assunto |
|---|---|
| Ed01–Ed03 | primeiros programas: leitura do teclado, contas, `if` e `for` |
| Ed04 | caracteres e cadeias (`isDigit`, `isLowercase`, contagens) |
| Ed05 | funções com retorno: fatorial, frações, séries |
| Ed07 | recursão (Fibonacci e outras) |
| Ed08 | arrays e arquivos (ler e gravar em `.txt`) |
| Ed09–Ed10 | matrizes, diagonais, alocação dinâmica |
| Ed11–Ed12 | C++: classe de array e de matriz |
| Ed13 | classes com tratamento de erro (`Contato`) |
| Ed14 | classe de string própria (`MyString`) |
| Ed15 | pilha e fila com exceções |
| Extras | listas extras (S01, S02, R01, R02, A01) e o artigo *Os Três Tipos Lógicos de Pesquisa* |

## Compilar

Quase tudo usa a `io.h` da disciplina, que fica em `include/`:

```bash
gcc -Iinclude Ed05/Tarefa0520.c -o tarefa -lm
./tarefa
```

```bash
g++ -Iinclude Ed15/Tarefa1501.cpp -o tarefa
```

## Observações

- Alguns exemplos são etapas intermediárias: o menu foi escrito antes dos métodos, então não
  compilam sozinhos (`Ed01/Exemplos/Exemplo0110.c`, `Ed04/Programacao/Exemplo0406.c`,
  `Exemplo0408.c`, `Ed07/Tarefa_0711.c`). A versão seguinte de cada um é a que funciona.
- `Extras/Artigo` é a pasta que mandei junto com o artigo, com tudo no mesmo nível. Por isso
  tem arquivos com o mesmo nome de pastas diferentes e nem todos compilam a partir dali.
