#include <stdio.h>
#include <string.h>

void decryptMessage(char *kode, char *pesan) {
    int panjangkode = strlen(kode);
    int panjangpesan = strlen(pesan);

    if (panjangkode != panjangpesan) {
        printf("Panjang kalimat berbeda, pesan palsu\n");
        return;
    }
    char hasildeskripsi[panjangpesan + 1];
    int bintang = 0, hashtag = 0;

    for (int i = 0; i < panjangpesan; i++) {
        if (kode[i] == pesan[i]) {
            if (kode[i] == ' ') {
                hasildeskripsi[i] = ' ';
            } else {
                hasildeskripsi[i] = '*';
                bintang++;
            }
        } else {
            hasildeskripsi[i] = '#';
            hashtag++;
        }
    }
    hasildeskripsi[panjangpesan] = '\0';

    printf("%s\n", hasildeskripsi);
    printf("* = %d\n", bintang);
    printf("# = %d\n", hashtag);

    if (bintang >= hashtag) {
        printf("Pesan Asli\n");
    } else {
        printf("Pesan Palsu\n");
    }
}

int main() {
    char kode[100], pesan[100];

    printf("");
    fgets(kode, sizeof(kode), stdin);
    kode[strcspn(kode, "\n")] = '\0';

    printf("");
    fgets(pesan, sizeof(pesan), stdin);
    pesan[strcspn(pesan, "\n")] = '\0';  

    decryptMessage(kode, pesan);
    return 0;
}
