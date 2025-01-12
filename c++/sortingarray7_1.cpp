#include<iostream>
using namespace std;
void printarray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   {
      cout<<arr[i]<<" ";
   }
   cout<<endl;
   
}

void insertionSort(int arr[],int size)
{
   for (int i = 0; i < size; i++)
   {
      int key = arr[i];
      int j = i - 1;
      while (key < arr[j] && j>=0)
      {
         arr[j+1]= arr[j];
         --j;
      }
      arr[j+1]= key;
   }
   
}

int main()
{
   int n;
    
   //={ 9,5,1,4,3};
   cout<<"enter size of array:"<<endl;
   cin>>n;
   int data[n];
  
   cout<<"enter  elements   in array:"<<endl;
   for (int i = 0; i < n; i++)
   {
      cin>>data[i];
   }
   
   // int size = sizeof(data)/sizeof(data[0]);
   insertionSort(data,n);
   cout<<"sorted array in ascending order "<<endl;
   printarray(data , n);
   return 0;
}