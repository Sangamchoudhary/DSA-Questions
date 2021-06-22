
// Brute Force
int majorityElement(int a[], int size)
{
    if (size == 1)
        return a[0];

    int count = 1;
    sort(a, a + size);
    for (int i = 1; i < size; i++)
    {
        if (a[i] == a[i - 1])
        {
            count++;
            if (count > size / 2)
                return a[i];
        }
        else
            count = 1;
    }
    return -1;
}