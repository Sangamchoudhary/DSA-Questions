int *findTwoElement(int *arr, int n)
{

    // time - O(n ) space - O(n)

    int size = *max_element(arr, arr + n) + 2;
    int temp[size] = {0};
    int count = 0;
    int *ans = new int(2);
    for (int i = 0; i < n; i++)
    {
        ++temp[arr[i]];
    }
    for (int i = 1; i < size; i++)
    {
        if (temp[i] == 0)
        {
            ans[1] = i;
            count++;
            if (count == 2)
                break;
        }
        else if (temp[i] == 2)
        {
            ans[0] = i;
            count++;
            if (count == 2)
                break;
        }
    }
    return ans;

    // time - O(n) space - O(1)

    int *res = new int(2);

    for (int i = 0; i < N; i++)
    {
        arr[i] -= 1;
    }

    for (int i = 0; i < N; i++)
    {
        arr[arr[i] % N] += N;
    }

    for (int i = 0; i < N; i++)
    {
        arr[i] /= N;

        if (arr[i] == 2)
        {
            res[0] = i + 1;
        }

        if (arr[i] == 0)
        {
            res[1] = i + 1;
        }
    }

    return res;
}