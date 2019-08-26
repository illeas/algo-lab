#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int ar[n];
    printf("Enter %d elements: ", n);
    for(int i=0; i<n; i++){
        scanf("%d", &ar[i]);
    }
    sort(ar, ar + n); //Ascending order
    //sort(ar, ar + n, greater<int>()); //Descending order

    printf("Sorted elements: ");
    for(int j=0; j<n; j++){
        printf("%d ", ar[j]);
    }
    printf("\n");

    return 0;
}
