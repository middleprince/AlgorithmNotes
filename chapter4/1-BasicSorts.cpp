#include<cstdio>
#include<algorithm>
#include<iterator>
    
void swap(void *a[], int i, int j)
{
    void *temp;
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

// the size of input array should be at least N+1.
int insertSort(void *ins[], int n, int (*cmp)(void *, void *))
{
    for(int i=1; i<n; ++i)  
    {
        int j=i; 
        decltype(ins[0]) temp = ins[i];

        while(j>1 && cmp(&temp, ins[j-1])>0) 
        {
            ins[j] = ins[j-1];
            --j; 
        }
        ins[j] = temp;
    }
    return 0;
}

int selectiveSort(int ins[], int n)
{
    for(int i=1; i<n; ++i)
    {
        int min_index = i;
        for(int j=i; j<n; ++j) 
        {
            if(ins[min_index] > ins[j]) 
                min_index = j;
        }
        ins[min_index] ^= ins[i];
        ins[i] ^= ins[min_index];
        ins[min_index] ^= ins[i];
    }
    return 0;
}

// template version of quick sort.
int qsort(void *ins[], int a, int b,
        int (*cmp) (void *, void *))
{
    if (a > b)
        return 0;

    swap(ins, a, (a+b)/2);
    int pivot = a;
    int last_min = a;
    for(int i=a+1; i<=b; ++i)  
    {
        if((*cmp)(ins[i], ins[pivot]) < 0) 
            swap(ins, i, ++last_min);
    }
    swap(ins, last_min, pivot);
    qsort(ins, a, last_min-1, cmp);
    qsort(ins, last_min+1, b, cmp);
}

// CPP version qsort
template <class ForwardIt>
 void quicksort(ForwardIt first, ForwardIt last)
 {
    if(first == last) 
        return;
    auto pivot = *std::next(first, std::distance(first, last) / 2);
    ForwardIt middle = std::partition(first, last, 
            [pivot] (const auto& em) {return em < povit;})
    ForwardIt middle2 = std::partition(middle, last, 
            [pivot] (const auto& em) {return em < pivot;});
    quicksort(first, middle);
    quicksort(middle2, last);
 }


// shell sort
int shellSort(void *ins[], int n,
        int (*cmp) (void *, void *))
{
    for(int gap=n/2; gap>0; gap=/2)  
        for(int i=gap;  i<n; ++i)
            for(int j=i-gap; j>=0 && cmp(ins[j], ins[j+gap]); j-=gap)
                swap(ins, j, j+gap);
    return 0;
}
