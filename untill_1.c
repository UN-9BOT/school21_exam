#include <stdlib.h>
#include <stdio.h>

int main(void) {
    int c = 0, s = 0, flag = 0;
    int *arr = malloc (sizeof(int));
    scanf("%d", &arr[c]);
    while(arr[c++] != -1) {
        arr = realloc(arr, c);
        scanf("%d", &arr[c]);
    }
    int arr2[c];
    int buffer;
    for (int i = 0; i < c; i++) {
        buffer = arr[i];
        flag = 0;
        for (int i = 0; i < s; i++) {
            if (arr2[i] == buffer) {
                flag = 1;
            }
        }
        if (!flag && buffer != -1) {
            arr2[s++] = buffer;
        }
    }
    for (int i = 0; i < s; i++) {
        printf("%d", arr2[i]);
        if (i != s - 1) { printf(" "); }
    }

    free(arr);
    arr = NULL;
    return (0);
}
