#include <string>
#pragma once

std::string printRange(int left, int right);
int sumRange(int left, int right);
int sumArray(int *arr, int size);
bool isAlphanumeric(std::string s);
bool nestedParens(std::string s);
bool nestedHelper(std::string s, int c);
bool divisible(int *prices, int size);
bool divisibleHelper(int *prices, int size, int aliceNeeds);


