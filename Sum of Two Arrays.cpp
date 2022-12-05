void sumOfTwoArrays(int *input1, int size1, int *input2, int size2, int *output)
{
    int v = 0, k = 0, j = size2 - 1, i = size1 - 1, op = 0;
    if(size1 >= size2)
        k = size1;
    else
        k = size2;
    
    if(size1 >= size2)
    {
        while(j >= 0)
        {
            op = input1[i] + input2[j] + v;
            output[k] = op % 10;
            v = op / 10;
            k--;
            i--;
            j--;
        }
        while(i >= 0)
        {
            op = input1[i] + v;
            output[k] = op % 10;
            v = op / 10;
            k--;
            i--;
        }
        output[k] = v;
    }
    else
    {
        while(i >= 0)
        {
            op = input1[i] + input2[j] + v;
            output[k] = op % 10;
            v = op / 10;
            k--;
            i--;
            j--;
        }
        while(j >= 0)
        {
            op = input2[j] + v;
            output[k] = op % 10;
            v = op / 10;
            k--;
            j--;
        }
    }
}
