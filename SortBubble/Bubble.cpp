#include <iostream>
using namespace std;

void bubbleSort(int *v, int n){
    if(n==1) return;
    for(int i = 0; i<n-1; i++){
        if(v[i] > v[i+1]){
            swap(v[i], v[i+1]);
        }
    }
    bubbleSort(v, n-1);
}

int main(){
    int *v, n;
    cin >> n;
    if(!(v = new(nothrow) int[n])){
        cout << "Deu problema" << endl;
        return -1;
    }
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    bubbleSort(v, n);
    for(int i = 0; i<n; i++){
        cout << "N-" << i << ": " << v[i] << endl;
    }
    delete[] v;
    v = NULL;
}