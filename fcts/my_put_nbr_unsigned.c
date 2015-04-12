/*
** my_put_nbr.c for my_put_nbr in /home/mathie_g/rendu/Piscine04/Piscine_C_J04
** 
** Made by killian mathieu
** Login   <mathie_g@epitech.net>
** 
** Started on  Fri Mar  6 22:25:57 2015 killian mathieu
** Last update Fri Apr 10 13:43:10 2015 killian mathieu
*/

int	my_put_nbr_unsigned(unsigned int nb)
{
  int	md;
  
  md = 1;
  if (nb >= 0)
    {
      while (nb / md >= 10)
	md = md * 10;
      while (md != 0)
	{
	  my_putchar('0' + (nb / md) % 10);
	  md = md / 10;
	}
      return (0);
    }
  else
    return (0);
}
