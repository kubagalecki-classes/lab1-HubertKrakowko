class Wektor2D
{
    Wektor2D(){
   wspx=0;wspy=0;
    };
    void   setX(double x) { wspx = x; }
    void   setY(double y) { wspy = y; }

    double getX() { return wspx; }
    double getY() { return wspy; }
  
  Wektor2D(double x, double y)
    {
        wspx = x;
        wspy = y;
    }

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
    
    private:
    double     wspx;
    double     wspy;
    // Tutaj napisz implementacje klasy Wektor2D
};
