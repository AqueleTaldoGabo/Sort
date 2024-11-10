#include <iostream>
using namespace std;

void Selection(int *v, int n){
    int maior;

    for(int i = 0; i<n-1; i++){
        maior = i;
        for(int j = i+1; j<n; j++){
            if(v[j] > v[maior])
                maior = j;
        }
        if(v[maior] != v[i])
            swap(v[maior], v[i]);
    }
}

int main(){
    int *v, n;
    cin >> n;
    if(!(v = new(nothrow) int[n])){
        cout << "deu probleminha" << endl;
        return -1;
    }
    for(int i = 0; i<n; i++){
        cin >> v[i];
    }
    Selection(v, n);
    for(int i = 0; i<n; i++){
        cout << "N-" << i << ": " << v[i] << endl;
    }

    delete[] v;
    v = NULL;
}