int **keepEven(int **matrix, int nRows, int nCols)
{
    for (int i = 0; i < nRows; i++)
    {
        for (int j = 0; j < nCols; j++)
        {
            if (matrix[i][j] % 2)
            {
                matrix[i][j] = 0;
            }
        }
    }
    return matrix;
}