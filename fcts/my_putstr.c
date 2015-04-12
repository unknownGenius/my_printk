/*
** my_putstr.c for my_putstr in /home/mathie_g/rendu/Piscine04/Piscine_C_J04
** 
** Made by killian mathieu
** Login   <mathie_g@epitech.net>
** 
** Started on  Fri Mar  6 09:45:38 2015 killian mathieu
** Last update Fri Mar  6 18:17:09 2015 killian mathieu
*/

int	my_putstr(char *str)
{
  int	a;

  a = 0;
  while (str[a] != '\0')
    {
      my_putchar(str[a]);
      a = a + 1;
    }
  return (0);
}
