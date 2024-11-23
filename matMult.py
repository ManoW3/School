def matMult(first, second):
    size = len(second[0])
    result = [[0 for i in range(size)] for j in range(size)]
    for i in range(len(second)):
        for j in range(len(first)):
            result[i][j] = first[i][0]*second[0][j] + first[i][1]*second[1][j]
    return result
    


def main():
    mat1a, mat1b  = [[1, 2], [3, 4]], [[5, 6], [7, 8]]
    mat2a, mat2b = [[2, 4], [6, 8]], [[10, 12], [14, 16]]
    mat3a, mat3b = [[4, 8], [12, 16]], [[20, 24], [28, 32]]
    print(matMult(mat1a, mat1b))
    print(matMult(mat2a, mat2b))
    print(matMult(mat3a, mat3b))
main()