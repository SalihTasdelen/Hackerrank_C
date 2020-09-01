/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  There is a series, S, where the next term is the sum of previous thr-
 *    ee terms. Given the first three terms calculate the nth term. 
 *
 *        Version:  1.0
 *        Created:  01-09-2020 11:01:09
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
/*Complete the following function.*/

int find_nth_term(int n, int a, int b, int c) {
  /*Write your code here.*/
  if (n > 3){
    return find_nth_term(--n, b, c, a+b+c);
  }
  else{
    return a+b+c;
  }
    
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
