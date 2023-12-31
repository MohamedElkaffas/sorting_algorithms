#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#define INC 1
#define DEC -1

/**
 * struct listint_s - Doubly linked list node
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *, size_t);
void print_list(const listint_t *);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void quick_sort_rec(int *array, int lower, int higher, size_t size);
int lomuto_partition(int *array, int lower, int higher, size_t size);
void shell_sort(int *array, size_t size);
void counting_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void swap_nodes(listint_t **list, listint_t *node);
listint_t *get_dlistint_lelem(listint_t *h);
int getCantRep(int num);
int hoare_partition(int *array, int lowe, int higher, size_t size);
void shell_sort(int *array, size_t size);

void counting_sort(int *array, size_t size);
int findmax(int *array, size_t size);
int count(int *array, size_t size, int val);

/** 7 */
void merge_sort(int *array, size_t size);
void merge(int *array, int low, int middle, int high, int *temp);
void merge_sorty(int *array, int low, int high, int *temp);

/** 8 */
void heap_sort(int *array, size_t size);

/** 9 */
void radix_sort(int *array, size_t size);
void counting_sort_r(int *array, size_t size, int pos, int *out, int *ca);

/** 10 */
void bitonic_sort(int *array, size_t size);
void swapint(int *l, int *r);
void b_sort(int *array, int low, int count, int dir, size_t size);
void b_merge(int *array, int low, int count, int dir, size_t size);

/** 11 */
void quick_sort_hoare(int *array, size_t size);
int partition_hoare(int *a, int l, int h);

#endif
