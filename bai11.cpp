// int ** a = new int *[m] khai bao mang con tro 
// for (int i = 0; i < m; i++)
// a[i] = new int[n];

int** inputMatrix(int nRows, int nCols)
{
    int ** a = new int *[nRows];
    for (int i = 0; i < nRows; i++)
    {
        a[i] = new int[nCols];
    }
    for (int i = 0; i < nRows; i++)
    {
        for (int j = 0; j < nCols; j++)
        {
            cin >> a[i][j];
        }
    }
    return a;
}
void printMatrix(int** matrix, int nRows, int nCols)
{
    for (int i = 0; i < nRows; i++)
    {
        for (int j = 0; j < nCols; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
