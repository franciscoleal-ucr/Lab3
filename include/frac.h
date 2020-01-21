#include <iostream>

using namespace std;

class Frac{
  private:
    int num;
    int denom;
  
  public:
    Frac();
    Frac(int num, int denom);
    Frac operator + (Frac const &obj);
    Frac operator - (Frac const &obj);
    Frac operator * (Frac const &obj);
    Frac operator / (Frac const &obj);
    operator float() const;
    friend ostream& operator << (ostream& os, Frac const &obj);
};