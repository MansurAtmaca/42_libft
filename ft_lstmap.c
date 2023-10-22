/* #include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *temp;

    ft_lstiter(lst, f);
    temp =malloc(sizeof(t_list));
    ft_lstdelone(temp, (*del));

} */