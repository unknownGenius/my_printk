/*
** my_printf.c for my printf in /home/mathie_g/Tek_1_projects/Unix_system/my_printf/PSU_2015_my_printf
** 
** Made by killian mathieu
** Login   <mathie_g@epitech.net>
** 
** Started on  Tue Apr  7 08:24:33 2015 killian mathieu
** Last update Sun Apr 12 19:36:22 2015 killian mathieu
*/

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "../include/my.h"

void	printdi(const char *format, ...)
{
  va_list	args;
  int		a;
  int		d;

  a = 0;
  va_start(args, format);
  while (format[a] != '\0')
    {
      if (format[a] == '%' && (format[a + 1] == 'd' || format[a + 1] == 'i'))
	{
	  d = va_arg(args, int);
	  my_put_nbr(d);
	}
      a++;
    }
  va_end(args);
}

void	printu(const char *format, ...)
{
  va_list	args;
  int		a;
  unsigned int	u;

  a = 0;
  va_start(args, format);
  while(format[a] != '\0')
    {
      if (format[a] == '%' && format[a + 1] == 'u')
	{
	  u = va_arg(args, unsigned int);
	  my_put_nbr_unsigned(u);
	}
      a++;
    }
  va_end(args);
}

void	printsS(const char *format, ...)
{
  va_list	args;
  int		a;
  char		*s;

  a = 0;
  va_start(args, format);
  while (format[a] != '\0')
    {
      if (format[a] == '%' && format[a + 1] == 's')
	{
	  s = va_arg(args, char*);
	  my_putstr(s);
	}
      a++;
    }
  va_end(args);
}

void	printb(const char *format, ...)
{
  va_list	args;
  int		a;
  char		*str;

  a = 0;
  str = "01";
  va_start(args, format);
  while (format[a] != '\0')
    {
      if (format[a] == '%' && format[a + 1] == 'b')
	{
	  a = va_arg(args, int);
	  my_putnbr_base(a, str);
	}
      a++;
    }
  va_end(args);
}

void	printo(const char *format, ...)
{
  va_list	args;
  unsigned int	a;
  char		*str;

  a = 0;
  str = "01234567";
  va_start(args, format);
  while (format[a] != '\0')
    {
      if (format[a] == '%' && format[a + 1] == 'o')
	{
	  a = va_arg(args, unsigned int);
	  my_putnbr_base(a, str);
	}
      a++;
    }
  va_end(args);
}

void	printxX(const char *format, ...)
{
  va_list	args;
  int		a;
  char		*str1;
  char		*str2;

  a = 0;
  str1 = "0123456789abcdef";
  str2 = "0123456789ABCDEF";
  va_start(args, format);
  while (format[a] != '\0')
    {
      if (format[a] == '%' && format[a + 1] == 'x')
	{
	  a = va_arg(args, unsigned int);
	  my_putnbr_base(a, str1);
	}
      if (format[a] == '%' && format[a + 1] == 'X')
	{
	  a = va_arg(args, unsigned int);
	  my_putnbr_base(a, str2);
	}
      a++;
    }
  va_end(args);
}

int	my_printf(const char *format, ...)
{
  va_list	args;
  int		a;

  a = 0;
  while (format[a] != '\0')
    {
      printdi(format);
      printsS(format);
      printxX(format);
      printo(format);
      printb(format);
      printu(format);
      a++;
    }
  return (0);
}

int	main(int argc, char **argv)
{
  char		*str;
  int		a;
  unsigned int	b;

  a = 35;
  b = 20;
  str = "yo tout le monde";
  my_printf("%i", a);
  return (0);
}
