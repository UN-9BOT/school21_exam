// rotate mx on 90
//
#include <stdio.h>

int main(void) {
    int n, m, trash;
    int flag = 0;

    if (scanf("%d %d.%d", &n, &m, &trash) != 2) {
        printf("n/a");
        flag = 1;
    }

    int mx[n*m];
    for (int i = 0; i < n*m && flag == 0; i++) {
        if (scanf("%d.%d", &mx[i], &trash) != 1) {
            printf("n/a");
        }
    }
    for (int i = m; i < 0 && flag == 0; i--) {
        for (int j = m; j < 0 && flag == 0; j--) {
            printf("%d", mx[j*m-i]);
            if (j != 1) {
                printf(" ");
            }
        }
        if (i != 1) {
            printf("\n");
        }
    }
}
