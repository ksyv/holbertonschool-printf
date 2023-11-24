# Holberton School - C Project - _printf()

## Description

### Project description

This project is a custom implementation of the printf function in C with its most important features, it was made in the software development program of [Holberton School](https://www.holbertonschool.com/).

### Project Requirements

**The `_printf` function was coded on an Ubuntu 20.04 LTS machine with `gcc` version 11.4.0**

**Here are the options to be used for the compilation :**

```
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```

- Allowed editors: `vi`, `vim`, `emacs`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the `Betty style`. It will be checked using 'betty-style.pl' and 'betty-doc.pl'
- You are not allowed to use global variables
- No more than 5 functions per file
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called `main.h`
- Don’t forget to push your header file
- All your header files should be include guarded
- Note that we will not provide the `_putchar` function for this project

The following functions and macros are authorized for use in this project:

- write (man 2 write)
- malloc (man 3 malloc)
- free (man 3 free)
- va_start (man 3 va_start)
- va_end (man 3 va_end)
- va_copy (man 3 va_copy)
- va_arg (man 3 va_arg)

### _printf() decription

The _printf function is a custom implementation of the printf function in the C programming language. It prints formatted output to the standard output.

The format string provided in the 'format' argument can contain normal text characters and format specifiers that start with the '%' character.

**Supported Format Specifiers**

| Specifier  | Data type | Description |
| ------------- |:-------------:|:-------------:|
| %c      | int    | Convert an int to an unsigned character and print the resulting character  |
| %s      | char * | Print a string pointed to by a char *  |
| %%      | char   | Print a single % character  |
| %d      | int    | Print integer in decimal |
| %i      | int    | Print integer in decimal and other base like octal or hexa|

**MAN page**

To display the man page of _printf function run this command :
`man ./man_3_printf`

## EXAMPLES

**String (%s)**
```
_printf("%s", "Hello, world!\n");
```
Output:
Hello, world!

**Character (%c)**
```
_printf("Character: %c\n", 'C');
```
Output :
Character: C

**Decimal (%i, %d)**
```
_printf("Decimal: %d, Integer: %i\n", 4, 2);
```
Output :
Decimal: 4, Integer: 2

**Percent sign (%%)**
```
_printf("Discount: 100%%!\n");
```
Output:
Discount: 100%!

## TESTING

### EXAMPLES

**INPUT**

![Testing's input](/images_readme/testing_input.png)

**OUTPUT**

![Testing's output](/images_readme/testing_output.png)

### VALGRIND

![Valgrind's output](/images_readme/valgrind_output.png)

## FLOWCHARTS

### _printf()

![_printf()'s flowchart](/images_readme/flowchart_printf.png)

### choice_function()

![choice_function()'s flowchart](/images_readme/flowchart_choicefunction.png)