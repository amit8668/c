#include<stdio.h>

int main()
{
    int a[10][10], transpose[10][10], r, c;

    // Input the number of rows and columns
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    // Input matrix elements
    printf("\nEnter matrix elements:\n");
    for(int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    // Display the entered matrix
    printf("\nEntered matrix:\n");
    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    // Transpose the matrix
    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            transpose[j][i] = a[i][j];
        }
    }

    // Display the transpose of the matrix
    printf("\nTranspose of the matrix:\n");
    for (int i = 0; i < c; ++i)
    {
        for (int j = 0; j < r; ++j)
        {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
