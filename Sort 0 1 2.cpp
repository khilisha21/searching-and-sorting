void sort012(int *arr, int n)
{
    int count_0 = 0, count_1 = 0, count_2 = 0;
	for(int i = 0; i < n; i++)
    {
        if(arr[i] == 0)
            count_0++;
        if(arr[i] == 1)
            count_1++;
        if(arr[i] == 2)
            count_2++;
    }
    //cout << count_0 << count_1 << count_2 << endl;
    for(int i = 0; i < count_0; i++)
        arr[i] = 0;
    for(int i = count_0; i < (count_0 + count_1); i++)
        arr[i] = 1;
    for(int i = (count_0 + count_1); i < (count_0 + count_1 + count_2); i++)
        arr[i] = 2;
}
