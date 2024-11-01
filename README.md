# <a href="#" style="pointer-events: none;"> <img src="https://img.shields.io/badge/status-In_Progress-success?color=black&style=flat-square"/></a> • 42 get_next_line <a href="https://github.com/AdaoG0n" style="pointer-events: none;"> <img src="https://github.com/AdaoG0n/AdaoG0n/blob/main/assests/Followbutton.png" width="130" align="right"/></a>
 <a href="#" style="pointer-events: none;">
 <img align="right" src="https://github.com/AdaoG0n/AdaoG0n/blob/main/assests/getnextline.png" width="400"/>
 </a>

### Sobre o Projeto
<br/>get_next_line é uma função em C que lê uma linha de um arquivo ou entrada padrão. 
<br/>Este projeto faz parte do currículo da escola 42 e tem como objetivo aprimorar habilidades de programação e manipulação de arquivos.

### Funcionalidades

<br/>Lê uma linha de texto de um descritor de arquivo
<br/>Suporta múltiplos descritores de arquivo
<br/>Gerencia eficientemente a memória
<br/>Lida com diferentes tamanhos de buffer

### Implementação
<br/>A função utiliza alocação dinâmica de memória e variáveis estáticas para manter o estado entre chamadas. 
<br/>Ela lê o arquivo em chunks definidos por BUFFER_SIZE, processa o conteúdo e retorna uma linha completa.
<br/>Como Usar
```bash
#include "get_next_line.h"

int main()
{
    int fd = open("arquivo.txt", O_RDONLY);
    char *linha;
    
    while ((linha = get_next_line(fd)) != NULL)
    {
        printf("%s", linha);
        free(linha);
    }
    
    close(fd);
    return (0);
}
```

### Compilação
Compile o projeto usando:

```sh
gcc -Wall -Wextra -Werror -D BUFFER_SIZE=32 *.c
```

<br/>Este projeto demonstra habilidades em manipulação de arquivos, gerenciamento de memória e programação em C
