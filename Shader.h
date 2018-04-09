#pragma once
#include<glad\glad.h>
#include<iostream>
using namespace std;
#include<string>
#include<fstream>
#include<sstream>

class Shader
{

public:
	unsigned int ID;
	Shader(const char* vertexPath, const char* fragmentPath);
	void use();
	void setBool(const string &name, bool value) const;
	void setint(const string &name, int value) const;
	void setfloat(const string &name, float value) const;

};
