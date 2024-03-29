#include<iostream>
using namespace std;
class MergeSort{
    public:
        void merge(int arr[], int left ,int middle , int right){
            int n1 = middle - left +1 ;
            int n2 = right- middle;

            int L[n1], R[n2];

            for(int  i = 0 ; i < n1 ; i++){
                L[i] = arr[left + i ];
            }

            for (int j = 0; j <n2 ; j++){
                R[j] = arr[middle +1 + j];
            }
            int i = 0;
            int  j = 0;
            int k = left;
            while( i < n1 && j <n2){
                if (L[i] <= R[j]){
                    arr[k] = L[i];
                    i++;
                }
                else{
                    arr[k] = R[j];
                    j++;
                }
                k++;
            }

            while( i < n1){
                arr[k] = L[i];
                i++;
                k++;
            }

            while( j < n2){
                arr[k] = R[j];
                j++;
                k++;
            }
        }

        void mergeSort(int arr[] , int left , int right){
            if(left < right){
                int middle = left + ( right -left)/2;
            

                mergeSort(arr , left , middle);
                mergeSort(arr , middle+1 , right);

                merge(arr , left , middle , right);
            }
        }

};

int main(){
    int size;
    cout<<"enter the size : ";
    cin>>size;
    int arr[size];
    cout<<"enter the elements : ";
    for(int i = 0 ; i < size ; i++){
        cin>> arr[i];
    }

    MergeSort mergeSortObj;
    mergeSortObj.mergeSort(arr , 0 , size - 1 );

    cout<<"sorted array : ";
    for( int i = 0 ; i < size ; i++){
        cout<< arr[i]<<" ";
    }
    return 0 ;
}