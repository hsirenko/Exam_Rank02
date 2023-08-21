#include "ft_list_size.h"
#include <stdio.h>
#include <stdlib.h>


int	ft_list_size(t_list *begin_list)
{
	int result = 0;

	if (begin_list != 0)
	{
		result = 1 + ft_list_size(begin_list->next);
	}
	else
		return (0);
	return (result);

}

t_list *new(void *data)
{
	t_list *n;

	n = (t_list *)malloc(sizeof(t_list));
	if (n)
	{
		n->data = data;
		n->next = NULL;
	}
	return (n);
}

int main()
{
	t_list *p, *s, *j, *t;

	p = new("One");
	s = new("Two");
	j = new("Three");
	t = new("Four");
	p->next = s;
	s->next = j;
	j->next = t;
	printf("%d", ft_list_size(p));

	return (0);
}