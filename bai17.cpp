bool check(int n)
{
    int temp = n;
    while (temp)
    {
        int divisor = temp % 10;
        if (divisor == 0 || n % divisor != 0)
            return false;
        temp /= 10;
    }
    return true;
}
int* selfDividingNumbers(int left, int right, int* returnSize)
{
    vector <int> storage;
    for (int i = left; i <= right; i++)
    {
        if (check(i))
        {
            storage.push_back(i);
        }
    }
    int *arr = new int[storage.size()];
    for (int i = 0; i < storage.size(); i++)
    {
        arr[i] = storage[i];
    }
    *returnSize = storage.size();
    return arr;
}