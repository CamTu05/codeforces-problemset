#include <stdio.h>

int main()
{
    int matrix[6][6];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf ("%d", &matrix[i][j]);
        }
    }
    int column;
    int row;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matrix[i][j] == 1) {
                column = 2-i;
                row = 2-j;
                break;
            }
        }
    }
    if (column < 0) {
        column = -column;
    }
    if (row < 0) {
        row = -row;
    }
    printf("%d", row+column);
    return 0;
}