#include <iostream>

using namespace std;


class Complex{
//Cout
friend ostream operator << (ostream & , Complex&);


private:
    int real;
    int img;

public:
//List intialization method 
Complex(int r , int m):real(r),img(m){}
//Pre-increment 
void operator ++(){
    this->img=this->img+1;
    this->real= this->real+1;
}

};

ostream operator <<(ostream& obj, Complex& num){
    cout<<num.real<<" + "<<num.img<<"i";
}


int main(){

    Complex A(9,1);
    cout<<A<<endl;
    ++A;
    cout<<A<<endl;
    return 0;
}