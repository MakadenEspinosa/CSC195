#pragma once
template<typename T = int>
class TempClass
{
private :
	T x, y;
public:
	TempClass() : x{ 0 }, y{ 0 } {}
	TempClass(int x, int y) : x{ x }, y{ y } {}
};

template <typename T, int size>
class TempArray
{
private:
	T m_elements[size];
public:
	T operator [] (int index) { return m_elements[index]; }
};

