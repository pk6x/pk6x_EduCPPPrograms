#include <iostream>

/*============== Templates ============*/

/*

// Can create an array of a dynamic size at compile time.
template<int N>
class Array
{
private:
	int m_Array[N];
public:
	int GetSize() const {return N;}
};


// Can specify the type of created array(s). eg. array of strings. 
template<typename T; int N>
class Array
{
private:
	T m_Array[N];
public:
	int GetSize() const { return N; }

};

============= End of Templates*/

/*============ Mathematics =============

struct Matrix3D 
{
private:
	float n[3][3];
public:
	Matrix3d() = default;

	Matrix3D(float	n00, float n01, float n02, float 10, float 11, float 12)
	{
		n[0][0] = n00; n[0][1] = n01; n[0][2] = n02;
		n[1][0] = n10; n[1][1] = n11; n[1][2] = n12
	}

	Matrix3D(const Vector3D& a, const Vector3D& b, const Vecotr3D& c)
	{
		n[0][0] = a.x; n[0][1] = a.y; n[0][2] = a.z;
		n[1][0] = b.x; n[1][1] = b.y; n[1][2] = b.z;
	}

	float& operator () (int i, int j)
	{
		return (n[j][i]);
	}

	void print(const Matrix3D&)
	{
		for(int i=0; i<3; ++i)
		{
			for(int j=0; j<3, ++j)
			{
				std::cout << [i] << "\t" << [j] << std::endl;
			}
		}
	}
};


int main()
{
	Matrix3D m1;

	m1.print()
}
*/

// int arr[2][2] = {
// 	{1, 3},
// 	{2, 4}
// };

using namespace std;
/*
struct Matrix3D
{
private:
	float n[3][3];
public:

	Matrix3D() = default;

	Matrix3D(float n00, float n01, float n02,
	         float n10, float n11, float n12,
	         float n20, float n21, float n22)
	         {
	         	n[0][0] = n00; n[0][1] = n01; n[0][2] = n02;
	         	n[1][0] = n10; n[1][1] = n11; n[1][2] = n12;
	         	n[2][0] = n20; n[2][1] = n21; n[2][2] = n22;
	         };	

};*/

/*============== Operators overloading ==============

struct Vector2
{
	float x, y;

	Vector2(float x, float y)
		: x(x), y(y) {}


	Vector2 operator+(const Vector2& other) const
	{
		return Vector2(x + other.x, y + other.y);
	}

	Vector2 operator*(const Vector2& other) const
	{
		return Vector2(x * other.x, y * other.y);
	}
};

=============================== */

struct Vector3D
{
	float x, y, z;

	Vector3D() = default;

	Vector3D(float a, float b, float c)
		: x(a), y(b), z(c) {}

	float& operator[](int i)
	{
		return ((&x)[i]);
	} 

	const float& operator[](int i) const
	{
		return ((&x)[i]);
	}

};

struct Matrix3D
{
private:
	float n[3][3];

public:
	Matrix3D() = default;

	Matrix3D(float n00, float n01, float n02,
	         float n10, float n11, float n12,
	         float n20, float n21, float n22)
	{
		n[0][0] = n00; n[0][1] = n10; n[0][2] = n20;
		n[1][0] = n01; n[1][1] = n11; n[1][2] = n21;
		n[2][0] = n02; n[2][1] = n12; n[2][2] = n22; 
	}

	Matrix3D(const Vector3D& a, const Vector3D& b, const Vector3D& c)
	{
		n[0][0] = a.x; n[0][1] = a.y; n[0][2] = a.z;
		n[1][0] = b.x; n[1][1] = b.y; n[1][2] = b.z;
		n[2][0] = c.x; n[2][1] = c.y; n[2][2] = c.z;
	}

	float& operator()(int i, int j)
	{
		return(n[j][i]);
	}

	const float& operator()(int i, int j) const
	{
		return(n[j][i]);
	}

	Vector3D& operator[](int j)
	{
		return (*reinterpret_cast<Vector3D *>(n[j]));
	}

	const Vector3D& operator[](int j) const
	{
		return (*reinterpret_cast<const Vector3D *>(n[j]));;
	}

};


// int n[3][3] = {
// 	{1, 2, 3},
// 	{4, 5, 6},
// 	{7, 8, 9}
// };

int main()
{

	Vector3D a(1, 2, 3);
	Vector3D b(4, 5, 6);
	Vector3D c(7, 8, 9);

	Matrix3D m1(a, b, c);
	// Vector2 position(3.0f, 4.0f);
	// Vector2 speed(100.f, 150.f);
	// Vector2 powerup(1.6f, 1.3f);

	// Vector2 resutl1 = position + speed * powerup;

/*	int arr[3][3] = {
		{0, 1, 2},
		{3, 4, 5},
		{6, 7, 8}
	};

	for(int i=0; i<3; ++i)
	{
		for(int j=0; j<3; ++j)
		{
			cout << "\t" << arr[j][i];
		}
		cout << endl;
	}
*/

	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			cout << m1[j][i] << "\t";
		}
		cout << "\n";
	}

	// cout << "Hello" << endl;
	system("pause");
}
