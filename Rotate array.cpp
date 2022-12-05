void rotate(int *input, int d, int n)
{
    int input1[100000] = {0}, k = 0;
    for(int i = 0; i < (n - d); i++)
    {
        input1[i] = input[(i + d)];
    }
    for(int i = (n - d); i < n; i++)
    {
        input1[i] = input[k];
        k++;
    }
    for(int i = 0; i < n; i++)
    {
        input[i] = input1[i];
    }
}
