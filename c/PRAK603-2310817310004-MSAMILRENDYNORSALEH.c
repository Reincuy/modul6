#include <stdio.h>

int main() {
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    if (n1 != n2) {
        printf("jumlah tidak sama\n");
    } else {
        int matrix1[n1], matrix2[n2], hasil[n1];
        for (int i = 0; i < n1; i++) {
            scanf("%d", &matrix1[i]);
        }
        for (int i = 0; i < n2; i++) {
            scanf("%d", &matrix2[i]);
        }
        for (int i = 0; i < n1; i++) {
            hasil[i] = matrix1[i] * matrix2[i];
        }
        for (int i = 0; i < n1; i++) {
            printf("%d ", hasil[i]);
        }
        printf("\n");
    }

    return 0;
}
