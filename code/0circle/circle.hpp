#pragma once
#include <cmath>
#include <iostream>
#include <cmath>

#include "point.hpp"

using namespace std;

class Circle
{
private:
	Point center;
	float radius;

public:

	Circle(const Point& setcenter, float setradius); // задавать поля center и radius

	Circle(); // задаются значения, соответствующие единичной окружности с центром в начале координат

	Circle(const Circle& circle); // конструктор копирования

	float get_radius() const; // геттер rarius

    Point get_center() const; // геттер center

    void set_radius(float radius); // сеттер radius

    void set_center(const Point& center); // сеттер center

    float get_area() const; // метод, который будет возвращать площадь поверхности круга

    float get_distance(const Point& p) const; // метод, который будет возвращать расстояние от точки p, до ближайшей точки окружности

    bool is_colliding(const Circle& c) const; // метод, который будет возвращать true, если круг пересекается с кругом c

    void move(const Point& p); // метод, который будет перемещать кружок на вектор p
};