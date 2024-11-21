<a href="https://github.com/AdaoG0n" style="pointer-events: none;"> <img src="https://github.com/AdaoG0n/AdaoG0n/blob/main/assests/Followbutton.png" width="130" align="right"/></a>

# <a href="#" style="pointer-events: none;"> <img src="https://img.shields.io/badge/status-0%20%2F%20100%20%E2%98%85-success?color=%2312bab9&style=flat-square"/> <img src="https://img.shields.io/github/last-commit/AdaoG0n/42-get_next_line?style=flat-square&color=%2312bab9" /> </a>

 ![](https://github.com/AdaoG0n/AdaoG0n/blob/main/assests/animated%20gifs/getnextline.gif)
 <p align="center">
 <a href="#fluxo-gnl">Flow/structure GNL</a>  •  <a href="#testers">Testers</a>  •  <a href="#usefull-links">Useful Links</a> 
</p>

#
<br/>**get_next_line** is a C function that reads a line from a file or standard input. 
<br/>This project is part of the 42 curriculum and aims to improve programming and file manipulation skills.

### Features

<br/>Reads a line of text from a file descriptor
<br/>Supports multiple file descriptors
<br/>Efficient memory management
<br/>Handles different buffer sizes

### Implementation

###### Main function:

sh
char *get_next_line(int fd);

###### Objective:

- [ ] Read a line from a file descriptor (fd)
- [ ] Return the read line, including '\n'
- [ ] Return NULL if no more to read or if an error occurs

###### Required files:

 - [ ] get_next_line.c
 - [ ] get_next_line_utils.c
 - [ ] get_next_line.h

###### Important rules:

- [ ] Use only one static variable
- [ ] Compile with flag -D BUFFER_SIZE=n
- [ ] Works with different buffer sizes
- [ ] Reads as little as possible on each call

###### Tips:

- [ ] Understand static variables
- [ ] Manage memory properly (malloc/free)
- [ ] Handle file and standard input reading
- [ ] Test with different BUFFER_SIZE

###### Allowed functions:

read
malloc
free

>[!TIP]
>Remember: clean code, no memory errors, following the 42 Norm.

<br/>This project demonstrates skills in file manipulation, memory management, and C programming.
![](https://github.com/AdaoG0n/AdaoG0n/blob/main/assests/bar.png)

### GNL Flow

#### 1. Initial call: get_next_line(int fd)
- **Input**: fd (file descriptor).
- **Static variable**: temp (holds remaining content between calls).
- Calls functions:
  - ft_read(fd, temp) to read the file.
  - ft_strlen(temp) to check the length of the remaining string.
  - ft_strchr(temp, '\n') to locate the next newline.
  - ft_strndup to duplicate the line up to \n.
  - ft_clean(temp) to clear the already processed part.
  - ft_free to free temporary memory.

#### 2. ft_read(int fd, char *temp)
- **Input**: fd, temp (accumulated string).
- Performs incremental file reading using a buffer:
  - ft_calloc to create a temporary buffer.
  - read(fd, temp_buff, BUFFER_SIZE) to read from the file.
  - ft_strjoin(temp, temp_buff) to accumulate the read content.
  - ft_strchr(temp, '\n') to check if a newline has been found.
- Frees memory of temp_buff after use.
- Returns the accumulated string in temp.

#### 3. ft_clean(char *temp)
- **Input**: temp (remaining content).
- Processes temp to remove the part that has already been returned:
  - Loops until the next newline is found.
  - ft_strdup to copy the remaining part of temp after \n.
  - ft_strlen(str) to check if the remaining string is empty.
  - Frees temp with ft_free.
- Returns the new content of temp.

#### 4. Main helper functions

- **ft_strchr(const char *str, int c)**
  - Searches for the position of c in str.
  - Returns the index or -1 if not found.
  
- **ft_strlen(const char *str)**
  - Returns the length of the string.
  
- **ft_strjoin(char *s1, char *s2)**
  - Joins two strings, allocates space, and returns the new string.
  - Uses ft_calloc and frees s1 with ft_free.
  
- **ft_strdup(char *src)**
  - Creates a copy of src.
  
- **ft_strndup(const char *s, int length)**
  - Duplicates the first length characters of s.
  
- **ft_calloc(size_t count, size_t size)**
  - Allocates and initializes memory for an array.
  
- **ft_free(char **temp)**
  - Frees memory and sets the pointer to NULL.


#### GNL Structure

bash
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




![](https://github.com/AdaoG0n/AdaoG0n/blob/main/assests/bar.png)

### Testers
| Testers                                                           | Author           |
| :---------------------------------------------------------------- | :---            |
| [francinette](https://github.com/xicodomingues/francinette)       | xicodomingues |
| [gnlTester](https://github.com/Tripouille/gnlTester)              | Tripouille    |
| [gnl-station-tester](https://github.com/kodpe/gnl-station-tester) | kodpe         |

<details>
<summary> ⚠️ Test results of this project ⚠️</summary>

![](https://github.com/AdaoG0n/42-get_next_line/blob/main/getnextline.png)
 
</details>

![](https://github.com/AdaoG0n/AdaoG0n/blob/main/assests/bar.png)

### Useful links

| Resource                                                                              | Source    |
| :-------------------------------------------------------------------------------------| :-------- |
| [get_next_line: My first complex program](https://yannick.eu/gnl)                     | Website |
| [Master File I/O Operations](https://medium.com/p/5fb001d1fff5)                       | Medium  |
| [get_next_line - 42 Docs](https://harm-smits.github.io/42docs/projects/get_next_line) | GitHub  |

| Video Resource                                                                                                            | Source    | User |
| :------------------------------------------------------------------------------------------------------------------------ | :-------- | :--- |
| [Read A Specific Line From A File \| C Programming Example](https://www.youtube.com/watch?v=w0mgn6OLKUs)                  | Youtube | Portfolio Courses |
| [get_next_line explained: develop a function that reads a file line by line](https://www.youtube.com/watch?v=8E9siq7apUU) | Youtube | Oceano |
| [understanding get_next_line](https://www.youtube.com/watch?v=-Mt2FdJjVno)                                                | Youtube | nikito |

![](https://github.com/AdaoG0n/AdaoG0n/blob/main/assests/bar.png)

![](https://github.com/AdaoG0n/AdaoG0n/blob/main/assests/animated%20gifs/madeby.gif)
