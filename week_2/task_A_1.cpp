#include<iostream>
using namespace std;
int main(){
    int A[10] = {1,2,3,4,5};
    int size = 5;
    int pos = 3;
    int val = 9;
    for (int i = size; i > pos; i--)
    {
       A[i] = A[i-1];
    }
    A[pos] = val;
    size++;
    for (int i = 0; i < size; i++)
    {
        cout<<A[i]<<" ";
    }cout<<endl;
    
    
    return 0;
}