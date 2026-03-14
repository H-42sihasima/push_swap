#include "push_swap.h"
#include <stdio.h>

void	lst_print(t_node *lst)
{
	if (lst == NULL)
	{
		printf("[]\n");
		return ;
	}
	printf("[");
	for (; lst != NULL; lst = lst->next)
		printf("%d%s", lst->content, lst->next == NULL ? "]\n" : ", ");
}

int	main(void)
{
	t_node	*a;
	t_node	*b;

	b = NULL;
	a = NULL;
	ft_lstadd_back(&a, ft_lstnew(1));
	ft_lstadd_back(&a, ft_lstnew(2));
	ft_lstadd_back(&a, ft_lstnew(3));
	ft_lstadd_back(&a, ft_lstnew(5));
	printf("before ra : ");
	lst_print(a);
	ft_logic_ra(&a);
	printf("after ra : ");
	lst_print(a);
	ft_lstclear(&a);
	return (0);
}
