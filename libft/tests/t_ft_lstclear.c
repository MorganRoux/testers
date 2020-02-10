#include "t_libft.h"

int	t_ft_lstclear()
{
	t_list          *elem;
          t_list          *elem2;
         t_list          *elem3;
         t_list          *elem4;
         char            str [] = "lorem";
         char            str2 [] = "ipsum";
         char            str3 [] = "dolor";
         char            str4 [] = "sit";

         elem = ft_lstnew(ft_strdup(str));
         elem2 = ft_lstnew(ft_strdup(str2));
         elem3 = ft_lstnew(ft_strdup(str3));
         elem4 = ft_lstnew(ft_strdup(str4));
         elem->next = elem2;
         elem2->next = elem3;
         elem3->next = elem4;
	 ft_lstclear(&(elem2->next), &free );

	ft_print_list(elem);
                
	return (0);
}
