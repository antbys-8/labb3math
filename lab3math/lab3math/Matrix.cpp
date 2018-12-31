#include "pch.h"
#include "allaFiler.h"


void Matrix::setCoord(int posittion, float x)
{
	this->matrix[posittion-1] = x;
}

void Matrix::setLine(int possition, float x, float y)
{
	if (possition == 1)
	{
		this->setCoord(possition, x);
		this->setCoord(possition + 1, y);
	}
	else
	{
		this->setCoord(3, x);
		this->setCoord(4, y);
	}
	
}
void Matrix::setRow(int possition, float x1, float x2)
{
	this->setCoord(possition, x1);
	this->setCoord(possition + 2, x2);
}

void Matrix::set(float x1, float y1, float x2, float y2)
{
	this->setLine(1, x1, y1);
	this->setLine(3, x2, y2);

}
float Matrix::getCoord(int possition)
{
	return this->matrix[possition-1];
}
float Matrix::get(const Matrix &r)
{
	float matrix[4] = { r.matrix[0], r.matrix[1], r.matrix[2], r.matrix[3] };
	return matrix[4];
}
float Matrix::get()
{
	float matrix[4] = { this->matrix[0], this->matrix[1], this->matrix[2], this->matrix[3] };
	return matrix[4];
}
Matrix Matrix::operator*(const Matrix &r)
{
	float a, b, c, d;
	a = ((this->matrix[0] * r.matrix[0]) + (this->matrix[1] * r.matrix[2]));
	b = ((this->matrix[0] * r.matrix[1]) + (this->matrix[1] * r.matrix[3]));
	c = ((this->matrix[2] * r.matrix[0]) + (this->matrix[3] * r.matrix[1]));
	d = ((this->matrix[2] * r.matrix[1]) + (this->matrix[3] * r.matrix[3]));
	Matrix newMatrix = Matrix(a, b, c, d);
	return newMatrix;
}

void Matrix::operator=(const Matrix &r)
{
	this->matrix[0] = r.matrix[0];
	this->matrix[1] = r.matrix[1];
	this->matrix[2] = r.matrix[2];
	this->matrix[3] = r.matrix[3];
}
Matrix Matrix::transpose()
{
	Matrix transpose;
	transpose.matrix[0] = this->matrix[0];
	transpose.matrix[1] = this->matrix[2];
	transpose.matrix[2] = this->matrix[1];
	transpose.matrix[3] = this->matrix[3];
	return transpose;
}
Matrix Matrix::transpose(const Matrix &r)
{
	Matrix transpose;
	transpose.matrix[0] = r.matrix[0];
	transpose.matrix[1] = r.matrix[2];
	transpose.matrix[2] = r.matrix[1];
	transpose.matrix[3] = r.matrix[3];
	return transpose;
}
void Matrix::RotateForward()
{
	float temp = this->matrix[0];
	this->matrix[0] = this->matrix[2];
	this->matrix[2] = this->matrix[3];
	this->matrix[3] = this->matrix[1];
	this->matrix[1] = temp;
}
void Matrix::RotateForward(Matrix &r)
{
	float temp = r.matrix[0];
	r.matrix[0] = r.matrix[2];
	r.matrix[2] = r.matrix[3];
	r.matrix[3] = r.matrix[1];
	r.matrix[1] = temp;
}
void Matrix::RotateBackwards()
{
	float temp = this->matrix[0];
	this->matrix[0] = this->matrix[1];
	this->matrix[1] = this->matrix[3];
	this->matrix[3] = this->matrix[2];
	this->matrix[2] = temp;
}
void Matrix::RotateBackwards(Matrix &r)
{
	float temp = r.matrix[0];
	r.matrix[0] = r.matrix[1];
	r.matrix[1] = r.matrix[3];
	r.matrix[3] = r.matrix[2];
	r.matrix[2] = temp;
}
void Matrix::print() 
{
	cout << "\n(" << matrix[0] << "," << matrix[1] << ")\n";
	cout << "\n(" << matrix[2] << "," << matrix[3] << ")\n";

}
void Matrix::print(const Matrix &r)
{
	cout << "\n(" << r.matrix[0] << "," << r.matrix[1] << ")\n";
	cout << "\n(" << r.matrix[2] << "," << r.matrix[3] << ")\n";
}