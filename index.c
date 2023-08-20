#include "push_swap.h"

void insertion_sort(int *array,int size)
{
    int i;
    int key;
    int j;

    i = 1;
    while (i < size)
    {
        key = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
        i++;
    }
}


int *sorted_array(int *src, int size)
{
    int i;
    int *dest;

    i = 0;
    dest = malloc(sizeof(int) * size);
    while (i < size)
    {
        dest[i] = src[i];
        i++;
    }
    insertion_sort(dest,size);
    return (dest);
}

void getIndex(Stack *stack)
{
    int *array;
    int i;
    int index;

    i = 0; 
    array = sorted_array(stack->data,stack->size);
    while (i < stack->size)
    {
        index = 0;
        while (index < stack->size)
        {
            if (stack->data[i] == array[index])
            {
                stack->data[i] = index;
                break;
            }
            index++;
        }
        i++;
    }
    free(array);
}

