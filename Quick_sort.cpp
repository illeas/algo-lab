#include<iostream>

using namespace std;

void pointerSwap(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int partition (int arra[], int left, int right)
{
    int pivot = arra[right];
    int i = (left - 1);

    for (int j = left; j <= right- 1; j++)
    {
        if (arra[j] <= pivot)
        {
            i++;
            pointerSwap(&arra[i], &arra[j]);
        }
    }
    pointerSwap(&arra[i + 1], &arra[right]);
    return (i + 1);
}

void qsort(int arra[], int left, int right)
{
    if (left < right)
    {
        int pi = partition(arra, left, right);
        qsort(arra, left, pi - 1);
        qsort(arra, pi + 1, right);
    }
}

void print(int arra[], int size)
{
    int i;
    for (i=0; i < size; i++){
        printf("%d ", arra[i]);
    }
}
int main()
{
    int arra[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arra)/sizeof(arra[0]);
    qsort(arra, 0, n-1);
    print(arra, n);
    return 0;
}
