*This project has been created as part of the 42 curriculum by leolefeb.*

# Libft

## Description

Libft is my first C library. The goal is to re-implement a set of standard
libc functions, add a few useful extra functions, and a small linked-list
toolkit, all packaged in a static library `libft.a` that can be reused in
later 42 projects.

The library contains three parts:

- **Libc functions** (`ft_` prefix): `isalpha`, `isdigit`, `isalnum`,
  `isascii`, `isprint`, `strlen`, `memset`, `bzero`, `memcpy`, `memmove`,
  `strlcpy`, `strlcat`, `toupper`, `tolower`, `strchr`, `strrchr`, `strncmp`,
  `memchr`, `memcmp`, `strnstr`, `atoi`, `calloc`, `strdup`.
- **Additional functions**: `ft_substr`, `ft_strjoin`, `ft_strtrim`,
  `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`, `ft_putchar_fd`,
  `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`.
- **Linked lists** (`t_list`): `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`,
  `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`,
  `ft_lstiter`, `ft_lstmap`.

Design notes: no global variables, helper functions are `static`, every
allocation is checked, and every function that returns allocated memory
returns `NULL` on failure without leaking what was allocated before.

## Instructions

```sh
make        # builds libft.a (flags: -Wall -Wextra -Werror, archive with ar)
make clean  # removes object files
make fclean # removes object files and libft.a
make re     # fclean + all
```

Use it in another project:

```sh
cc main.c -L. -lft -I.     # with libft.h and libft.a in the current folder
```

## Resources

- `man 3` pages of each re-implemented function, `man ar`
- The 42 Norm and `norminette`
- GNU C Library documentation, C99/C11 references (`restrict`, `size_t`)

**AI usage:** AI (Claude) was used as a review/fix tool on my own code
(not to write the project from scratch): finding bugs, checking edge cases
against the libc, and applying the Norm to every file. Concerned parts:
`ft_memcpy`/`ft_memmove`/`ft_memset` prototypes and overlap handling,
`ft_memcmp`, `ft_split`, `ft_strtrim`, `ft_substr`, `ft_itoa`, the `ft_lst*`
functions, the Makefile and `libft.h`. I reviewed and understand every change.
