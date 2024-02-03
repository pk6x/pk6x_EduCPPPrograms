/* ========================================================================
   $File: $
   $Date: $
   $Revision: $
   $Creator: OOOO $
   ======================================================================== */
#include <iostream>

struct Vector
{
    float x, y;

    Vector() = default;

    Vector(float _x, float _y)
    : x(_x), y(_y) {}

    float Length() const
    {
        float length;

        length = sqrt(x*x + y*y);

        return length;
    }

    float LengthSqr() const
    {
        float length;

        length = (x*x + y*y);

        return length;
    }

    Vector operator+(const Vector& v) const
    {
        return Vector(x + v.x, y + v.y);
    }

    Vector operator-(const Vector& v) const
    {
        return Vector(x - v.x, y - v.y);
    }

    Vector operator*(float s) const
    {
        Vector scaled;

        scaled.x = x * s;
        scaled.y = y * s;

        return scaled;
    }

    Vector operator/(float s) const
    {
        Vector scaled;

        scaled.x = x / s;
        scaled.y = y / s;

        return scaled;
    }

    Vector Normalized() const
    {
        Vector normalized;

        normalized = (*this) / Length();

        return normalized;
    }

    float DotP(const Vector& a, const Vector& b)
    {
        return(a.x * b.x + a.y * b.y);
    }
};

struct Point
{
    float x, y;

    Point() = default;

    Point(float _x, float _y)
        : x(_x), y(_y) {}

    Point AddVector(Vector v)
    {
        Point p2;

        p2.x = x + v.x;
        p2.y = y + v.y;

        return p2;
    }
};

Vector operator-(Point a, Point b)
{
    Vector v;

    v.x = a.x - b.x;
    v.y = a.y - b.y;

    return v;
};


int main()
{
    // Point p;
    // p.x = 0.0f;
    // p.y = -1.0f;

    // Point i;
    // i.x = 1.0f;
    // i.y = 1.0f;

    // Point c;
    // c.x = 2.0f;
    // c.y = -1.0f;

    // Vector cp; //cinkey to packman
    // Vector ip; //inkiy to packman

    // cp = p - c;
    // ip = p - i;

    // float length_sqr_cp = cp.LengthSqr();
    // float length_sqr_ip = ip.LengthSqr();

    // Vector v;

    // v = p - i;

    // float length = v.Length();

    // std::cout << "Result: (" << v.x << ", " << v.y << ")\n";

    // std::cout << "Length: (" << length << ")\n";

    // std::cout << "Length squared of CP: " << length_sqr_cp << "\n";

    // std::cout << "Length squared of IP: " << length_sqr_ip << "\n";

    // Vector v(3, 4);

    // std::cout << "Pac man's initial speed: " << v.Length() << "\n";

    // Vector doubled;

    // doubled = v * 2;

    // std::cout << "Pac man's doubled speed: " << doubled.Length() << "\n";

    // Vector halved;

    // halved = v / 2;

    // std::cout << "Pac man's halved speed: " << halved.Length() << "\n";

    // Point i(3, 4);

    // Point p(1, 2);

    // Vector v = i - p; //Pac man point looking at Inkiey while moving in different direction

    // Vector normalized = v.Normalized();

    // std::cout << "Pac man's view vector: (" << normalized.x << ", " << normalized.y << ")\n";

    // std::cout << "Pac man's view vector length: " << normalized.Length() << "\n";

    Vector r(4, 0);
    Vector d(0, -5);

    Vector v = r + d;

    std::cout << "Pac man's new velocity: (" << v.x << ", " << v.y << ")\n";
}

