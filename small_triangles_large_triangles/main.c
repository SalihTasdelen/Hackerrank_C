/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Sort the triangles by Heron's formula. 
 *
 *        Version:  1.0
 *        Created:  02-09-2020 22:19:31
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Salih Tasdelen
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;

double tr_area(triangle tr){
    double p = (tr.a + tr.b + tr.c)/2.0;
    return sqrt(p * (p - tr.a) * (p - tr.b) * (p - tr.c));
}

void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
    triangle tmptr;
    int action = 1;
    while (action){
        action = 0;
        for (int i = 0; i < (n - 1) ; i++){
            if (tr_area(tr[i]) > tr_area(tr[i+1])){
                tmptr =  tr[i];
                tr[i] = tr[i+1];
                tr[i+1] = tmptr;
                action = 1;
            }
        }
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
