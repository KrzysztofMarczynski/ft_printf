# ft_printf

Custom implementation of the `printf` function written in C.

This project recreates the behavior of the standard `printf` function from `<stdio.h>`.
The goal is to understand how formatted output works internally and how variadic
functions operate in C.

The implementation parses a format string and prints the corresponding values
based on format specifiers.

---

# Features

The function supports the following conversion specifiers:

* `%c` print a character
* `%s` print a string
* `%p` print a pointer address
* `%d` print a decimal number
* `%i` print an integer
* `%u` print an unsigned integer
* `%x` print a hexadecimal number (lowercase)
* `%X` print a hexadecimal number (uppercase)
* `%%` print a percent sign

The function returns the number of printed characters just like the original `printf`.

---

# How It Works

`ft_printf` processes the format string character by character.

When it encounters `%`, it reads the next character and determines the
type of value that should be printed.

The function uses **variadic arguments** from `<stdarg.h>`:

* `va_start` – initializes the argument list
* `va_arg` – retrieves arguments
* `va_end` – cleans up the argument list

Each conversion type is handled by a dedicated helper function.

---

# Example

Example usage:

```c
#include "ft_printf.h"

int main()
{
    ft_printf("Hello %s!\n", "world");
    ft_printf("Number: %d\n", 42);
    ft_printf("Hex: %x\n", 255);
}
```

Output:

```
Hello world!
Number: 42
Hex: ff
```

---

# Installation

Clone the repository:

```bash
git clone https://github.com/KrzysztofMarczynski/ft_printf.git
cd ft_printf
```

Compile the project:

```bash
make
```

This will create the static library:

```
libftprintf.a
```

---

# Usage

Include the header in your project:

```c
#include "ft_printf.h"
```

Compile your program together with the library:

```bash
gcc main.c libftprintf.a
```

Example:

```c
#include "ft_printf.h"

int main()
{
    ft_printf("Value: %d\n", 123);
    return 0;
}
```

---

# Project Structure

```
ft_printf/
│
├── ft_printf.c
├── ft_putchar.c
├── ft_putstr.c
├── ft_putnbr.c
├── ft_puthex.c
├── ft_putptr.c
│
├── ft_printf.h
├── Makefile
└── README.md
```

---

# Learning Goals

This project helped me understand:

* variadic functions in C
* format string parsing
* number base conversion
* modular C code design
* building static libraries
* low-level output using `write()`
