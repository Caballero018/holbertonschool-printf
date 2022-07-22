# Function Printf
### This function was made in order for it to produce output according to a format.

## Project Requirements (general)
* Allowed editors: ```vi, vim, emacs```
* All your files will be compiled on ```Ubuntu 20.04``` LTS using ```gcc```, using the options ```-Wall -Werror -Wextra -pedantic -std=gnu89```
* All your files should end with a new line
* A ```README.md``` file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using ```betty-style.pl``` and ```betty-doc.pl```
* You are not allowed to use global variables
* No more than 5 functions per file
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you * do we won’t take them into account). We will use our own ```main.c``` files at compilation. ```Our main.c``` files might be different from the one shown in the examples.
* The prototypes of all your functions should be included in your header file called ```main.h```.
* Don’t forget to push your header file
* All your header files should be include guarded
* Note that we will not provide the ```_putchar``` function for this project

## More Info

> Authorized functions and macros
* ```write (man 2 write)```
* ```malloc (man 3 malloc)```
* ```free (man 3 free)```
* ```va_start (man 3 va_start)```
* ```va_end (man 3 va_end)```
* ```va_copy (man 3 va_copy)```
* ```va_arg (man 3 va_arg)```

### Prototype of the function:

> int _printf(const char *format, ...);

### Compilation
> gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c


### Each format specifier starts with a percent sign and ends with a letter.
 
| Function  | Letter  | Description |
| :------ |:--------------:| :---------------------|
| `func_char` | %c | Print a single character. |
| `func_string`  | %s  | Print a string of characters. |
| `func_decimal` | %d, %i   | Print a decimal (base 10) number. |
| `func_unsigned_integer` |%u  | Print an unsigned decimal (base 10) number. |
| `func_percent` | %% | Print a percent sign ( also works). |
| `func_binary` | %b | The unsigned int argument is converted to binary. |
| `func_octal` | %o | Print a number in octal (base 8). |
| `func_hex` | %x  |  Print a number in hexidecimal (base 16) |
| `func_HEX` | %X   |  Print a number in hexidecimal (base 16) in capital letters |
| `func_hex` | %S  | Character string (terminated in '\0' |
| `func_HEX` | %p   | Memory address (pointer) |

## \_printf function examples.

> Example 1:

```\_printf("%d\n", 100);```
  
  Expect output:
  
```100```
> Example 2:

```\_printf("%s\n", "hello world");```
   
   Expect output:
   
```hello world```
  
> Example 3:
 
```int var = 200;```

```\_printf("%i\n", var);```
   
   Expect output:
   
```200```
   
> Example 4:
 
```char c = 's'; ```
 
```\_printf("%c\n", c);```
 
Expect output:

```s```

## Flowchart

| Main function | Get_functions | Format_functions |
| :------: |:--------------:| :------------: |
|<img width="530" height="600" alt="image" src="https://user-images.githubusercontent.com/106556798/180509948-089ca082-856e-47ad-b16c-4d9655580ce4.png">|<img width="390" height="600" alt="image" src="https://user-images.githubusercontent.com/106556798/180506736-4234b657-ff3f-4cec-a666-afe4f3dd980b.png">|<img width="350" height="600" alt="image" src="https://user-images.githubusercontent.com/106556798/180505066-244a2448-881f-43aa-b72f-b77552c054da.png">|

## Authors

<a href = 'https://www.github.com/Crisgrva'> <img width = '32px' align= 'center' src="https://raw.githubusercontent.com/rahulbanerjee26/githubAboutMeGenerator/main/icons/github.svg"/></a> [@Alejandro Caballero](https://github.com/Caballero018) | [@Juan David Otalorá](https://github.com/otalorajuand)

<a href = 'https://www.twitter.com/crisgrvc'> <img width = '32px' align= 'center' src="https://raw.githubusercontent.com/rahulbanerjee26/githubAboutMeGenerator/main/icons/twitter.svg"/></a> [@Alejand51178128](https://twitter.com/Alejand51178128) | [@Juan David](https://twitter.com/juandotalora)
