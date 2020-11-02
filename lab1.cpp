#include <cmath>
#include <iostream>
using namespace std;

class Informer
{
public:
    Informer(double a) { cout << "konstruktor domyślny dla" << a << endl; }
    ~Informer() { cout << "destrukcja domyślna" << endl; }
};

class Wektor2D
{
public:
    void   setX(double x) { wspx = x; }
    double getX() { return wspx; }

    void   setY(double y) { wspy = y; }
    double getY() { return wspy; }

    Wektor2D(double x, double y)
    {
        wspx = x;
        wspy = y;
        cout << "współrzędne wektora:[" << x << ";" << y << "]" << endl;
    }
    Wektor2D()
    {
        wspx = 0;
        wspy = 0;
    }

    void druk() { cout << "[" << wspx << "," << wspy << "]" << endl; }

    // double norm(double a, double b) { return (sqrt(a * a + b * b));

    /*~Wektor2D() { cout << "niszczenie wektora" << wspx << wspy << endl; }*/

    /*
    Wektor2D kart(double x, double y)
    {
        double wspx;
        double wspy;
        wspx = x;
        wspy = y;
        cout << "współrzędne wektora:[" << x << ";" << y << "]" << endl;
    };

    Wektor2D bieg(double k, double fi)
    {
        wspk  = k;
        wspfi = fi;
        cout << "współrzędne wektora:[" << wspk << ";" << wspfi << "]" << endl;
    };
*/
    // Wektor2D() { ++num_wek; };
    //~Wektor2D() { --num_wek; }
    // static int populacja() { return (num_wek); };

    double mx, my;

    // Wektor2D(Wektor2D h1, Wektor2D h2) {}

    Wektor2D operator+(Wektor2D h1)
    {
        double nx, ny;
        nx = h1.getX() + wspx;
        ny = h1.getY() + wspy;
        return Wektor2D(nx, ny);
    }

    double operator*(Wektor2D h1)
    {
        double nz;
        nz = h1.getX() * wspx + h1.getY() * wspy;
        return nz;
    }
    // void druk() { cout << "[" << mx << "," << my << "]" << endl;}

private:
    double wspx;
    double wspy;
    double wspk;
    double wspfi;
};
/*
class wektordodany
{
public:
    double mx, my;
    wektordodany(double x, double y)
    {
        double wx, wy;
        wx = x;
        wy = y;
        mx = wx;
        my = wy;
    }
    void druk() { cout << "[" << mx << "," << my << "]" << endl; }
};*/
/*
struct dodaj
{
    dodaj() {}
    dodaj(Wektor2D h1, Wektor2D h2) { wektor1 = h1, wektor2 = h2; }
    Wektor2D wektor1;
    Wektor2D wektor2;
};
*/
/*
struct pomnoz
{
    pomnoz() {}
    pomnoz(Wektor2D w1, Wektor2D w2) { wektor1 = w1, wektor2 = w2; }
    Wektor2D wektor1;
    Wektor2D wektor2;
};
*/
/*
Wektor2D operator+(Wektor2D h1, Wektor2D h2)
{
    double nx, ny;
    nx = h1.getX() + h2.getX();
    ny = h1.getY() + h2.getY();
    return Wektor2D(nx, ny);
}
*/
class pomnoz
{
public:
    double mz;
    pomnoz(double z)
    {
        double wz;
        wz = z;
        mz = wz;
    }
    void druk() { cout << "[" << mz << "]" << endl; }
};

// int Wektor2D::num_wek = 11;

int main()
{

    // Wektor2D::kart Z(1,2);

    Wektor2D A;
    Wektor2D v1{};
    cout << v1.getX() << endl;
    cout << v1.getY() << endl;
    Wektor2D B;
    // cout << A.populacja() << endl;
    Wektor2D G(1, 3);
    A.setX(3);
    // cout << A.populacja() << endl;
    A.setY(5);
    B.setX(1);
    B.setY(4);
    A.druk();
    //  Wektor2D sum = A;
    //  cout << sum.getX() << endl;
    //  sum.druk();
    // cout << "5";

    B.druk();
    G.druk();
    // G.druk();

    Wektor2D sum = (G + A);
    sum.druk();

    double d = A * B;
    cout << d;

    // Wektor2D B(5, 2);
    // Wektor2D C(7, 1);
    // Informer I(2);
    // cout << A.norm(A.x, A.y);
    // cout << "niszczenie na końcu" << endl;
}
