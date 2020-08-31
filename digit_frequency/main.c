/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Given a string, s, consisting of alphabets and digits, find the fre
 *    quency of each digit in the given string 
 *
 *        Version:  1.0
 *        Created:  31-08-2020 22:20:15
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Salih Tasdelen
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char* c = malloc(1024);
    scanf("%[^\n]", c);
    c = realloc(c, strlen(c) + 1);
    int* arr = (int*)calloc(10, sizeof(int));
    int i;
    for (i = 0; i <= strlen(c); i++){
        if ((c[i] >= '0') && (c[i] <= '9'))
            arr[c[i] - '0']++;
    }
    for (i = 0; i < 9; i++)
        printf("%d ", arr[i]);
    printf("%d", arr[9]);
    return 0;
}

