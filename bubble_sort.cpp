#include<iostream>

using namespace std;

void printarray(int ar[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", ar[i]);
    }
    printf("\n");
}

int main(){
    int n;
    printf("Enter number of element to sort: ");
    cin >> n;
    int ar[n];
    printf("Enter %d elements: ", n);
    for(int i=0; i<n; i++){
        cin >> ar[i];
    }
    for(int i=0; i<n-1; i++){
        int cou = 0;
        for(int j=0; j<n-i; j++){
            if(ar[j]>ar[j+1]){
                int temp = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = temp;
                cou = 1;
            }
        }
        if(cou==0){
            break;
        }
    }
    printarray(ar, n);
    return 0;
}
