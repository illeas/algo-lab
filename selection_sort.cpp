/*
 * CSE 2026.21 - Algorithms Lab
 * Selection Sort
 *
 * Task1: Convert the code to sort in descending order [Change the variable names, comments and print statements also]. (2 Marks)
 * Task2: Write a function to perform swapping operation using pointers and use the newly written function to swap. (5 Marks)
 * Task3: Write a function to print the sorted array and call it from the main. (3 Marks)
*/

#include <iostream>

using namespace std;

void swapnumber(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void printelement(int a[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main()
{
    int n, i, j, min_index, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    int ar[n];
    printf("Enter %d integers: ", n);

    for (i = 0; i < n; i++)
        scanf("%d", &ar[i]);

    // Selection Sort
    for (i = 0; i < n - 1; i++)
    {
        min_index = i;

        for (j = i + 1; j < n; j++)
        {
            if (ar[min_index] > ar[j])
                min_index = j;
        }

        // Swapping operation
        if (min_index != i)
        {
            swapnumber(&ar[i], &ar[min_index]);
        }
    }

    // Printing the elements after sorting in ascending order
    printf("Sorted elements in ascending order: ");

    printelement(ar, n);

    return 0;
}
