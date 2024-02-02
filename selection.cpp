#include<iostream>
using namespace std;
class selSort{
    public:
        void swaping(int *a , int *b){
            int temp;
            temp = *a;
            *a = *b;
            *b = temp;
        }
        void sort(int array[], int size){
                int i ,j , min_i;
                for( i = 0 ; i< size - 1 ; i++){
                    min_i = i;
                    for( j = i+1 ; j < size ; j++){
                        if(array[j] < array [min_i]){
                            min_i = j;
                        }
                        swaping(&array[i] , &array[min_i]);
                    }
                }
        }
        void display(int array[] , int size){
            for(int i = 0 ; i <size ; i++){
                cout<<array[i]<<" ";
                cout<<endl;
            }
        }

};

int main(){
    int array[10] , size;
    cout<< "enter the size : "<<endl;
    cin>>size;
    cout<<"enter the elements for the array to sort : "<<endl;
    for(int i = 0 ; i< size ; i++){
        cin>>array[i];
    }
    selSort sels;
    sels.sort(array,size);
    cout<<"current array is: ";
    sels.display(array,size);
    return 0;
}