<p>
  <h1 align="center">PRINTF 🖨️</h1>
</p>

This is project PRINTF, a self-made clone of the C version of [printf(3)](https://man7.org/linux/man-pages/man3/printf.3.html). 
My version can display the following types of variables :
- Type c for character
- Type s for string
- Type p for pointer address
- Type d for decimal integer
- Type u for unsigned integer
- Type x for hexadecimal
- Type X for HEXADECIMAL
Creating your own version of printf teaches how to work with different kind of variables but most importly,
you discover how a function with an unknown quantity of arguments works.
Indeed, the prototype of printf is the following one :
int	ft_printf(const char *format, ...)
As you see, it takes a string in first argument, which will hold all the characters and variables that we want to display.
With printf we identify a variable by putting a '%' before it's type.
For example we can have something like :
ft_printf("Hello world %d, variable);
