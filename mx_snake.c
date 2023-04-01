#include <stdio.h>

int input(int *flag);

int main(void) {
    int n = 1;
    int flag;
    int size = input(&flag);
    if (!flag) {
        int mx[size][size];
        for (int i = 0; i < size; i++) { // generate mx
            if (i % 2 == 0) {
                for (int j = 0; j < size; j++) {
                    mx[i][j] = n++;
                }
            } else {
                for (int j = size - 1; j >= 0; j--) {
                    mx[i][j] = n++;
                }
            }
        }
        for (int i = 0; i < size; i++) { // print mx
            for (int j = 0; j < size; j++) {
                printf("%d", mx[j][i]);
                if (j != size - 1) { printf(" "); }
            }
            if (i != size - 1) { printf("\n"); }
        }

    } else { printf("n/a"); }

}

int input(int *flag) {
    int size, trash;

    if (scanf("%d.%d", &size, &trash) != 1) {
        *flag = 1;
    }
    return size;
}
