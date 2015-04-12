/*
** my_putnbr_base.c for my_putnbr_base in /home/mathie_g/Tek_1_projects/Unix_system/my_printf/PSU_2014_my_printf/fcts
** 
** Made by killian mathieu
** Login   <mathie_g@epitech.net>
** 
** Started on  Sun Apr 12 10:31:10 2015 killian mathieu
** Last update Sun Apr 12 11:17:05 2015 killian mathieu
*/

void	my_putnbr_base(int nb, char *base)
{
  int	result;
  int	div;
  int	size_base;

  size_base = my_strlen(base);
  div = 1;
  while ((nb / div) >= size_base)
    div = div * size_base;
  while (div > 0)
    {
      result = (nb / div) % size_base;
      my_putchar(base[result]);
      div = div / size_base;
    }
}
