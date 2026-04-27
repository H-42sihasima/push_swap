/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 12:28:37 by sihasima          #+#    #+#             */
/*   Updated: 2026/04/25 17:20:19 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				content;
	int				index;
	struct s_list	*next;

}					t_node;

typedef enum s_stategy
{
	STRAT_SIMPLE,
	STRAT_MEDIUM,
	STRAT_COMPLEX,
	STRAT_ADAPTIVE
}					t_stategy;

typedef struct s_strategy
{
	t_stategy	strat;
	int			bench_mode;
	float		disorder;
	int			count_sa;
	int			count_sb;
	int			count_ss;
	int			count_pa;
	int			count_pb;
	int			count_ra;
	int			count_rb;
	int			count_rr;
	int			count_rra;
	int			count_rrb;
	int			count_rrr;
	int			total_ops;
}				t_config;
typedef struct s_data
{
	t_node			*stack_a;
	t_node			*stack_b;
}					t_data;
int					is_flags(char *arg);
int					is_number(char *str);
long				ft_atol(char *str);
void				add_to_stack(t_node **stack, int valeur);
void				init_config(t_config *config);
t_node				*ft_lstlast(t_node *stack_a);
t_node				*ft_lstnew(int content);
void				ft_lstadd_back(t_node **lst, t_node *new);
void				ft_lstclear(t_node **lst);
int					ft_lstsize(t_node *stack_a);
char				**ft_split(char const *s, char c);
char				*ft_substr(char const *s, unsigned int start, size_t len);
size_t				ft_strlen(const char *str);
int					ft_strcmp(char *s1, char *s2);
void				ra(t_node **a, t_config *config);
void				rb(t_node **b, t_config *config);
void				rr(t_node **a, t_node **b, t_config *config);
void				pa(t_node **stack_a, t_node **stack_b, t_config *t_config);
void				pb(t_node **stack_b, t_node **stack_a, t_config *t_config);
void				sa(t_node **stack_a, t_config *config);
void				sb(t_node **stack_b, t_config *config);
void				ss(t_node **stack_a, t_node **stack_b, t_config *config);
void				rra(t_node **stack_a, t_config *config);
void				rrb(t_node **stack_b, t_config *config);
void				rrr(t_node **stack_a, t_node **stack_b, t_config *config);
void				aff_error(char *arg);
void				free_stack(t_node **stack);
char				**ft_free(char **array);
void				exit_and_clean(char **array, t_node **stack_a);
int					count_argv(int argc, char **argv, int c);
char				**ft_argv_to_tab(int argc, char **argv, int c);
void				strategy(t_node **stack_a, t_node **stack_b,
						t_config *config);
int					is_sorted(t_node **stack_a);
void				ft_short_simple(t_node **stack_a, t_node **stack_b,
						t_config *config);
void				ft_medium_algo(t_node **stack_a, t_node **stack_b,
						t_config *config);
void				complex_algo(t_node **stack_a, t_node **stack_b,
						t_config *config);
void				ft_adaptive(t_node **stack_a, t_node **stack_b,
						t_config *config);
void				ft_assign_indexation(t_node **stack_a);
int					ft_calcule_w(t_node **stack_a);
int					ft_find_min(t_node *stack_a);
void				bring_to_top(t_node **stack_a, int min_value, int index,
						t_config *config);
int					ft_get_index(t_node *stack_a, int value);
void				ft_push_to_b(t_node **stack_a, t_node **stack_b, int w,
						t_config *config);
void				ft_push_to_a(t_node **stack_b, t_node **stack_a,
						t_config *config);
void				sort_three(t_node **stack_a, t_config *config);
void				sorted_five(t_node **stack_a, t_node **stack_b,
						t_config *config);
int					ft_find_max_bits(t_node **stack_a);
float				compute_disorder(t_node *stack_a);
void				aff_disorder(float n, int fd);
t_node				*parse_input(int argc, char **argv, t_config *config);
void				aff_bench(t_config *config);
void				aff_strategy(t_config *config);
int					is_duplicate(t_node *stack_a, int val);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
int					check_limits(long value);

#endif
