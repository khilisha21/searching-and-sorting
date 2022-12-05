int findSecondLargest(int *input, int n)
{
    int largest = input[0], smallest = 0;
    for(int i = 1; i < n; i++)
    {
        if(largest < input[i])
        {
            smallest = largest;
            largest = input[i];
        }
        else if(largest > input[i] && smallest < input[i])
        {
            smallest = input[i];
        }
    }
    if(smallest == 0)
        return -2147483648;
    else
        return smallest;
}
	
