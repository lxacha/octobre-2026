*This project has been created by leolefeb.*

# Libft

# Description

Libft is my first C library. The goal is to re-implement a set of standard


The library contains three parts:

libc 
additionnal functions
linked-lists

Design notes: no global variables, helper functions are `static`, every
allocation is checked, and every function that returns allocated memory


#  Instructions

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
- peers review , student collaboration

*AI usage:*  was used as a review/fix tool on my own code
finding bugs, checking edge cases
against the libc, and applying the Norm to every file. Concerned parts:
`ft_memcpy`/`ft_memmove`/`ft_memset` prototypes and overlap handling,
`ft_memcmp`, `ft_split`, `ft_strtrim`, `ft_substr`, `ft_itoa`, the `ft_lst*`
I reviewed and understand every change .
