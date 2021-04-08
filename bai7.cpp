int* getPointerToArray(int n)
{
    int *array = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    return array;
}