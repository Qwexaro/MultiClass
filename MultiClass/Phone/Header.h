#pragma once
#include <iostream>
#include <string>
class MyPhone 
{
	int id, weight, size_in_mm;
	std::string color;
public:
	MyPhone();
	MyPhone(int id, int weight, int size_in_mm, std::string color);
	void set();
	void get();
	void redact();
};