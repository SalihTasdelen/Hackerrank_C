/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Given an array of strings, you need to implement string_sort function
 *    and sorting rules. 
 *
 *        Version:  1.0
 *        Created:  01-09-2020 14:34:34
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
int lexicographic_sort(const char* a, const char* b) {
    int len = (strlen(a)<=strlen(b) ? strlen(a) : strlen(b));
    for (int i = 0; i < len; i++){
        if (a[i] < b[i]){
            return 0;
        }else if (a[i] > b[i]){
            return 1;
        }
    }
    return (strlen(a)<=strlen(b) ? 0 : 1);
}

int lexicographic_sort_reverse(const char* a, const char* b) {
    int len = (strlen(a)<=strlen(b) ? strlen(a) : strlen(b));
    for (int i = 0; i < len; i++){
        if (a[i] < b[i]){
            return 1;
        }else if (a[i] > b[i]){
            return 0;
        }
    }
    return (strlen(a)<=strlen(b) ? 1 : 0);
}

int charcounts(const char* a) {
    int chars[26] = {0};
    for (int i = 0; i < strlen(a); i++)
        chars[a[i] - 'a']++;
    int sum = 0;
    for (int i = 0; i < 26; i++)
        sum += (chars[i] >= 1 ? 1 : 0);
    return sum;
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    if (charcounts(a) == charcounts(b))
        return lexicographic_sort(a, b);
    return (charcounts(a) > charcounts(b) ? 1 : 0);
}

int sort_by_length(const char* a, const char* b) {
    if (strlen(a) == strlen(b))
        return lexicographic_sort(a, b);
    return (strlen(a) > strlen(b) ? 1 : 0);
}

void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){
    char* tmp;
    for (int i = 0; i < len; i++){
        for (int j = 0; (j < (len - i - 1)); j++) {
            if ((*cmp_func)(arr[j], arr[j+1]) == 1){
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}


int main() 
{
    int n;
    scanf("%d", &n);
  
    char** arr;
	arr = (char**)malloc(n * sizeof(char*));
  
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
  
    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);    
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");
}
