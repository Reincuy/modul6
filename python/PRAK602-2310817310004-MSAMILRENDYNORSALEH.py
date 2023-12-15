def hitungzetzu(ruangan, jumlahzetsu):
    for i in range(ruangan):
        jumlahzetsu[i] *= (i + 1)
        print(jumlahzetsu[i], end=' ')

if __name__ == "__main__":
    ruangan = int(input())
    
    jumlahzetsu = list(map(int, input().split()))

    hitungzetzu(ruangan, jumlahzetsu)
    print()
