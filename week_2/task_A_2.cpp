#include <iostream>
using namespace std;
int main(){
    int A[10] = {1,2,3,4,5};
    int size = 5;
    int pos =2;
    for (int i = pos; i < size; ++i)
    {
        A[i] = A[i+1];
    }
    size--;
    for (int i = 0; i < size; i++)
    {
        cout<<A[i]<<" ";
    }cout<<endl;
    
    
    return 0;
}