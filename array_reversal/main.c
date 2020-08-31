/*
 * =====================================================================================
 *
 *       Filename:  array_reversal.c
 *
 *    Description:  Given an array, of size n, reverses it.  
 *
 *        Version:  1.0
 *        Created:  31-08-2020 15:55:41
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Salih Tasdelen
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */

    for(i = num - 1; i >= 0; i--)
        printf("%d ", *(arr + i));
    return 0;
}
