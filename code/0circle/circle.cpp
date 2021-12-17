#include <iostream>
#include <cmath>

#include "point.hpp"
#include "circle.hpp"
using namespace std;

Circle::Circle(const Point& setcenter, float setradius): center(setcenter), radius(setradius){}

Circle::Circle() : center({0, 0}), radius(1) {}

Circle::Circle(const Circle& circle): center(circle.get_center()), radius(circle.get_radius()){}

float Circle::get_radius() const {
	return radius;
}

Point Circle::get_center() const {
	return center;
}

void Circle::set_radius(float radius) {
    if (radius < 0)
    	radius = 0;
    this->radius = radius;
}

void Circle::set_center(const Point& center) {
    this->center = center;
}

float Circle::get_area() const {
	return 3.1415 * radius * radius;
}

float Circle::get_distance(const Point& p) const {
	return abs(center.distance(p) - radius);
}

bool Circle::is_colliding(const Circle& c) const {
	return c.get_center().distance(center) <= radius + c.get_radius();
}

void Circle::move(const Point& p) {
	this->center = center + p;
}