/*
** my_show_str_base.c for my_show_str_base.c in /home/mathie_g/Tek_1_projects/Unix_system/my_printf/PSU_2014_my_printf/fcts
** 
** Made by killian mathieu
** Login   <mathie_g@epitech.net>
** 
** Started on  Sun Apr 12 12:02:01 2015 killian mathieu
** Last update Sun Apr 12 19:23:25 2015 killian mathieu
*/

#include <stdlib.h>

void	my_showstr_oct(char *str)
{
  int	a;
  int	len;
  char	*oct;

  len = my_strlen(str);
  my_putchar('a');
  oct = "01234567";
  str = malloc(sizeof(len));
  a = 0;
  while (str[a] != '\0')
    {
      if (32 <= str[a] < 127)
	my_putchar(str[a]);
      else
	{
	  my_putchar(92);
	  my_putnbr_base(my_getnbr(str[a]), str);
	}
      a = a + 1;
    }
  free(str);
}
