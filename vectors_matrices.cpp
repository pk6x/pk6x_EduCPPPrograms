/* ========================================================================
   $File: $
   $Date: $
   $Revision: $
   $Creator: OOOO $
   ======================================================================== */
#include <math>

typedef vec3d<float> vf3d;
typedef vec3d<double> vd3d;

typedef mat3d<float> matf3d;
typedef mat3d<double> matd3d;

template <class T>
struct vec3d
{
    T x = 0.0f;
    T y = 0.0f;
    T z = 0.0f;

    vec3d()
            : x(0.0f), y(0.0f), z(0.0f) {}

    vec3d(T _x, T _y, T _z)
            : x(_x), y(_y), z(_z) {}

    vec3d(const vec3d& vect)
            : x(vect.x), y(vect.y), z(vect.z) {}

    T& operator[](int i)
    {
        return *((T*)this + i); 
    }

    T mag(const vec3d& vect)
    {
        return sqrt(vect.x * vect.x + vect.y * vect.y + vect.z * vect.z);
    }

    vec3d norm(const vec3d& vect)
    {
        T r = 1 /mag(vect);
        return vec3d(vect.x * r, vect.y * r, vect.z * r);
    }

    vec3d perp(const vec3d& vect)
    {
        return vec3d(-vect.y, vect.x, vect.z);
    }

    vec3d operator+(const vec3d& rhs)
    {
        return vec3d(this->x + rhs.x, this->y + rhs.y, this->z + rhs.z);
    }

    vec3d operator-(const vec3d& rhs)
    {
        return vec3d(this->x - rhs.x, this->y - rhs.y, this->z - rhs.z);
    }

    vec3d operator*(const T& rhs)
    {
        return vec3d(this->x * rhs, this->y * rhs, this->z * rhs);
    }

    vec3d operator/(const T& rhs)
    { 
        return vec3d(this->x / rhs, this->y / rhs, this->z / rhs);
    }

    vec3d& operator+=(const vec3d& rhs)
    {
        this->x += rhs.x;
        this->y += rhs.y;
        this->z += rhs.z;

        return *this;
    }

    vec3d& operator-=(const vec3d& rhs)
    {
        this->x -= rhs.x;
        this->y -= rhs.y;
        this->z -= rhs.z;

        return *this;
    }

    vec3d& operator*=(const T rhs)
    {
        this->x *= rhs;
        this->y *= rhs;
        this->z *= rhs;

        return *this;
    }

    vec3d& operator/=(const T rhs)
    {
        this->x /= rhs;
        this->y /= rhs;
        this->z /= rhs;

        return *this;
    }

    T dot(const vec3d& rhs)
    {
        return this->x * rhs.x + this->y * rhs.y + this->z * rhs.z;
    }

    vec3d& cross(const vec3d& rhs)
    {
        this->x * rhs.y - this->y * rhs.x;
        this->y * rhs.z - this->z * rhs.y;
        this->z * rhs.x - this->x * rhs.z;

        return *this;
    }

    
};

template(class T)
struct mat3d
{
private:
    T n[3][3];

public:
    mat3d() = default;

    mat3d(T n00, T n01, T n02,
          T n10, T n11, T n12,
          T n20, T n21, T n22)
    {
        n[0][0] = n00; n[0][1] = n10; n[0][2] = n20;
        n[1][0] = n01; n[1][1] = n11; n[1][2] = n21;
        n[2][0] = n02; n[2][1] = n12; n[2][2] = n22;
    }

    mat3d(const vec3d& a, const vec3d& b, const vec3d& c)
    {
        n[0][0] = a.x; n[0][1] = a.y; n[0][2] = a.z;
        n[1][0] = b.x; n[1][1] = b.y; n[1][2] = b.z;
        n[2][0] = c.x; n[2][1] = c.y; n[2][2] = c.z;
    }

    T& operator()(T i, T j)
    {
        return(n[j][i]);
    }
    
    const T& operator()(T i, T j) const
    {
        return(n[j][i]);
    }

    vec3d& operator[](T j)
    {
        return(*reTerpret_cast<vec3d *>(n[j]));
    }

    const vec3d& operator[](T j) const
    {
        return(*reTerpret_cast<const vec3d *>(n[j]));
    }

}
