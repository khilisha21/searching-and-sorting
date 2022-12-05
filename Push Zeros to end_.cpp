void pushZeroesEnd(int *input, int size)
{
    int count = 0, input1[1000000] = {0}, k = 0;
    for(int i = 0; i < size; i++)
    {
        if(input[i] != 0){
            input1[k] = input[i];
            k++;
        }
        else if(input[i] == 0)
            count++;
    }
    
    for(int i = 0; i < size; i++)
    {
        input[i] = input1[i];
    }
}
