#include<iostream>
using namespace std;
class binarySearch{
    private:
        int* sortedArray;
        int size;
    public:
        binarySearch(int arr[],int n) : sortedArray(arr),size(n){}
        int search(int target){
            int low = 0 ;
            int high = size-1;
            while(low<=high){
                int mid = low + (high - low )/2;
                if(sortedArray[mid]==target){
                    return target;
                }else if(sortedArray[mid] < target){
                    low = mid+1;
                }
                else{
                    high = mid-1;
                }
            }
            return -1;
        }
};
int main(){
    int size;
    cout<<"enter the size of the array : "<<endl;
    cin>>size;
    int* sortedArray = new int[size];
    cout<<"enter the elements of the array : "<<endl;
    for(int i = 0; i<size; i++){
        cin>>sortedArray[i];
    }
    binarySearch binarySearch(sortedArray,size);
    int target;
    cout<<"enter the element you want to find: "<<endl;
    cin>>target;
    
    int result = binarySearch.search(target);
    if(result != -1){
        cout<<"the element "<<target<<"is found at"<< result; 
    }else{
        cout<<"not found";
    }

    delete sortedArray;

    return 0;
}