/*
** my_put_nbr.c for my_put_nbr in /home/mathie_g/rendu/Piscine04/Piscine_C_J04
** 
** Made by killian mathieu
** Login   <mathie_g@epitech.net>
** 
** Started on  Fri Mar  6 22:25:57 2015 killian mathieu
** Last update Thu Apr  9 20:18:43 2015 killian mathieu
*/

int	my_put_nbr(int nb)
{
  int	md;
  
  md = 1;
  if (nb < 0)
    {
      nb = nb * -1;
      my_putchar('-');
    }
  while (nb / md >= 10)
    md = md * 10;
  while (md != 0)
    {
      my_putchar('0' + (nb / md) % 10);
      md = md / 10;
    }
  return (0);
}
