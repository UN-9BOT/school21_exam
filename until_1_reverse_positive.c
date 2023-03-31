// задача на вывод всех положительных чисел в обратном порядке, ввод до -1
#include <stdio.h>
#include <stdlib.h>
// #define malloc(x) NULL

int main(void) {
    int *arr = malloc(sizeof(int));
    int flag = 0;
    if (arr == NULL) {
        flag = 1;
    } else {
        int c = 0, trash = 0;
        if (scanf("%d.%d", &arr[c], &trash) != 1) {
            flag = 1;
        }

        while(arr[c++] != -1 && flag == 0) {
            arr = realloc(arr, c);
            if (arr == NULL) {
                flag = 1;
            } else {
                if (scanf("%d.%d", &arr[c], &trash) != 1) {
                    flag = 1;
                }
            }
        }

        for(int i = c - 1; i >= 0 && flag == 0; i--) {
            if (arr[i] >= 0) {
                printf("%d ", arr[i]);
            }
        }

        if (flag) { printf("n/a"); }

        free(arr);
        arr = NULL;
    }

    return (0);

}
