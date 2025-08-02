#include <stdlib.h>

int     ft_ultimate_range(int **range, int min, int max)
{
        int     i;
        int     size;
        int     *tab;

        if (min >= max)
        {
                *range = NULL;
                return (0);
        }
        size = max - min;
        tab = malloc(sizeof(int) * size);
        if (!tab)
        {
                *range = NULL;
                return (-1);
        }
        i = 0;
        while (i < size)
        {
                tab[i] = min + i;
                i++;
        }
        *range = tab;
        return (size);
}
