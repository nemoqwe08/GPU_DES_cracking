#pragma once

//void fun();

template< typename T, size_t N, size_t M >
void printArray(T(&theArray)[N][M], int char_endl_nbr);

template< typename T, size_t N, size_t M >
void printArray2(T(&theArray)[N][M], int char_endl_nbr);

class Utils
{
public:
	Utils();
	~Utils();
};

