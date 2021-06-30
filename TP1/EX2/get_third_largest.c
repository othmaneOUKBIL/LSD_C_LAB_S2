#include "header.h"

/*
** Hint: for finding the largest third element in the array you don't need
** to sort the whole array, only three variables is needed for this purpose
** and the algorithm comlexity will be O(n).
*/
int     get_third_largest(int *tab, int size)
{
         int a=0,b=0,c=0;
    for(int i=0;i<size;i++)
    {
        if (tab[i]>a)
        {
            c=b;
            b=a;
            a=tab[i];
        }
        if (tab[i]>b && tab[i]<a)
        {
            c=b;
            b=tab[i];
        }
        if (tab[i]>c && tab[i]<b)
        {
            c=tab[i];
        }
    }
    return c;
}
