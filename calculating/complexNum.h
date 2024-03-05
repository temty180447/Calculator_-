#include <iostream>
#include <cmath>

#define PI 3.14159265
using namespace std;

class compNum{
    public:
    double real;
    double img;
    compNum(double,double);
    compNum operator+(const compNum &);
    compNum operator-(const compNum &);
    compNum operator*(const compNum &);
    compNum operator/(const compNum &);
    double abs();
    double angle();
};

compNum::compNum(double a = 0, double b = 0){
    real = a;
    img = b;
}

compNum compNum::operator+(const compNum &x){
    return compNum(real+x.real,img+x.img);
}

compNum compNum::operator-(const compNum &x){
    return compNum(real-x.real,img-x.img);
}

compNum compNum::operator*(const compNum &x){
    return compNum((real*x.real)+(img*x.img),(real*x.img)-(img*x.real));
}

compNum compNum::operator/(const compNum &x){
    return compNum(((real*(x.real/(pow(x.real,2)+pow(x.img,2))))-(img*(-x.img/(pow(x.real,2)+pow(x.img,2))))),((real*(-x.img/(pow(x.real,2)+pow(x.img,2))))+(img*(-x.real/(pow(x.real,2)+pow(x.img,2))))));
}

double compNum::abs(){
    return sqrt(pow(real,2)+pow(img,2));
}

double compNum::angle(){
    return atan(img/real);
}

int main(){

    return 0;
}