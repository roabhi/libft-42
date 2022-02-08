# Libft

Libft is a custom library made in C as part of the Cursus for the 42 school.

## Libft Part-1

- [`ft_atoi`](ft_atoi.c)                  - Turns char[] into int.
- [`ft_isalpha`](ft_isalpha.c)            - Validates char as alphanumeric.
- [`ft_isdigit`](ft_isdigit.c)            - Validates char as numeric.
- [`ft_isalnum`](ft_isalnum.c)            - Validates char as alphanumeric or numeric.
- [`ft_isascii`](ft_isascii.c)            - Validates char as ASCII.
- [`ft_isprint`](ft_isprint.c)            - Validates char as printable.
- [`ft_strlen`](ft_strlen.c)              - Returns the length of char c.
- [`ft_memset`](ft_memset.c)              - Copies char c n times.
- [`ft_bzero`](ft_bzero.c)                - Copies '\0' n times. 
- [`ft_memcpy`](ft_memcpy.c)              - Copies n characters from src to dst.
- [`ft_memmove`](ft_memmove.c)            - Copies n characters from src to dst (no overlapping).
- [`ft_strlcpy`](ft_strlcpy.c)            - Copies from src to dst un numero concreto for n bytes.
- [`ft_strlcat`](ft_strlcat.c)            - Concats src and dst n bytes.
- [`ft_toupper`](ft_toupper.c)            - char to uppercase.
- [`ft_tolower`](ft_tolower.c)            - char to lowercase.
- [`ft_strchr`](ft_strchr.c)              - Finds char c into char[].
- [`ft_strrchr`](ft_strrchr.c)            - Search to find char c into char[] for n bytes.
- [`ft_strncmp`](ft_strncmp.c)            - Compares 2 char[].
- [`ft_memchr`](ft_memchr.c)              - Finds char into (char *)void.
- [`ft_memcmp`](ft_memcmp.c)              - Compares 2 areas into memory.
- [`ft_strnstr`](ft_strnstr.c)            - Find char[] into char[].

## Libft Part-2
- [`ft_substr`](ft_substr.c)	          - Returns sub char[] from char[]
- [`ft_strjoin`](ft_strjoin.c)	          - Concats 2 char[].
- [`ft_strtrim`](ft_strtrim.c)	          - Splice a char[] from given values.
- [`ft_split`](ft_split.c)	              - Splice a char[] using char as index.
- [`ft_itoa`](ft_itoa.c)	              - Turns int into char[]. 
- [`ft_strmapi`](ft_strmapi.c)            - Aplies function to all char from char[]. 
- [`ft_putchar_fd`](ft_putchar_fd.c)      - Writes char into file directory.
- [`ft_putstr_fd`](ft_putstr_fd.c)        - Writes char[] into file directory.
- [`ft_putendl_fd`](ft_putendl_fd.c)	  - Writes char[] and \n into file directory.
- [`ft_putnbr_fd`](ft_putnbr_fd.c)	      - Writes int into file directory.

## Libft Bonus
- [`ft_lstnew`](ft_lstnew.c)	           - Creates new t_list.
- [`ft_lstadd_front`](ft_lstadd_front.c    - Creates new t_list in front of existing list.
- [`ft_lstsize`](ft_lstsize.c)	           - Returns size of list.
- [`ft_lstlast`](ft_lstlast.c)	           - Returns last element from list.
- [`ft_lstadd_back`](ft_lstadd_back.c)	   - Adds new t_list element at the end of list
- [`ft_lstdelone`](ft_lstdelone.c)	       - Takes t_list element and free its content.
- [`ft_lstclear`](ft_lstclear.c)	       - Removes and free all content from list for each t_list element.
- [`ft_lstiter`](ft_lstiter.c)	           - Iterates list ’lst’ and applies function to each element.
