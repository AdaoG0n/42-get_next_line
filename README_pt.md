<a href="https://github.com/AdaoG0n" style="pointer-events: none;"> <img src="https://github.com/AdaoG0n/AdaoG0n/blob/main/assests/Followbutton.png" width="130" align="right"/></a>

# <a href="#" style="pointer-events: none;"> <img src="https://img.shields.io/badge/status-0%20%2F%20100%20%E2%98%85-success?color=%2312bab9&style=flat-square"/> <img src="https://img.shields.io/github/last-commit/AdaoG0n/42-get_next_line?style=flat-square&color=%2312bab9" /> </a>

 ![](https://github.com/AdaoG0n/AdaoG0n/blob/main/assests/animated%20gifs/getnextline.gif)
 <p align="center">
 <a href="#fluxo-gnl">Fluxo/estrutura GNL</a>  •  <a href="#testers">Testers</a>  •  <a href="#useful-links">Useful Links</a>   •  <a href="https://github.com/AdaoG0n/42-get_next_line/blob/main/README.md"> English 🇬🇧</a>
</p>

#
<br/>**get_next_line** é uma função em C que lê uma linha de um arquivo ou entrada padrão. 
<br/>Este projeto faz parte do currículo da escola 42 e tem como objetivo aprimorar habilidades de programação e manipulação de arquivos.

### Funcionalidades

<br/>Lê uma linha de texto de um descritor de arquivo
<br/>Suporta múltiplos descritores de arquivo
<br/>Gerencia eficientemente a memória
<br/>Lida com diferentes tamanhos de buffer

### Implementação

###### Função principal:

```sh
char *get_next_line(int fd);
```

######   Objetivo:

- [ ] Ler uma linha de um descritor de arquivo (fd)
- [ ] Retornar a linha lida, incluindo '\n'
- [ ] Retornar NULL se não houver mais para ler ou ocorrer erro

 ###### Arquivos necessários:

 - [ ] get_next_line.c
 - [ ] get_next_line_utils.c
 - [ ] get_next_line.h

###### Regras importantes:

- [ ] Usar apenas uma variável estática
- [ ] Compilar com flag -D BUFFER_SIZE=n
- [ ] Funcionar com diferentes tamanhos de buffer
- [ ] Ler o mínimo possível a cada chamada

 ###### Dicas:

- [ ] Entender variáveis estáticas
- [ ] Gerenciar memória corretamente (malloc/free)
- [ ] Lidar com leitura de arquivo e entrada padrão
- [ ] Testar com diferentes BUFFER_SIZE

 ###### Funções permitidas:

`read`
`malloc`
`free`

>[!TIP]
>Lembra-te: código limpo, sem erros de memória, seguindo a Norma da 42.

<br/>Este projeto demonstra habilidades em manipulação de arquivos, gerenciamento de memória e programação em C
![](https://github.com/AdaoG0n/AdaoG0n/blob/main/assests/bar.png)

### Fluxo GNL

#### 1. Chamada inicial: `get_next_line(int fd)`
- **Entrada**: `fd` (descritor de arquivo).
- **Variável estática**: `temp` (guarda conteúdo restante entre chamadas).
- Chama as funções:
  - `ft_read(fd, temp)` para ler o arquivo.
  - `ft_strlen(temp)` para verificar o tamanho da string restante.
  - `ft_strchr(temp, '\n')` para localizar a próxima quebra de linha.
  - `ft_strndup` para duplicar a linha até `\n`.
  - `ft_clean(temp)` para limpar a parte já processada.
  - `ft_free` para liberar memória temporária.

#### 2. `ft_read(int fd, char *temp)`
- **Entrada**: `fd`, `temp` (string acumulada).
- Faz leitura incremental do arquivo usando um buffer:
  - `ft_calloc` para criar o buffer temporário.
  - `read(fd, temp_buff, BUFFER_SIZE)` para ler do arquivo.
  - `ft_strjoin(temp, temp_buff)` para acumular conteúdo lido.
  - `ft_strchr(temp, '\n')` para verificar se a quebra de linha foi encontrada.
- Libera memória de `temp_buff` após o uso.
- Retorna a string acumulada em `temp`.

#### 3. `ft_clean(char *temp)`
- **Entrada**: `temp` (conteúdo restante).
- Processa `temp` para remover a parte já retornada:
  - Percorre até a próxima quebra de linha com um loop.
  - `ft_strdup` para copiar a parte restante de `temp` após `\n`.
  - `ft_strlen(str)` para verificar se a string restante é vazia.
  - Libera `temp` com `ft_free`.
- Retorna o novo conteúdo de `temp`.

#### 4. Funções auxiliares principais

- **`ft_strchr(const char *str, int c)`**
  - Procura a posição de `c` em `str`.
  - Retorna o índice ou `-1` se não encontrado.
  
- **`ft_strlen(const char *str)`**
  - Retorna o comprimento da string.
  
- **`ft_strjoin(char *s1, char *s2)`**
  - Junta duas strings, aloca espaço e retorna a nova string.
  - Usa `ft_calloc` e libera `s1` com `ft_free`.
  
- **`ft_strdup(char *src)`**
  - Cria uma cópia de `src`.
  
- **`ft_strndup(const char *s, int length)`**
  - Duplica os primeiros `length` caracteres de `s`.
  
- **`ft_calloc(size_t count, size_t size)`**
  - Aloca e inicializa memória para um array.
  
- **`ft_free(char **temp)`**
  - Libera memória e redefine o ponteiro como `NULL`.


#### Estrutura GNL

```bash
get_next_line(fd)
│
├── ft_read(fd, temp)
│   ├── ft_calloc(BUFFER_SIZE + 1)
│   ├── read(fd, temp_buff, BUFFER_SIZE)
│   ├── ft_strchr(temp, '\n')
│   ├── ft_strjoin(temp, temp_buff)
│   └── ft_free(temp_buff)
│
├── ft_strlen(temp)
├── ft_strchr(temp, '\n')
├── ft_strndup(temp, ft_strchr(temp, '\n') + 1)
│   ├── malloc(length + 1)
│   └── ft_free(temp)
│
├── ft_clean(temp)
│   ├── ft_strdup(temp + i)
│   │   ├── malloc(ft_strlen(temp + i) + 1)
│   ├── ft_strlen(str)
│   └── ft_free(temp)
│
└── ft_free(temp2)
```


![](https://github.com/AdaoG0n/AdaoG0n/blob/main/assests/bar.png)

### Testers
| Testers                                                           | Autor           |
| :---------------------------------------------------------------- | :---            |
| [francinette](https://github.com/xicodomingues/francinette)       | `xicodomingues` |
| [gnlTester](https://github.com/Tripouille/gnlTester)              | `Tripouille`    |
| [gnl-station-tester](https://github.com/kodpe/gnl-station-tester) | `kodpe`         |

<details>
<summary> ⚠️ Resultado dos testes deste projeto ⚠️</summary>

![](https://github.com/AdaoG0n/42-get_next_line/blob/main/getnextline.png)
 
</details>

![](https://github.com/AdaoG0n/AdaoG0n/blob/main/assests/bar.png)

### Useful links

| Resource                                                                              | Source    |
| :-------------------------------------------------------------------------------------| :-------- |
| [get_next_line: My first complex program](https://yannick.eu/gnl)                     | `Website` |
| [Master File I/O Operations](https://medium.com/p/5fb001d1fff5)                       | `Medium`  |
| [get_next_line - 42 Docs](https://harm-smits.github.io/42docs/projects/get_next_line) | `GitHub`  |

| Video Resource                                                                                                            | Source    | User |
| :------------------------------------------------------------------------------------------------------------------------ | :-------- | :--- |
| [Read A Specific Line From A File \| C Programming Example](https://www.youtube.com/watch?v=w0mgn6OLKUs)                  | `Youtube` | `Portfolio Courses` |
| [get_next_line explained: develop a function that reads a file line by line](https://www.youtube.com/watch?v=8E9siq7apUU) | `Youtube` | `Oceano` |
| [understanding get_next_line](https://www.youtube.com/watch?v=-Mt2FdJjVno)                                                | `Youtube` | `nikito` |

![](https://github.com/AdaoG0n/AdaoG0n/blob/main/assests/bar.png)

![](https://github.com/AdaoG0n/AdaoG0n/blob/main/assests/animated%20gifs/madeby.gif)
