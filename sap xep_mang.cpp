
int solution(arr_integer statues) {
    int i, j, temp, numStatues = 0;
    for (i = 0; i < statues.size; i++)
    {
        for (j = 0; j < statues.size - i - 1; j++)
        {
            if (statues.arr[j] < statues.arr[j+1])
            {
                temp = statues.arr[j];
                statues.arr[j] = statues.arr[j+1];
                statues.arr[j+1] = temp;
            }
        }
    }
    
    for (i = 0; i < statues.size - 1; i++)
    {
        numStatues += (statues.arr[i] - statues.arr[i + 1] - 1);
    }
    
    
    
    return numStatues;
}
