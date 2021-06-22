
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

// time - O(n) space - O(max element in given array or equal to constraint )

int n = *max_element(a, a + size) + 1;
int temp[n] = {0};
for (int i = 0; i < size; i++)
{
    temp[a[i]]++;
}
for (int i = 0; i < n; i++)
{
    if (temp[i] > size / 2)
        return i;
}
return -1;
}