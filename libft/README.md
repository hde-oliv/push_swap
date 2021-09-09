<div align="center">
  <img src="https://i.imgur.com/v91fjxi.png"/>
</div>
<div align="center">
  <img src="https://github.com/hde-oliv/libft/actions/workflows/build.yml/badge.svg"/>
  <img src="https://github.com/hde-oliv/libft/actions/workflows/norminette.yml/badge.svg"/>
  <img src="https://github.com/hde-oliv/libft/actions/workflows/tests.yml/badge.svg"/>
  <a href="https://www.codacy.com/gh/hde-oliv/libft/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=hde-oliv/libft&amp;utm_campaign=Badge_Grade">
    <img src="https://app.codacy.com/project/badge/Grade/0f80797f68674735bf5da614cb21a8ea"/>
  </a>
</div>

## What it is
Libft is the first project at École 42 consisting on re-coding basic Libc functions and some additional ones.  
This library is an important part of the whole cursus, as it will be used in subsequent projects.  
The “ft” means forty-two.

Succeeded with 115%

## Skills
- Algorithms & AI
- Imperative programming
- Rigor
- Unix logic

## Functions
### Mandatory
| Function   | Description                                                              |
|------------|--------------------------------------------------------------------------|
| ft_atoi    | Convert a string to an integer.                                          |
| ft_bzero   | Set the memory area to zero.                                             |
| ft_calloc  | Allocates memory and sets it to zero. (*)                                |
| ft_isalnum | Returns true if the character is alphanumeric.                           |
| ft_isalpha | Returns true if the character is alphabetic.                             |
| ft_isascii | Returns true if the character is on the ASCII table.                     |
| ft_isdigit | Returns true if the character is numeric.                                |
| ft_isprint | Returns true if the character is printable.                              |
| ft_memccpy | Copies an area of memory to another, but stops as it founds a character. |
| ft_memchr  | Searches for a character in an area of memory and returns its location.  |
| ft_memcmp  | Compare two areas of memory.                                             |
| ft_memcpy  | Copies an area of memory to another.                                     |
| ft_memmove | Copies an area of memory to another. (Handles overlap)                   |
| ft_memset  | Set the memory area to the past character.                               |
| ft_strchr  | Searches for a character in a string and returns its location.           |
| ft_strdup  | Allocates a copy of a string. (*)                                        |
| ft_strlcat | Concatenates a string to a destiny just size - 1 bytes.                  |
| ft_strlcpy | Copies a string to a destiny just size - 1 bytes.                        |
| ft_strlen  | Returns the length of a string.                                          |
| ft_strncmp | Compares n bytes of two strings.                                         |
| ft_strnstr | Returns the position of a substring, but just searches n bytes           |
| ft_strrchr | Returns the last incidence of a character in a string.                   |
| ft_tolower | Takes a character and returns it lowercase.                              |
| ft_toupper | Takes a character and returns it uppercase.                              |

### Additional
| Function      | Description                                                                       |
|---------------|-----------------------------------------------------------------------------------|
| ft_itoa       | Converts an integer to a string. (*)                                              |
| ft_putchar_fd | Write a character on a file descriptor.                                           |
| ft_putendl_fd | Write a string and a line break on a file descriptor.                             |
| ft_putnbr_fd  | Write an integer on a file descriptor.                                            |
| ft_putstr_fd  | Write a string on a file descriptor.                                              |
| ft_split      | Takes a string and a delimiter and returns all the strings between. (**)          |
| ft_strjoin    | Takes two strings and returns the concatenation. (*)                              |
| ft_strmapi    | Iterates a string and returns it after applying a function to all characters (*)  |
| ft_substr     | Returns a substring of the string passed. (*)                                     |
| ft_strtrim    | Trims the string. (*)                                                             |

### Bonus
| Function        | Description                                                                              |
|-----------------|------------------------------------------------------------------------------------------|
| ft_lstadd_back  | Adds an element to the end of a linked list. (*)                                         |
| ft_lstadd_front | Adds an element to the front of a linked list. (*)                                       |
| ft_lstclear     | Deletes an entire linked list.                                                           |
| ft_lstdelone    | Deletes just an element.                                                                 |
| ft_lstiter      | Iterates the entire linked list and applies the function to the content of its elements. |
| ft_lstlast      | Returns the pointer to the last element.                                                 |
| ft_lstmap       | Creates a new linked list, applying a function to the content of all elements. (*)       |
| ft_lstnew       | Creates a new element. (*)                                                               |
| ft_lstsize      | Returns a size of a linked list.                                                         |

### Personal
| Function   | Description                                              |
|------------|----------------------------------------------------------|
| ft_abs     | Returns the absolute value of an integer.                |
| ft_atoll   | Converts a string to a long long integer.                |
| ft_dfree   | Frees an array of allocated pointers                     |
| ft_intlen  | Returns how much decimal cases an integer has.           |
| ft_isspace | Returns true if the character is a space.                |
| ft_range   | Returns an array of integers delimited by 2 numbers. (*) |

( * ) Allocates memory  
( ** ) Allocates an array of allocated pointers

## How to use it
Requisites:
```shell
clang
```

Clone the repository and run:
```shell
make
```

The library is generated on the file libft.a.

To run the tests (in construction):
```shell
make tests
```
The results will be outputted on console.

## Found any bug?
Feel free to contact me or create an issue!

###### Licensed under GPLv3
