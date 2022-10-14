#include <iostream>
using namespace std;

void printArray(int a[],int size){
  for(int i=0;i<size;i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
}

int *insertionSort(int a[],int size){
  for(int i=1;i<size;i++){
    int key=a[i];
    int j=i-1;
    while(j>=0 && a[j]>key){
      int temp=a[j];
      a[j]=a[j+1];
      a[j+1]=temp;
      j--;
    }
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
  insertionSort(a,n);
  printArray(a,n);
}
