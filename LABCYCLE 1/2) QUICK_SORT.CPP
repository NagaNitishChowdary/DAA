#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int low,int high){
    int pivot = arr[low] ;
    int i = low ;
    int j = high ;
    while(i < j){
        while(pivot >= arr[i] && i<=high-1) i++;
        while(pivot < arr[j] && j>=0) j--;
        if(i<j) swap(arr[i] , arr[j]);
    }
    swap(arr[low],arr[j]);
    return j ;
}

void quicksort(int arr[],int low,int high){
    if(low >= high) return ;
    int loc = partition(arr,low,high);
    quicksort(arr,low,loc-1);
    quicksort(arr,loc+1,high);
}

int main()
{
    int n ; cin >> n ;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i] ;
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++) cout << arr[i] << " " ;
    cout << endl;
}
