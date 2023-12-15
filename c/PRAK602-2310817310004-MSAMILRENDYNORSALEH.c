#include <stdio.h>

void hitungzetzu(int ruangan, int jumlahzetzu[]) {
    for (int i = 0; i < ruangan; i++) {
        jumlahzetzu[i] *= (i + 1);
        printf("%d ", jumlahzetzu[i]);
    }
}

int main() {
    int ruangan;
    printf("");
    scanf("%d", &ruangan);

    int jumlahzetzu[ruangan];
    printf("");
    for (int i = 0; i < ruangan; i++) {
        scanf("%d", &jumlahzetzu[i]);
    }
    hitungzetzu(ruangan, jumlahzetzu);
    printf("\n");

    return 0;
}
