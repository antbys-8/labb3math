#include "pch.h"
#include <iostream>
#include <string>
#include <math.h>
using namespace std;


class Vector2D
{
	
private:
	float x=0.0, y=0.0,z=1.0;
	
public:
	float vec[3];
void set(float x, float y);
Vector2D(float x, float y) : vec{ x, y, 1 } {}
Vector2D();
Vector2D(const Vector2D &r);
void print();
void print(const Vector2D &r);
void print(float);
Vector2D operator+(const Vector2D &r);
Vector2D operator-(const Vector2D &r);
float operator*(const Vector2D &r);
Vector2D operator=(const Vector2D &r);
bool operator==(const Vector2D &r);
bool operator!=(const Vector2D &r);
float dot(const Vector2D &r);
Vector2D crossZ(const Vector2D &r);
float dotdivition(const Vector2D &r);
Vector2D normalisation();
Vector2D projection(const Vector2D &r);
float length();
float getX();
float getY();
};

class Matrix
{
	friend Vector2D;
private:
	float matrix[4], x1, x2, y1, y2;
	
	
public:
Matrix(float x1, float y1, float x2, float y2) : matrix{x1,y1,x2,y2} {}
Matrix() :matrix{ 1,0,0,1 } {}
Matrix(const Matrix &r): matrix{r.matrix[0],r.matrix[1],r.matrix[2],r.matrix[3]}{}
Matrix(const Vector2D &r): matrix{r.vec[0], 0, 0,r.vec[1]}{}
void setCoord(int possition, float x);
void setLine(int possition, float x, float y);
void setRow(int possition, float x1, float x2);
void set(float x1, float y1, float x2, float y2);
float getCoord(int possition);
float get(const Matrix &r);
float get();
Matrix operator*(const Matrix &r);
void operator=(const Matrix &r);
Matrix transpose();
Matrix transpose(const Matrix &r);
void RotateForward();
void RotateForward(Matrix &r);
void RotateBackwards();
void RotateBackwards(Matrix &r);
void print();
void print(const Matrix &r);
};