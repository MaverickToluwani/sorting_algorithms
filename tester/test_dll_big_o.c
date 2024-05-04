#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct DLL
{
	int n;
	struct DLL *next;
	struct DLL *prev;
} DLL_t;

int main(void)
{
	DLL_t *head;
	head = malloc(sizeof(DLL_t*));
	DLL_t *first = malloc(sizeof(DLL_t*)); 
	DLL_t *second = malloc(sizeof(DLL_t*));
	DLL_t *third = malloc(sizeof(DLL_t*));
	
	head->next = NULL;
	head->prev = NULL;
	head->n = 23;

	head->next = first;
	first->prev = head;

	first->next = second;
	second->prev = first;

	second->next = third;
	third -> prev = second;

	first->n = 10;
	second->n = 21;
	third->n = 0;

	DLL_t *tmp = head;
	/*while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}*/

	while (tmp != NULL)
	{
		DLL_t *t = tmp;
		while(t != NULL)
		{
			if (t->n < t->prev->n)
			{
				int tm = t->n;
				t->n = t->prev->n;
				t->prev->n = tm;
			}
			t = t->prev;
		}
		printf("%d, ", t->n);
		tmp = tmp->next;
	}

	return(0);
}
