/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 20:51:56 by dlerma-c          #+#    #+#             */
/*   Updated: 2021/08/31 20:51:57 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(int argc, char **argv)
{
	int		fd;
	char	*archive;

	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
		{
			printf("(%d)Error al abrir el archivo.\n", fd);
			return (0);
		}
		archive = get_next_line(fd);
		printf("\n\n\tArchivo: \n%s", archive);
		archive = get_next_line(fd);
		printf("%s", archive);
		system("\nleaks gnl.out");
	}
	else
		printf("Argumentos mal introducidos");
	return (0);
}
