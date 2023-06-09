#ifndef MINITALK_H
# define MINITALK_H

#include <stdio.h>
#include <time.h>
#include <sys/wait.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>
#include <string.h>

void 	bittochar(int byte);
void	ft_putchar_fd(char c, int fd);
int	ft_atoi(const char *str);
int	ft_putnbr(int nb);

#endif