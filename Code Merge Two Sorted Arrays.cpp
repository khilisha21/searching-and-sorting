// You have been given two sorted arrays/lists(ARR1 and ARR2) of size N and M respectively, merge them into a third array/list such that the third array is also sorted.

void merge(int *arr1, int size1, int *arr2, int size2, int *ans)
{
    int i = 0, j = 0;
    for(int k = 0; k < (size1 + size2); k++)
    {
        if((i < size1) && (j < size2)){
            if(arr1[i] < arr2[j])
            {
                ans[k] = arr1[i];
                i++;
            }
            else
            {
                ans[k] = arr2[j];
                j++;
            }
        }
        else if(i < size1)
        {
            ans[k] = arr1[i];
            i++;
        }
        else if(j < size2)
        {
            ans[k] = arr2[j];
            j++;
        }
        
    }
}
