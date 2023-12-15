n1, n2 = map(int, input().split())

if n1 != n2:
    print("jumlah tidak sama")
else:
    matrix1 = list(map(int, input().split()))
    matrix2 = list(map(int, input().split()))
    hasil = [matrix1[i] * matrix2[i] for i in range(n1)]
    
    for value in hasil:
        print(value, end=" ")
    print()
