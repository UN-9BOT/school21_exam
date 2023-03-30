#include <stdlib.h>
#include <stdio.h>

int main(void) {
    int c = 0;
    int *arr = malloc (sizeof(int));
    scanf("%d", &arr[c]);
    while(arr[c++] != -1) {
        arr = realloc(arr, c);
        scanf("%d", &arr[c]);
    }
    int arr2[c];
    int s = 0;
    int flag = 0;
    for (int i = 0; i < c; i++) {
        int buffer = arr[i];
        s += 1;
        for (int i = 0; i < s; i++) {
           if (arr[i] != 
        }

    }
    for (int i = 0; i < c; i++) {
        printf("%d", arr2[i]);
        if (i != c - 1) { printf(" "); }
    }


    free(arr);
    arr = NULL;
    return (0);
}

/* char* input() { */
/*     char* str = NULL, c; */
/*     int count = 0; */
/*     str = (char *)malloc(sizeof(char)); */
/*     while ((c = getchar()) != '\n') { */
/*         str[count] = c; */
/*         count++; */
/*         str = (char *)realloc(str, count); */
/*     } */
/*     str[count] = '\0'; */
/*     free(str); */
/*     return (str); */
/* } */

