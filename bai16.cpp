int **transpose(int **matrix, int m, int n)
{
    int **alternative = new int *[n];
    for (int i = 0; i < n; i++)
    {
        alternative[i] = new int[m];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            alternative[i][j] = matrix[j][i];
        }
    }
    return alternative;
}