#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */

void print_hash_table(hash_table_t *ht);

int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(7);
    hash_table_set(ht, "betty", "cool");
    hash_table_set(ht, "betty", "001");
    hash_table_set(ht, "betty", "002");
    hash_table_set(ht, "betty", "003");
    hash_table_set(ht, "stylist", "004");
    hash_table_set(ht, "mentioner", "005");
    hash_table_set(ht, "neurospora", "006");
    hash_table_set(ht, "serafins", "007");

    print_hash_table(ht);

    return (EXIT_SUCCESS);
}

void print_hash_table(hash_table_t *ht)
{
    unsigned long int num = 0;
    hash_node_t **array = ht->array;
    hash_node_t *item = NULL;

    while (num < ht->size)
    {
        printf("Hash Table Item: %ld\n", num);

        if (array[num] != NULL)
        {
            item = array[num];

            while (item != NULL)
            {
                printf("Key: %s : Value: %s\t", item->key, item->value);
                item = item->next;
            }
        }
        else
        {
            printf("-------------------");
        }
        printf("\n");
        num++;
    }
}
