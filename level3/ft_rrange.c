#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	size;
	int *ptr;
	int	i;
	
	size = end - start;
	i = 0;
	if (size)
	{
		ptr = (int *)malloc(sizeof(int) * size);
		if (ptr)
		{
			while (start <= end)
			{
				ptr[i] = end;
				i++;
				end--;
			}
			return(ptr);
		}
	}
	return (NULL);
}

int main(int argc, char **argv)
{
	int	*lst;
	int	*head;

	lst = ft_range(atoi(argv[1]), atoi(argv[2]));
	head = lst;
	while (*lst)
	{
		printf("%i\n", *lst);
		lst++;	
	}
	free(head);
	return (0);
}
