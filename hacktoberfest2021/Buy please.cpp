#include<bits/stdc++.h>
using namespace std;

void swap(int* a, int* b){
	//write here the code for swap
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high){
	int pivot = arr[high];
	int i = low;

	for (int j = low; j < high; j++){
		if (arr[j] < pivot){
			swap(&arr[i], &arr[j]);
			i++;
		}
	}
	swap(&arr[i], &arr[high]);
	return i;
} 

void quickSort(int arr[], int low, int high){
	if (low < high){
		int pi = partition(arr, low, high);

		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	} 
} 

int main(){
    int n = 10;
    int arr[n];
    for(int i=0; i<n; i++)
        arr[i] = n-i;

    quickSort(arr, 0, n);
    
    int a,b,x,y;
    cin>>a>>b>>x>>y;
    int cost=(a*x)+(b*y);
    cout<<cost<<endl;
    return 0;
}
