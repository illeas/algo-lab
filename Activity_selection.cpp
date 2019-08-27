#include<iostream>

using namespace std;

void sortarray(int a[], int b[], int n){
    for(int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
           if (b[i] > b[j]){
              int tem = b[j];
              b[j] = b[i];
              b[i] = tem;

              int temp = a[j];
              a[j] = a[i];
              a[i] = temp;
           }
        }
    }
}

void maxActivities(int s[], int e[], int n){
    int i, j;
    printf ("Max activities: ");
    i = 0;
    printf("%d-%d ", s[i], e[i]);

    for (j = 1; j < n; j++){
       if (s[j] >= e[i]){
          printf("%d-%d ", s[j], e[j]);
          i = j;
       }
    }
}

int main()
{
    int s[] =  {2, 3, 4, 1, 2};
    int e[] =  {5, 4, 7, 2, 3};
    int n = sizeof(s)/sizeof(s[0]);
    sortarray(s, e, n);
    maxActivities(s, e, n);
    return 0;
}
