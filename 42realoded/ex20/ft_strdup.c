//#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*copy;
	int		i;
	int		len;

	len = 0;
	while (src[len])
		len++;

	copy = (char *)malloc(sizeof(char) * (len + 1));
	if (!copy)
		return (NULL);

	i = 0;
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/*
int main(void)
{
	char *original;
	char *copia;

	original = "original";
	copia = ft_strdup(original);

	if (!copia)
	{
		printf("Error en malloc\n");
		return (1);
	}

	printf("Original: %s\n", original);
	printf("Copia:    %s\n", copia);

	free(copia);
	return (0);
}
*/