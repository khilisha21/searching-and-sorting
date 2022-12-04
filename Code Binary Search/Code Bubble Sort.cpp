// Provided with a random integer array/list(ARR) of size N, you have been required to sort this array using 'Bubble Sort'.

void bubbleSort(int *input, int size)
{
    for(int j = 0; j < size; j++)
    {
        for(int i = 0; i < (size - (j + 1)); i++)
     {
        if(input[i] >= input[i + 1])
        {
            int temp = input[i];
            input[i] = input[i + 1]; 
            input[i + 1] = temp;
        }
     }
    }
}
