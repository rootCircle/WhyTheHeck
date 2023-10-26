#include<iostream>
using namespace std;

void bubbleSort(int arr[],int len){
        for (int i = 0; i < len-2; i++) {
            for (int j = 0; j < len - i - 1; j++) {
                if(arr[j]<arr[j+1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
}

int main(){
    int arr[] = {4,3,7,9,1};
    bubbleSort(arr,5);
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Wait! Why the array is sorted in descending order?! I wrote the code to sort it in ascending order!!";
}