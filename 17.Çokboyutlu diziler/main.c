/* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\
*                       Sefa Kara  04/10/2020             *
*     cokboyutlu diziler kullanimi                        *
*     iki matrisin carpimi                                *
\* * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <stdlib.h>

#define     ROW         4
#define     COLUMN      3
#define     MATRIX_MAX  10


int multi_array2[ROW] [COLUMN];

int main () {
    //cokboyutlu dizi kullanimi
    /*
	int multi_array [ROW] [COLUMN] = {{1,2,3}, {4,5,6},{7,8,9},{10,11,12}};

	for (int row = 0; row < ROW; row++){
		for (int col =0; col < COLUMN; col++)
			printf ("%d\t", multi_array [row][col]);
		printf ("\n");
	}

	printf ("\n");

	multi_array [1][1] = 10;
	for (int row = 0; row < ROW; row++){
		for (int col =0; col < COLUMN; col++)
			printf ("%d\t", multi_array [row][col]);
		printf ("\n");
	}

	printf ("\n");

	for (int row = 0; row < ROW; row++){
		for (int col =0; col < COLUMN; col++)
			printf ("%d\t", multi_array2 [row][col]);
		printf ("\n");
	}

	printf ("\n");

	for (int row = 0; row < ROW; row++){
		for (int col =0; col < COLUMN; col++){
			printf ("Enter %d. row %d. column : ", row+1, col+1);
			scanf ("%d",&multi_array2 [row][col]);
		}
	}

	for (int row = 0; row < ROW; row++){
		for (int col =0; col < COLUMN; col++)
			printf ("%d\t", multi_array2 [row][col]);
		printf ("\n");
		}

    printf("\n\n");
*/

    //iki matrisin carpimi
    int row1, col1;
    int row2, col2;

    printf("Enter matrix of 1's row : ");
    scanf("%d",&row1);
    printf("Enter matrix of 1's col : ");
    scanf("%d",&col1);

    int matrix1[MATRIX_MAX][MATRIX_MAX] = {0};
    int matrix2[MATRIX_MAX][MATRIX_MAX] = {0};
    int matrix3[MATRIX_MAX][MATRIX_MAX] = {0};

    for (int i=0;i<row1;++i){
        for(int j=0;j<col1;++j){
            printf("%d row and %d column : ",i+1,j+1);
            scanf("%d",&matrix1[i][j]);
        }
    }

    printf("\n");

    for (int i=0;i<row1;++i){
        for(int j=0;j<col1;++j)
            printf("%d ",matrix1[i][j]);
        printf("\n");
    }

    printf("\n");

    printf("Enter matrix of 2's row : ");
    scanf("%d",&row2);
    printf("Enter matrix of 2's col : ");
    scanf("%d",&col2);

    for (int i=0;i<row2;++i){
        for(int j=0;j<col2;++j){
            printf("%d row and %d column : ",i+1,j+1);
            scanf("%d",&matrix2[i][j]);
        }
    }

    printf("\n");

    for (int i=0;i<row2;++i){
        for(int j=0;j<col2;++j)
            printf("%d ",matrix2[i][j]);
        printf("\n");
    }

    if (col1 != row2){
        printf("Error...\n");
        return 0;
    }

    for (int i=0;i<row1;++i){
        for(int j=0;j<col2;++j){
            int temp = 0;
            for(int k=0;k<col1;++k){
                temp += matrix1[i][k] * matrix2[k][j];
            }
            matrix3[i][j] = temp;
        }
    }

    printf("\n");

    for (int i=0;i<row1;++i){
        for(int j=0;j<col2;++j)
            printf("%d ",matrix3[i][j]);
        printf("\n");
    }



    return 0;
}
