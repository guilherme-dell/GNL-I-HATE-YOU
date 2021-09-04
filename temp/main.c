# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>

int	ft_strlen(const char *str)
{
	int	counter;

	counter = 0;
	if (!str)
		return (0);
	while (str[counter] != '\0')
		counter++;
	return (counter);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dest_len)
{
	size_t	i;

	if (!dst || !src)
		return (0);
	i = 0;
	if (dest_len != 0)
	{
		while (src[i] != '\0' && i < (dest_len - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

char	*ft_strdup(const char *str)
{
	char	*cpy;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(str) + 1;
	cpy = malloc(len * sizeof(char));
	if (!cpy)
		return (0);
	while (str[i])
	{
		cpy[i] = str[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	sizestr;

	sizestr = ft_strlen(str);
	if (!str)
		return (0);
	if (start > sizestr)
		return (ft_strdup(""));
	sub_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub_str)
		return (0);
	ft_strlcpy(sub_str, (str + start), len + 1);

	sub_str[len] = '\0';
	return (sub_str);
}



int main(void)
{
	int		len;
	char	nome1[10] = "CAMOLE";
	char	nome2[20] = "GUA";
	char 	*teste;

	len = ft_strlen(nome1);
	teste = ft_strlcpy(nome1, 0, len);

	printf("%s\n",teste);

	return (0);
}
