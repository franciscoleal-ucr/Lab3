#include <iostream>

using namespace std;

class Poly{
    private:
        float x4;
        float x3;
        float x2;
        float x;
        float ind;
        
    public:
        Poly();
        Poly(float x4, float x3, float x2, float x, float ind);
        Poly operator + (Poly const &obj);
        Poly operator - (Poly const &obj);
        Poly operator * (Poly const &obj);
        Poly operator / (Poly const &obj);
        operator float() const;
        friend ostream& operator << (ostream& os, Poly const &obj);
};

