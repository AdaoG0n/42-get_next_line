# <a href="#" style="pointer-events: none;"> <img src="https://img.shields.io/badge/status-0%20%2F%20100%20%E2%98%85-success?color=%2312bab9&style=flat-square"/> <img src="https://img.shields.io/github/last-commit/AdaoG0n/42-get_next_line?style=flat-square&color=%2312bab9" /> </a> <a href="https://github.com/AdaoG0n" style="pointer-events: none;"> <img src="https://github.com/AdaoG0n/AdaoG0n/blob/main/assests/Followbutton.png" width="130" align="right"/></a>

 ![](https://github.com/AdaoG0n/AdaoG0n/blob/main/assests/animated%20gifs/getnextline.gif)
</br>

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

<details>
<summary> ⚠️ Resultado dos testes ⚠️</summary>

![](https://github.com/AdaoG0n/42-get_next_line/blob/main/getnextline.png)
 
</details>
