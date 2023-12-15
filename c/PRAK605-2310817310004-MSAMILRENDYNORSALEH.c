#include <stdio.h>
#define MAX_SIZE 10

void multiplyMatrices(int matA[MAX_SIZE][MAX_SIZE], int matB[MAX_SIZE][MAX_SIZE], int hasil[MAX_SIZE][MAX_SIZE], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            hasil[i][j] = 0;
            for (int k = 0; k < n; k++) {
                hasil[i][j] += matA[i][k] * matB[k][j];
            }
        }
    }
}

void displayMatrix(int mat[MAX_SIZE][MAX_SIZE], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("");
    scanf("%d", &n);

    int matA[MAX_SIZE][MAX_SIZE], matB[MAX_SIZE][MAX_SIZE], hasil[MAX_SIZE][MAX_SIZE];

    printf("Matriks A:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matA[i][j]);
        }
    }

    printf("Matriks B:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matB[i][j]);
        }
    }

    multiplyMatrices(matA, matB, hasil, n);

    printf("Matriks AXB:\n");
    displayMatrix(hasil, n);

    return 0;
}
