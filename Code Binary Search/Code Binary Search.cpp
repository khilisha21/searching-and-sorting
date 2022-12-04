// You have been given a sorted(in ascending order) integer array/list(ARR) of size N and an element X. Write a function to search this element in the given input array/list using 'Binary Search'. Return the index of the element in the input array/list. In case the element is not present in the array/list, then return -1.

int binarySearch(int *input, int n, int val)
{
    int start = 0, end = n;
    for(int i = 0; i < n; i++)
    {
        
        int mid = (start + end)/2;
        if(input[mid] == val)
            return mid;
        else if(input[mid] > val)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}
