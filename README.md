<a href="https://github.com/AdaoG0n" style="pointer-events: none;"> <img src="https://github.com/AdaoG0n/AdaoG0n/blob/main/assests/Followbutton.png" width="130" align="right"/></a>

# <a href="#" style="pointer-events: none;"> <img src="https://img.shields.io/badge/status-0%20%2F%20100%20%E2%98%85-success?color=%2312bab9&style=flat-square"/> <img src="https://img.shields.io/github/last-commit/AdaoG0n/42-get_next_line?style=flat-square&color=%2312bab9" /> </a>

 ![](https://github.com/AdaoG0n/AdaoG0n/blob/main/assests/animated%20gifs/getnextline.gif)
 <p align="center">
  <a href="#testers">Testers</a>  •  <a href="#usefull-links">Usefull Links</a> 
</p>
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

### Usefull links

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


![](https://github.com/AdaoG0n/AdaoG0n/blob/main/assests/animated%20gifs/madeby.gif)
