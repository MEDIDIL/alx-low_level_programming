0x02 Functions Nested loops
README.md



# Functions, nested loops

                


                

Project done during **Full Stack Software Engineering studies** at **ALX School**. It aims to learn about header files, functions, loops and nested loops in **C language**.

                


                

## Technologies

                

* C files are compiled using `gcc 4.8.4`

                

* C files are written according to the C90 standard

                

* Tested on Ubuntu 14.04 LTS

                


                

## Files

                

All of the following files are programs written in C:

                


                

| Filename | Description |

                

| -------- | ----------- |

                

| `0-Putchar.c` | Prints `Putchar` |

                

| `1-alphabet.c` | Prints the alphabet in lowercase |

                

| `2-print_alphabet_x10.c` | Prints 10 times the alphabet, in lowercase |

                

| `3-islower.c` | Checks for lowercase character |

                

| `4-isalpha.c` | Checks for alphabetic character |

                

| `5-sign.c` | Prints the sign of a number |

                

| `6-abs.c` | Computes the absolute value of an integer |

                

| `7-print_last_digit.c` | Prints the last digit of a number |

                

| `8-24_hours.c` | Prints every minute of the day |

                

| `9-times_table.c` | Prints the 9 times table, starting with 0 |

                

| `10-add.c` | Adds two integers and returns the result |

                

| `11-print_to_98.c` | Prints all natural numbers from `n` to `98` |

                

| `100-times_table.c` | Prints the `n` times table, starting with 0 |

                

| `101-natural.c` | Computes and prints the sum of all the multiplies of `3` or `5` below `1024` |

                

| `102-fibonacci.c` | Prints the first 50 Fibonacci numbers, starting with `1` and `2` |

                

| `103-fibonacci.c` | Finds and prints the sum of the even-valued terms |

                

| `104-fibonacci.c` | Finds and prints the first 98 Fibonacci numbers |





======================================


_putchar.c CODE



#include "main.h"

        #include <unistd.h>

        /**

         * _putchar - writes the character c to stdout

         * @c: The character to print

         *

         * Return: On success 1.

         * On error, -1 is returned, and errno is set appropriately.

         */

        int _putchar(char c)

        {

                return (write(1, &c, 1));

        }







=====================================



main.h CODE




#ifndef main_h

        #define main_h



        int _putchar(char);

        void print_alphabet(void);

        void print_alphabet_x10(void);

        int _islower(int c);

        int _isalpha(int c);

        int print_sign(int n);

        int _abs(int);

        int print_last_digit(int);

        void jack_bauer(void);

        void times_table(void);

        int add(int, int);

        void print_to_98(int n);

        void print_times_table(int n);



        #endif




=====================================


0-putchar.c CODE



#include "main.h"

        /**

         * main - print _putchar

         * is written by mbah

         * Return: 0

         */



        int main(void)

        {

        _putchar('_');

        _putchar('p');

        _putchar('u');

        _putchar('t');

        _putchar('c');

        _putchar('h');

        _putchar('a');

        _putchar('r');

        _putchar('\n');

        return (0);

        }





=====================================


1-alphabet.c CODE



#include "main.h"



        /**

         * print_alphabet - print all alphabet in lowercase

         */



        void print_alphabet(void)

        {

                char letter;



                for (letter = 'a'; letter <= 'z'; letter++)

                        _putchar(letter);



                _putchar('\n');

        }





=====================================


1-main.c CODE



#include "main.h"



        /**

         * main - check the code

         *

         * Return: Always 0.

         */

        int main(void)

        {

            print_alphabet();

            return (0);

        }




=====================================



2-print_alphabet_x10.c CODE




#include "main.h"



        /**

         * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,

         * followed by a new line

         */

        void print_alphabet_x10(void)

        {

                char ch;

                int i;



                i = 0;



                while (i < 10)

                {

                        ch = 'a';

                        while (ch <= 'z')

                        {

                                _putchar(ch);

                                ch++;

                        }

                        _putchar('\n');

                        i++;

                }

        }


