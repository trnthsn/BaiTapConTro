int *merge(int *firstArr, int lenArr1, int *secondArr, int lenArr2)
{
    int length = lenArr1 + lenArr2;
    int *newArray = new int[length];
    for (int i = 0; i < length; i++)
    {
        if (i < lenArr1)
        {
            newArray[i] = firstArr[i];
        }
        if (i >= lenArr1)
        {
            newArray[i] = secondArr[i - lenArr1];
        }
    }
    if (firstArr[0] <= firstArr[lenArr1 - 1])
        sort(newArray, newArray + length);
    else
        sort(newArray, newArray + length, greater<int>());
    return newArray;
}