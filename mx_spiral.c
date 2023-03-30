// спиральное заполнение квадратной матрицы
// 3 3
//
#include <stdio.h>

int main(void) {
    int n, m, trash;

    if (scanf("%d %d.%d", &n, &m, &trash) != 2) {
        printf("n/a");
    } else {

        int mx[n][m];
        
        for (int a = 1, i = 0, j = 0; a <= n*m; a++) {
            mx[i][j] = a;
            if (i <= j + 1 && i + j < n - 1) {
                j++;
            } else if ( i < j && i + j >= n - 1) {
                i++;
            } else if (i >= j && i + j > n - 1) {
                j--;
            } else {
                i--; 
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                printf("%d", mx[i][j]);
                if (j != m - 1) {
                    printf(" ");
                }
            }
            if (i != n - 1) {
                printf("\n");
            }
        }
    }
    return (0);
}
