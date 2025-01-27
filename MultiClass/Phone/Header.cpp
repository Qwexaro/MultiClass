#include "Header.h"

MyPhone::MyPhone()
{
	id = 0; 
	weight = 200; 
	size_in_mm = 120;
	color = "Red";
}

MyPhone::MyPhone(int id, int weight, int size_in_mm, std::string color)
{
	this->id = id;
	this->weight = weight;
	this->size_in_mm = size_in_mm;
	this->color = color;
}

void MyPhone::set()
{

}

void MyPhone::get()
{

}

void MyPhone::redact()
{

}