/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kame <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:56:18 by hel-kame          #+#    #+#             */
/*   Updated: 2022/11/15 19:02:15 by hel-kame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*src;
	t_list	*elem;
	t_list	*last;

	src = lst;
	elem = NULL;
	if (!lst)
		return (NULL);
	while (src != NULL)
	{
		last = ft_lstnew((*f)(elem->content));
		if (!last)
			return (elem);
		last = elem->new;
		return ()
}
