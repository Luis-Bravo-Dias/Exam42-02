#include <stdlib.h>
#include "list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*list_ptr;

	if (begin_list == NULL || *begin_list == NULL)
		return;
	list_ptr = *begin_list;
	if (cmp(list_ptr->data, data_ref) == 0)
	{
		*begin_list = list_ptr->next;
		free(list_ptr);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	list_ptr = *begin_list;
	ft_list_remove_if(&list_ptr->next, data_ref, cmp);
}
