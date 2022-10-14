#include <iostream>
using namespace std;

void printArray(int a[],int size){
  for(int i=0;i<size;i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
}

int *selectionSort(int a[],int size){
  for(int i=0;i<size;i++){
    int min=i;
    for(int j=i+1;j<size;j++){
      if(a[j]<a[min]){
        min=j;
      }
    }
    int temp=a[i];
    a[i]=a[min];
    a[min]=temp;
  }
  return a;
}

int main() 
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  printArray(a,n);
  selectionSort(a,n);
  printArray(a,n);
}
