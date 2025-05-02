#include <stdio.h>

int main() {
    int m, n, p, q, i, j, k;
    int A[10][10], B[10][10], C[10][10];
    printf("Enter rows and columns for Matrix A (m n): ");
    scanf("%d %d", &m, &n);
    printf("Enter rows and columns for Matrix B (p q): ");
    scanf("%d %d", &p, &q);
     if (n != p) {
        printf("Matrix multiplication not possible. Columns of A must equal rows of B.\n");
        return 1;
    }
    printf("Enter elements of Matrix A:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    
    printf("Enter elements of Matrix B:\n");
    for (i = 0; i < p; i++)
        for (j = 0; j < q; j++)
            scanf("%d", &B[i][j]);
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            C[i][j] = 0;
            for (k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Output result
    printf("Resultant Matrix C:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
