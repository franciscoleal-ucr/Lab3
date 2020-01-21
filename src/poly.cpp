#include "poly.h"

Poly::Poly(){
    this->x4 = 0;
    this->x3 = 0;
    this->x2 = 0;
    this->x = 0;
    this->ind = 0;
}

Poly::Poly(float x4, float x3, float x2, float x, float ind){
    this->x4 = x4;
    this->x3 = x3;
    this->x2 = x2;
    this->x = x;
    this->ind = ind;
}

Poly Poly::operator + (Poly const &obj){
    Poly result;
    result.x2 = this->x2 + obj.x2;
    result.x = this->x + obj.x;
    result.ind = this->ind + obj.ind;
    
    return result;
}

Poly Poly::operator - (Poly const &obj){
    Poly result;
    result.x2 = this->x2 - obj.x2;
    result.x = this->x - obj.x;
    result.ind = this->ind - obj.ind;
    
    return result;
}

Poly Poly::operator * (Poly const &obj){
  Poly result;
  result.x4 = this->x2 * obj.x2;
  result.x3 = (this->x2 * obj.x) + (this->x * obj.x2);
  result.x2 = (this->x2 * obj.ind) + (this->x * obj.x) + (this->ind * obj.x2);
  result.x = (this->x * obj.ind) + (this->ind * obj.x);
  result.ind = (this->ind * obj.ind);
  return result; 
}

Poly Poly::operator / (Poly const &obj){
  Poly result;
  return result;
}

Poly::operator float() const{
    return this->x;
}

ostream& operator << (ostream& os, Poly const &obj){
    os << obj.x4 << "x^4 + " << obj.x3 << "x^3 + " << obj.x2 << "x^2 + " << obj.x << "x + " << obj.ind;
    return os;
}