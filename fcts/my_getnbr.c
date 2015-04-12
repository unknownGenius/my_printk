/*
** my_getnbr.c for get nbr in /home/mathie_g/practice
** 
** Made by killian mathieu
** Login   <mathie_g@epitech.net>
** 
** Started on  Tue Mar 24 08:42:45 2015 killian mathieu
** Last update Tue Mar 24 16:41:53 2015 killian mathieu
*/

int	my_getnbr(char *str)
{
  int	a;
  int	b;

  a = 0;
  b = 0;
  while (str[b] != '\0')
    {
      if (str[b] >= '0' && str[b] <= '9')
	{
	  a = a * 10 + (str[b] - '0');
	  a = a + 1;
	}
      else
	return (0);
    }
  if (str[b] == '-')
    a = a * (-1);
  return (0);
}
