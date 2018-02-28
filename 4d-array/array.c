/* array.c: an implementation of a 4 dimensional array */

#include <stdio.h>

int main() {
    int array[][3][4][5] = 
    {
        {
            {
                {1, 2, 3, 4, 5},
                {2, 4, 6, 8, 10},
                {4, 8, 12, 16, 20},
                {8, 16, 24, 32, 40}
            },
            {
                {11, 12, 13, 14, 15},
                {12, 14, 16, 18, 20},
                {14, 18, 22, 26, 30},
                {18, 26, 34, 42, 50}
            },
            {
                {21, 22, 23, 24, 25},
                {22, 24, 26, 28, 30},
                {24, 28, 32, 46, 40},
                {28, 36, 44, 52, 60}
            }
        },
        {
            {
                {2, 1, 4, 3, 5},
                {12, 4, 16, 8, 20},
                {4, 18, 12, 26, 20},
                {18, 16, 34, 32, 50}
            },
            {
                {1, 112, 213, 314, 415},
                {122, 142, 162, 182, 202},
                {13, 33, 33, 43, 53},
                {180, 260, 340, 420, 500}
            },
            {
                {2, 2, 2, 2, 2},
                {2, 2, 2, 2, 3},
                {2, 2, 3, 4, 4},
                {2, 3, 4, 5, 6}
            }
        }
    };
    int (*p)[3][4][5] = array;
    int i;
    size_t nbooks = sizeof array / sizeof array[0];
    size_t npages = sizeof array[0] / sizeof array[0][0];
    size_t nrows = sizeof array[0][0] / sizeof array[0][0][0];
    size_t ncols = sizeof array[0][0][0] / sizeof array[0][0][0][0];

    printf("sizeof(*p) == %d\n\n", (int) sizeof *p);
    for (i = 0; i < nbooks; i++) {
        int j;
        for (j = 0; j < npages; j++) {
            int k;
            for (k = 0; k < nrows; k++) {
                int l;
                for (l = 0; l < ncols; l++) {
                    printf("%d ", p[i][j][k][l]);
                }
                putchar('\n');
            }
            putchar('\n');
        }
        putchar('\n');
    }
    return 0;
}