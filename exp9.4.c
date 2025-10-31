#include <stdio.h>

int main() {
    int m, n, p, q;
    int i, j, k;

    // Input dimensions of matrix A
    printf("Enter number of rows and columns for Matrix A: ");
    scanf("%d %d", &m, &n);

    // Input dimensions of matrix B
    printf("Enter number of rows and columns for Matrix B: ");
    scanf("%d %d", &p, &q);

    // Check compatibility for multiplication
    if (n != p) {
        printf("\nMatrix multiplication is not possible. Number of columns of A must equal number of rows of B.\n");
        return 0;
    }

    int A[m][n], B[p][q], C[m][q];

    // Input matrix A
    printf("\nEnter elements of Matrix A in row-major order:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input matrix B
    printf("\nEnter elements of Matrix B in row-major order:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize result matrix C to 0
    for (i = 0; i < m; i++)
        for (j = 0; j < q; j++)
            C[i][j] = 0;

    // Multiply matrices
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            for (k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print matrix A
    printf("\nMatrix A:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%5d", A[i][j]);
        }
        printf("\n");
    }

    // Print matrix B
    printf("\nMatrix B:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            printf("%5d", B[i][j]);
        }
        printf("\n");
    }

    // Print resultant matrix C
    printf("\nResultant Matrix (A x B):\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%5d",
