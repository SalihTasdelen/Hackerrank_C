/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Given an array of strings sorted in lexicographical order, print ne-
 *    xt permutation. 
 *
 *        Version:  1.0
 *        Created:  02-09-2020 00:03:57
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Salih Tasdelen
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int next_permutation(int n, char **s)
{
	/**
	* Complete this method
	* Return 0 when there is no next permutation and 1 otherwise
	* Modify array s to its next permutation
	*/
    int i,l,j;
    int k = -1;
    for (i = (n-1); i > 0; i--){
        if(strcmp(s[i], s[i-1]) > 0){
            k = i-1;break;
        }
    }
    if (k < 0)
        return 0;
    for (i = (n-1); i > k; i--){
        if(strcmp(s[k], s[i]) < 0){
            l = i;break;
        }
    }
    char *temp = s[k];
    s[k] = s[l];
    s[l] = temp;
    i = k+1; j = n-1;
    while(j>i){
        temp = s[j];
        s[j] = s[i];
        s[i] = temp; 
        j--; i++;
    }  
    return 1;
}

int main()
{
	char **s;
	int n;
	scanf("%d", &n);
	s = calloc(n, sizeof(char*));
	for (int i = 0; i < n; i++)
	{
		s[i] = calloc(11, sizeof(char));
		scanf("%s", s[i]);
	}
	do
	{
		for (int i = 0; i < n; i++)
			printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
	} while (next_permutation(n, s));
	for (int i = 0; i < n; i++)
		free(s[i]);
	free(s);
	return 0;
}
