#include <stdio.h>
void merge(int a[], int low, int mid, int high);
void mergeSort(int a[], int low, int high) ;
void main()
{
    int n, i;
    printf("enter the count  of no:");
    scanf("%d", &n);     

    int a[n];

    printf("\nenter the numbers:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    mergeSort(a,0,n-1);

    printf("The Sorted list is:");
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
}

void merge(int a[], int low, int mid, int high)
{
    int i, j, k, b[10];
     i=low;
     j=mid+1;
     k=0;
    while (i <= mid && j <= high)
    {
        if (a[i] <= a[j])
        {
            b[k] = a[j];
            k++;
            j++;
        }
        else
            b[k] = a[i];
        k++;
        i++;
    }
    while (i <= mid)
    {
        b[k] = a[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        b[k] = a[j];
        k++;
        j++;
    }
    for ( i =low,k=0; i <high; i++,k++)
    {
        a[i]=b[k];
    }
    
}

void mergeSort(int a[], int low, int high) 
{ 
    if (low < high) { 
    
        int mid = low + high / 2; 
  
        mergeSort(a, low, mid); 
        mergeSort(a, mid + 1, high); 
        merge(a, low, mid, high); 
    } 
}