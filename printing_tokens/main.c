/*
 * =====================================================================================
 *
 *       Filename:  printing_tokens.c
 *
 *    Description:  Given a sentence, s, print each word of the sentence in a new line 
 *
 *        Version:  1.0
 *        Created:  31-08-2020 16:37:43
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

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    int i,j;
    char *c = malloc(50 * sizeof(char));
    for (i = 0, j = 0; i <= strlen(s); i++,j++){
        if ((s[i] == ' ')){
	    if (j>0) {   
                c[j] = '\0';
                printf("%s\n", c);
            }
	    j=-1;
        }else {
            c[j] = s[i];
	}
    }
    printf("%s\n", c);
    return 0;
}
