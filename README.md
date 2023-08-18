<p>
  <h1 align="center">PRINTF 🖨️</h1>
</p>

This is project PRINTF, a self-made clone of the C version of [printf(3)](https://man7.org/linux/man-pages/man3/printf.3.html). 
\
My version can display the following types of variables :
  - Type c for character
  - Type s for string
  - Type p for pointer address
  - Type d for decimal integer
  - Type u for unsigned integer
  - Type x for hexadecimal
  - Type X for HEXADECIMAL
\
<p>
Creating your own version of printf teaches how to work with different kind of variables but most importly,
you discover how a function with an unknown quantity of arguments works.
Indeed, the prototype of printf is the following one :
int	ft_printf(const char *format, ...)
As you see, it takes a string in first argument, which will hold all the characters and variables that we want to display.
And on the other hand, the second argument is undefined, that's because the number of variables that you want to print is never the same.
For example we can have something simple like :
</p>

```C
int  main(void)
{
  int  variable;
  int  printf_result;

  variable = 1;
  printf_result = ft_printf("Hello world %d\n", variable);
  ft_printf("printf_result = %d\n", printf_result);
}
```
<p align="center">
  <img width="40%" alt="printftest" src="https://github.com/Vlad-PLK/PRINTF/assets/61476758/ff41c3e9-b6e4-4317-94ad-a54b83b70e6f">
</p>
Or to continue something more extended : 

```C
int	main(void)
{
	int		d1;
	int		d2;
	char	c1;
	char	*str1;

	d1 = 1;
	d2 = 2;
	c1 = 'H';
	str1 = ft_strdup("ello World");

	ft_printf("%d + %d = 3, %c%s, as you can see we can a have a various number of variables\n", d1, d2, c1, str1);
	free(str1);
}
```
<p align="center">
    <img width="633" alt="more variables" src="https://github.com/Vlad-PLK/PRINTF/assets/61476758/55cf25be-2189-41e8-8c29-16015f70fc83">
</p>
As you can see in the first example we have our message and on the second line of it we have 14. 14 corresponds to the return value of printf which is always the number of characters that it displayed.
Finally to make a function with an unknown number of variables we use a set of function from STDARG.H library.
Moreover we use va_start, va_arg and va_end which provide a portable way to access the arguments to a function when the function takes a variable number of arguments.
First of all we will initialize those functions with va_start. Va_start will take the first argument of printf (const char *format) which will provide us all the variables that we want to display.
And after that we use va_arg.
<br></br>
<p>
  <img width="594" alt="va_arg" src="https://github.com/Vlad-PLK/PRINTF/assets/61476758/be6f585e-c5b8-4380-a794-34bfe90f05b7">
</p>
Here is how for instance a print a char using those functions : 

```C
int	ft_printf(const char *format, ...)
{
  ///creation and initialization of the list///
	va_list	list_arg;
	int		i;
	size_t	nb_cara;

	va_start(list_arg, format);
	i = 0;
	nb_cara = 0;
  ...

size_t	ft_check_type(char type, va_list list_arg, size_t nb_cara)
{
  ///passing the list with the current argument to the function///
	if (type == 'c')
		ft_char_type(list_arg, &nb_cara);
  ...

void	ft_char_type(va_list list_arg, size_t *nb_cara)
{
	char	c;

  ///defining the type of the current variable and use it as we need///
	c = (char)va_arg(list_arg, int);
	write(1, &c, 1);
	(*nb_cara)++;
}
```
