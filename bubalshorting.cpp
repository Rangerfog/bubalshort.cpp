#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){

    int arr[500];
    int size,i,j,temp,swap;
    cout<<"enter the number of element : ";
    cin>>size;
    cout<<"\n array ";
    for ( i = 0; i <=size; i++)
    {
            
            arr[i]=rand()/100;
            cout<<" "<<arr[i];
    }
    
            for ( i = 0; i < size-1; i++)
            {
                swap = 0;
            
            
            for ( j = 0; j < (size-i)-1; j++)
            {
                if (arr[j]>arr[j+1])
                {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

                swap = 1;
                }
            }

            if(swap == 0)
            {
                break;
            }
            }
            
    
    cout<<"after sorting : ";
    for ( i = 0; i < size; i++)
    {
        cout<<" "<<arr[i];
    }
    
    return 0;
}