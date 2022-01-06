#ifndef PHILOSOPHERS_H

# define PHILOSOPHERS_H

# include <pthread.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <sys/time.h>
# include <unistd.h>

// how to compile with threads:
// => gcc <args> <program> -lpthread

typedef struct s_node
{
	pthread_t th_philo;
	int id;
	suseconds_t time_last_meal;
	int meals_eaten;
	int death_status;
	void *st_data;
	struct s_node *next;
} t_node;

typedef struct s_data
{
	pthread_t th_time;
	struct timeval time;
	suseconds_t time_elapsed;
	t_node *philos;
	pthread_t th_deaths;
	int close_status;
	int nb_philos;
	int time_die;
	int time_eat;
	int time_sleep;
	int must_eat_nb;
} t_data;

void init_pars(t_data *info);
int init_philos(t_data *info);

t_node *new_node(int id, t_data *info);
void add_node_front(t_node **philos, t_node *new);
void add_node_back(t_node **philos, t_node *new);
t_node *get_node_wpos(t_node *philos, int pos);
int get_list_length(t_node *philos);

void loop_philo(t_data *info);
void *routine_philo(void *th_arg);

int parsing(t_data *info, int argc, char **argv);
int only_digit(char *str);
void set_pars_values(t_data *info, int nb, int i);
int valid_values(t_data *info);

void *update_time(void *th_arg);

long ft_atoi(const char *str);
int ft_isdigit(int c);
int ft_strlen(const char *str);
void *ft_calloc(int nb_elem, int size);
void *ft_memset(void *ptr, int c, int n);
int ft_strcmp(char *str1, char *str2);

#endif