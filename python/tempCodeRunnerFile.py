def multiply_matrices(matA, matB, n):
    hasil = [[0] * n for _ in range(n)]
    for i in range(n):
        for j in range(n):
            hasil[i][j] = 0
            for k in range(n):
                hasil[i][j] += matA[i][k] * matB[k][j]
    return hasil

def display_matrix(mat, n):
    for i in range(n):
        for j in range(n):
            print(mat[i][j], end=" ")
        print()

def main():
    n = int(input(""))
    
    matA = [[0] * n for _ in range(n)]
    matB = [[0] * n for _ in range(n)]

    print("Matrix A:")
    for i in range(n):
        row = list(map(int, input().split()))
        matA[i] = row

    print("Matrix B:")
    for i in range(n):
        row = list(map(int, input().split()))
        matB[i] = row

    hasil = multiply_matrices(matA, matB, n)

    print("Matrix AxB:")
    display_matrix(hasil, n)

if __name__ == "__main__":
    main()
