int arrayRotateCheck(int *input, int size)
{
    int min = input[0] , index = 0;
    for(int i = 1; i < size; i++)
    {
        if(min > input[i]){
            min = input[i];
            index = i;
        }
    }
    return index;
}
