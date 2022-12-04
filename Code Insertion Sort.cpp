// Provided with a random integer array/list(ARR) of size N, you have been required to sort this array using 'Insertion Sort'.


void insertionSort(int *input, int size)
{
    for(int i = 1; i < size; i++)
    {
        for(int j = (i - 1); j >= 0; j--)
        {
            if(input[j] > input[i])
            {
                int temp = input[i];
                input[i] = input[j];
                input[j] =  temp;
                i--;
            }
            else
                break;
        }
    }
}

