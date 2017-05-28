#ifndef Shapes_h
#define Shapes_h
#include <SFML/Graphics.hpp>
class Collider	
{
protected:
	double x, y;

public:
	virtual bool is_colliding(Collider*) = 0;
	virtual void draw(sf::RenderWindow&) = 0;
	double get_x();
	double get_y();
	Collider(double x, double y);
	~Collider();
};

class Circle;

class Rectangle :public Collider
{
private:
	double width;
	double heigth;
	sf::RectangleShape sfml_rectangle;
public:
	Rectangle(double width, double heigth, double x, double y);
	~Rectangle();
	double get_heigth();
	double get_width();
	bool is_colliding(Shapes*);
	bool is_colliding(Circle*);
	bool is_colliding(Rectangle*);
	void rectangle_red();
	void rectangle_blue();
	void draw(sf::RenderWindow&);

private:

};

class Circle : public Collider
{
private:
	double radius;
	sf::CircleCollider sfml_circle;
public:
	Circle(double radius, double x, double y);
	~Circle();
	double get_radius();
	bool is_colliding(Collider*);
	bool is_colliding(Circle*);
	bool is_colliding(Rectangle*);
	void circle_red();
	void circle_green();
	void draw(sf::RenderWindow&);
	void move(float, float);
};
#endif Collider_h