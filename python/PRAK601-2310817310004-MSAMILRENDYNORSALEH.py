baris, kolom = map(int, input().split())

matrix = list(map(int, input().split()))  
matrix = [matrix[i:i+kolom] for i in range(0, len(matrix), kolom)]  

for i in range(baris):
    for j in range(kolom):
        print(matrix[i][j], end=" ")
    print()
