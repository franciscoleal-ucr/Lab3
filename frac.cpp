#include "frac.h"
#include <algorithm>

Frac::Frac(){
    this->num = 0;
    this->denom = 0;
}

Frac::Frac(int num, int denom){
    this->num = num;
    this->denom = denom;
}

Frac Frac::operator + (Frac const &obj){
    Frac result;
    ////////// sacamos el minimo comun multiplo de las fracciones a sumar
    int mcm;
    int mcd;
    int a = std::max(this->denom, obj.denom);
    int b = std::min(this->denom, obj.denom);
    int c = a;
    int d = d; 
    do{
      mcd= d;
      d = c%d;
      c = mcd;
    } while(d!=0);
    mcm = (a/mcd)*b;

    result.num = ((mcm/this->denom)*this->num) + ((mcm/obj.denom)*obj.denom);
    result.denom = mcm;
    
    return result;
}

Frac Frac::operator - (Frac const &obj){
    Frac result;
    ////////// sacamos el minimo comun multiplo de las fracciones a sumar
    int mcm;
    int mcd;
    int a = std::max(this->denom, obj.denom);
    int b = std::min(this->denom, obj.denom);
    int c = a;
    int d = d; 
    do{
      mcd= d;
      d = c%d;
      c = mcd;
    } while(d!=0);
    mcm = (a/mcd)*b;

    result.num = ((mcm/this->denom)*this->num) - ((mcm/obj.denom)*obj.denom);
    result.denom = mcm;
    
    return result;
}

Frac Frac::operator * (Frac const &obj){
  Frac result;
  
  result.num = (this->num*obj.num);
  result.denom = (this->denom*obj.denom);

  return result;
}

Frac Frac::operator / (Frac const &obj){
  Frac result;

  result.num = (this->num*obj.denom);
  result.denom = (this->denom*obj.num);
  
  return result;
}
Frac::operator float() const{
    return this->num;
}

ostream& operator << (ostream& os, Frac const &obj){
    os << obj.num << "/" << obj.denom;
    return os;
}