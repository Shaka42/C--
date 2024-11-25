#include<iostream>

using namespace std;


int main(){

    int k ;
    cin>>k;
    int *p = new int [k];
    for(int i = 0;i<k; i++){
        p[i]=5;
    }
     for(int i = 0;i<k; i++){
        cout<<p[i]<<endl;
    }

    delete p;
    p = nullptr;
    return 0;
}