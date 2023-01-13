/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 20:51:34 by yuske             #+#    #+#             */
/*   Updated: 2023/01/13 23:34:05 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
// #include "libft/libft.h"
#include <stdio.h>

// int	main(void)
// {
// 	char			c;
// 	int				chr;
// 	unsigned char	uc1;
// 	unsigned char	uc2;

// 	c = '~';
// 	chr = 126;
// 	uc1 = 126;
// 	uc2 = 252;
// 	printf("   [%%] [c] [s]\n");
// 	ft_printf("ft [%%] [c] [s]\n");
// 	printf("%c %c %c %c\n", c, chr, uc1, uc2);
// 	ft_printf("%c %c %c %c\n", c, chr, uc1, uc2);
// 	printf("28%c \n", 28);
// 	ft_printf("28%c \n", 28);
// 	printf("27%c \n", 27);
// 	ft_printf("27%c \n", 27);
// 	// printf("27%c %%%%\n", 27);
// 	// ft_printf("27%c %%%%\n", 27);
// 	// printf("27%c 0123456789\n", 27);
// 	// ft_printf("27%c 0123456789\n", 27);
// 	// printf("27%c 0123456789abcdefghijklmnopqrstuvwxyz\n", 27);
// 	// ft_printf("27%c 0123456789abcdefghijklmnopqrstuvwxyz\n", 27);
// 	printf("% %%%%%%%%%%%%%%% \n");
// 	ft_printf("% %%%%%%%%%%%%%%% \n");
// 	printf("t\tv\vf\fr\rn\n");
// 	ft_printf("t\tv\vf\fr\rn\n");
// 	return (0);
// }

		// printf("   [%d] %c %p\n", i, i, (void *)i);//doesn't work
// int	main(void)
// {
// 	int				i;

// 	i = 0;
// 	while (i <= UCHAR_MAX)
// 	{
// 		printf("   [%d] %c\n", i, i);
// 		ft_printf("ft [%d] %c\n", i, i);
// 		i++;
// 	}
// 	printf("loop out    [%d] %c\n", i, i);
// 	ft_printf("loop out ft [%d] %c\n", i, i);
// 	return (0);
// }

// int	main(void)
// {
// 	int				i;

// 	i = CHAR_MIN;
// 	while (i <= CHAR_MAX)
// 	{
// 		printf("   [%d] %c\n", i, i);
// 		ft_printf("ft [%d] %c\n", i, i);
// 		i++;
// 	}
// 	printf("loop out    [%d] %c\n", i, i);
// 	ft_printf("loop out ft [%d] %c\n", i, i);
// 	printf("\n");
// 	while (i >= CHAR_MIN)
// 	{
// 		i--;
// 		printf("   [%d] %c\n", i, i);
// 		ft_printf("ft [%d] %c\n", i, i);
// 	}
// 	printf("loop out    [%d] %c\n", i, i);
// 	ft_printf("loop out ft [%d] %c\n", i, i);
// 	return (0);
// }

int	main(void)
{
	printf("   %d\n", printf("   printf\n"));
	ft_printf("ft %d\n", ft_printf("ft_printf\n"));
	printf("   %d\n", printf("   printf %d\n", 13));
	ft_printf("ft %d\n", ft_printf("ft_printf %d\n", 13));
	printf("   %zd\n", write(1, "write\n", 6));
	ft_printf("ft %d\n", write(1, "write\n", 6));
	//mandatory yet to support 'z'
	return (0);
}

// int	main(void)
// {
// 	char	*str1;
// 	char	*str2;
// 	char	str3[100];

// 	str1 = NULL;
// 	str2 = "<< Hello, !?>>";
// 	printf("   [s]\n");
// 	ft_printf("ft [s]\n");
// 	printf("%c %c %s %s [%s]\n", '~', 126, str1, str2, str3);
// 	ft_printf("%c %c %s %s [%s]\n", '~', 126, str1, str2, str3);
// 	printf("%s\n", str3);
// 	ft_printf("%s\n", str3);
// 	strcpy(str3, "(((<<<{{{[[[ ]]]}}}>>>)))_/:;");
// 	printf("%s\n", str3);
// 	ft_printf("%s\n", str3);
// 	return (0);
// }

// x X
// int	main(void)
// {
// 	unsigned int	ui;

// 	ui = UINT_MAX - 1;
// 	printf("[hex]\n");
// 	printf("   %x %x %x\n", ui, 2147483647, UINT_MAX);
// 	ft_printf("ft %x %x %x\n\n", ui, 2147483647, UINT_MAX);
// 	printf("\n");
// 	printf("[HEX]\n");
// 	printf("   %X %X %X\n", ui, 2147483647, UINT_MAX);
// 	ft_printf("ft %X %X %X\n\n", ui, 2147483647, UINT_MAX);
// 	return (0);
// }
	// printf("(lX)\n");
	// printf("   %x %lx\n", 2147483647, 2147483648);
	// printf("   %X %lX\n", 2147483647, 2147483648);

//PTR
// int	main(void)
// {
// 	void	*ptr;

// 	ptr = (void *)malloc(100);
// 	printf("  [PTR]\n");
	// printf("%p\t%p\t%p\t%p\n", &i, (void *)SIZE_MAX, NULL, (void *)0);
// 	ft_printf("%p\t%p\t%p\t%p\n\n", &i, SIZE_MAX, NULL, 0);
// 	printf("   write:\t%p\n", write);
// 	ft_printf("ft write:\t%p\n", write);
// 	printf("read:\t\t%p\n", read);
// 	ft_printf("read:\t\t%p\n", read);
// 	printf("printf:\t\t%p\n", printf);
// 	ft_printf("printf:\t\t%p\n", printf);
// 	printf("scanf:\t\t%p\n", scanf);
// 	ft_printf("scanf:\t\t%p\n", scanf);
// 	printf("fprintf:\t%p\n", fprintf);
// 	ft_printf("fprintf:\t%p\n", fprintf);
// 	printf("exit:\t\t%p\n", exit);
// 	ft_printf("exit:\t\t%p\n", exit);
// 	printf("free:\t\t%p\n", free);
// 	ft_printf("free:\t\t%p\n", free);
// 	printf("malloc:\t\t%p\n", malloc);
// 	ft_printf("malloc:\t\t%p\n", malloc);
// 	printf("calloc:\t\t%p\n", calloc);
// 	ft_printf("calloc:\t\t%p\n", calloc);
// 	printf("realloc:\t%p\n", realloc);
// 	ft_printf("realloc:\t%p\n", realloc);
// 	printf("abort:\t\t%p\n", abort);
// 	ft_printf("abort:\t\t%p\n", abort);
// 	printf("sigabrt:\t%p\n", (void *)SIGABRT);
// 	ft_printf("sigabrt:\t%p\n", (void *)SIGABRT);
// 	printf("sigsegv:\t%p\n", (void *)SIGSEGV);
// 	ft_printf("sigsegv:\t%p\n", (void *)SIGSEGV);
// 	printf("sigbus:\t\t%p\n", (void *)SIGBUS);
// 	ft_printf("sigbus:\t\t%p\n", (void *)SIGBUS);
// 	printf("   NULL:\t%p\n", NULL);
// 	ft_printf("ft NULL:\t%p\n", NULL);
// 	printf("0:\t\t%p\n", (void *)0);
// 	ft_printf("ft 0:\t\t%p\n", (void *)0);
// 	printf("\\0:\t\t%p\n", (void *) '\0');
// 	ft_printf("ft \\0:\t\t%p\n", (void *) '\0');
// 	printf("charmax:\t%p\n", (void *)CHAR_MAX);
// 	ft_printf("ft charmax:\t%p\n", (void *)CHAR_MAX);
// 	printf("ucharmax:\t%p\n", (void *)UCHAR_MAX);
// 	ft_printf("ft ucharmax:\t%p\n", (void *)UCHAR_MAX);
// 	printf("charmin:\t%p\n", (void *)CHAR_MIN);
// 	ft_printf("ft charmin:\t%p\n", (void *)CHAR_MIN);
// 	printf("intmax:\t\t%p\n", (void *)INT_MAX);
// 	ft_printf("ft intmax:\t%p\n", (void *)INT_MAX);
// 	printf("intmin:\t\t%p\n", (void *)INT_MIN);
// 	ft_printf("ft intmin:\t%p\n", (void *)INT_MIN);
// 	printf("uintmax:\t%p\n", (void *)UINT_MAX);
// 	ft_printf("ft uintmax:\t%p\n", (void *)UINT_MAX);
// 	printf("ulongmax:\t%p\n", (void *)ULONG_MAX);
// 	ft_printf("ft ulongmax:\t%p\n", (void *)ULONG_MAX);
// 	printf("sizemax:\t%p\n", (void *)SIZE_MAX);
// 	ft_printf("sizemax:\t%p\n", (void *)SIZE_MAX);
// 	printf("ssizemax:\t%p\n", (void *)SSIZE_MAX);
// 	ft_printf("ssizemax:\t%p\n", (void *)SSIZE_MAX);
// 	printf("uintptrmax:\t%p\n", (void *)UINTPTR_MAX);
// 	ft_printf("uintptrmax:\t%p\n", (void *)UINTPTR_MAX);
// 	printf("   mix: %p %p %p %p\n", NULL, write, (void *)UINTPTR_MAX, ptr);
// 	ft_printf("ft mix: %p %p %p %p\n", NULL, write, (void *)UINTPTR_MAX, ptr);
// 	return (0);
// }

// int	main(void)
// {
// 	printf("%d\t%d\t%d\t%d\n\n", 1234567, 0, INT_MAX, INT_MIN);
// 	ft_printf("%d\t%d\t%d\t%d\n", 1234567, 0, INT_MAX, INT_MIN);
// 	printf("%d\t%i\t%d\t%i\n\n", SHRT_MAX, SHRT_MIN, INT_MAX, INT_MIN);
// 	ft_printf("%d\t%i\t%d\t%i\n", SHRT_MAX, SHRT_MIN, INT_MAX, INT_MIN);
// 	printf("%i\t%d\t%i\t%d\n\n", SHRT_MAX + 1, SHRT_MIN - 1, INT_MAX - 1, INT_MIN + 1);
// 	ft_printf("%i\t%d\t%i\t%d\n", SHRT_MAX + 1, SHRT_MIN - 1, INT_MAX - 1, INT_MIN + 1);
// 	//try intentional overflow, too. success if error occurs in both.

// 	printf("u\n");
// 	printf("org:\t%u %u %u %u %u %lu\n", 75692, 100, 0, UINT_MAX, CHAR_MAX, ULONG_MAX);
// 	ft_printf("ft_:\t%u %u %u %u %u %u\n\n", 75692, 100, 0, UINT_MAX, CHAR_MAX, ULONG_MAX);
// 	printf("org:\t%u %u %u %u %u\n", INT_MAX, INT_MIN, CHAR_MIN, UINT_MAX + 1, UINT_MAX - 1);
// 	ft_printf("ft_:\t%u %u %u %u %u\n\n", INT_MAX, INT_MIN, CHAR_MIN, UINT_MAX + 1, UINT_MAX - 1);

// 	printf("#return\n");
// 	printf("   %d\n", printf("abc\t%c\t%s\t%d\t%i\t%u\t%x\t%X\t%p\t%%\n", 'c',
// 			"str", 1, 10, 100, 255, 255, &i));
// 	ft_printf("ft %d\n", ft_printf("abc\t%c\t%s\t%d\t%i\t%u\t%x\t%X\t%p\t%%\n\n", 'c',
// 			"str", 1, 10, 100, 255, 255, &i));
// 	return (0);
// }
