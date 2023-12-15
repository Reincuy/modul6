def decrypt_message(kode, pesan):
    panjangkode = len(kode)
    panjangpesan = len(pesan)

    if panjangkode != panjangpesan:
        print("Panjang kalimat berbeda, pesan palsu")
        return

    hasildeskripsi = [""] * panjangpesan
    bintang = 0
    hashtag = 0

    for i in range(panjangpesan):
        if kode[i] == pesan[i]:
            if kode[i] == ' ':
                hasildeskripsi[i] = ' '
            else:
                hasildeskripsi[i] = '*'
                bintang += 1
        else:
            hasildeskripsi[i] = '#'
            hashtag += 1

    hasildeskripsi = "".join(hasildeskripsi)

    print(hasildeskripsi)
    print(f"* = {bintang}")
    print(f"# = {hashtag}")

    if bintang >= hashtag:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")

def main():
    kode = input("")
    pesan = input("")

    decrypt_message(kode, pesan)

if __name__ == "__main__":
    main()
