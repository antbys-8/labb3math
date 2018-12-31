#include "pch.h"
#include "allaFiler.h"



void Vector2D::set(float x, float y)
{
	this->vec[0] = x;
	this->vec[1] = y;
	this->vec[2] = 1;

}
float Vector2D::getX()
{
	return this->vec[0];
}
float Vector2D::getY()
{
	return this->vec[1];
}
Vector2D::Vector2D(){}
Vector2D::Vector2D(const Vector2D &r)
{
	this->set(r.vec[0], r.vec[1]);
}
void Vector2D::print()
{
	if (this->vec[2] == 1) {
		cout << "(" << vec[0] << "," << vec[1] << ")" << endl;
	}
	else {
		cout << "(" << vec[0] << "," << vec[1] << "," << vec[2] << ")" << endl;
	}
	
}
void Vector2D::print(const Vector2D &r)
{
	if (r.vec[2] == 1) {
		cout << "(" << r.vec[0] << "," << r.vec[1] << ")" << endl;
	}
	else {
		cout << "(" << r.vec[0] << "," << r.vec[1] << "," << r.vec[2] << ")" << endl;
	}
	

}
void Vector2D::print(float x)
{

	cout << x << endl;

}
Vector2D Vector2D::operator+ (const Vector2D &r)
{
	Vector2D vect;
	vect.vec[0] = this->vec[0] + r.vec[0];
	vect.vec[1] = this->vec[1] + r.vec[1];
	vect.vec[2] = 1;
	return vect;

}
Vector2D Vector2D::operator- (const Vector2D &r)
{
	Vector2D vect;
	vect.vec[0] = this->vec[0] - r.vec[0];
	vect.vec[1] = this->vec[1] - r.vec[1];
	vect.vec[2] = 1;
	return vect;

}
float Vector2D::operator*(const Vector2D &r)
{
	float result;
	result = this->dot(r);
	return result;
}
Vector2D Vector2D::operator= (const Vector2D &r)
{
	Vector2D vect;
	vect.vec[0] = r.vec[0];
	vect.vec[1] = r.vec[1];
	vect.vec[2] = 1;
	return vect;

}
Vector2D Vector2D::crossZ(const Vector2D &r)
{
	Vector2D crossZ;
	crossZ.vec[0] = (r.vec[0]-r.vec[1]);
	crossZ.vec[1] = -((this->vec[0]) - (this->vec[1]));
	crossZ.vec[2] = ((this->vec[0] * r.vec[1]) - (this->vec[1] * r.vec[0]));
	return crossZ;
}
float Vector2D::dot(const Vector2D &r)
{
	float cross;
	cross = ((this->vec[0] * r.vec[0]) + (this->vec[1] * r.vec[1]));
	return cross;
}
float Vector2D::dotdivition(const Vector2D &r)
{
	Vector2D temp = r;
	float dot;
	dot = this->dot(r) / temp.dot(r);
	return dot;
}
float Vector2D::length()
{
	float length;
	int x = this->vec[0];
	int y = this ->vec[1];
	length = sqrt((pow(x,2)) + (pow(y,2)));
	return length;

}
Vector2D Vector2D::normalisation()
{
	Vector2D normalisation;
	float multi = length();
	normalisation.vec[0] = (this->vec[0] / multi);
	normalisation.vec[1] = (this->vec[1] / multi);
	normalisation.vec[2] = 1;
	return normalisation;
}
Vector2D Vector2D::projection(const Vector2D &r)
{
	Vector2D norm;
	float multi;
	multi = this->dotdivition(r);
	norm.vec[0] = (r.vec[0] * multi);
	norm.vec[1] = (r.vec[1] * multi);
	norm.vec[2] = 1;
	return norm;
}
bool Vector2D::operator==(const Vector2D &r)
{
	return(this->vec[0] == r.vec[0] && this->vec[1] == r.vec[1]);
}



bool Vector2D::operator!=(const Vector2D &r)
{
	return!(this->vec[0]== r.vec[0] && this->vec[1]== r.vec[1]);
}