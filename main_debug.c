#include "get_next_line.h"

int	main(void)
{
	int		fd;
	char	*archive;
	fd = open("ficheros/fichero1", O_RDONLY);
	if (fd == -1)
	{
		printf("(%d)Error al abrir el archivo.\n", fd);
		return (0);
	}
	archive = 0;
	archive = get_next_line(fd);
	//printf("Archivo: %s", archive);
	free(archive);
	archive = get_next_line(fd);
	//printf("Archivo: %s", archive);
	free(archive);
	archive = get_next_line(fd);
	//printf("Archivo: %s", archive);
	free(archive);
	archive = get_next_line(fd);
	//printf("Archivo: %s", archive);
	/*while (archive)
	{
		//sleep(2);
		printf("Archivo: %s", archive);
		free(archive);
		archive = get_next_line(fd);
	}*/
    close(fd);
	system("\nleaks gnl.out");
	return (0);
}
