#include "funcs.h"
#include <iostream>

std::string printRange(int left, int right){
    if (left > right) return "";
    else if (left == right) return std::to_string(left);
    else return std::to_string(left) + " " + printRange(left + 1, right); 
}

int sumRange(int left, int right){
    if (left > right) return 0;
    else if (left == right) return left;
    else return left + sumRange(left + 1, right); 
}

int sumArray(int *arr, int size){
    if (size == 0) return 0;
    return arr[0] + sumArray(arr + 1, size - 1);
}

bool isAlphanumeric(std::string s){
    if (s.size() == 0) return true;
    if (('a' <= s[0] && s[0] <= 'z') 
        || ('A' <= s[0] && s[0] <= 'Z')
        || ('0' <= s[0] && s[0] <= '9')) return true && isAlphanumeric(s.substr(1));
    return false;
}

bool nestedParens(std::string s){
    return nestedHelper(s, 0);
}

bool nestedHelper(std::string s, int c){
    if (c < 0) return false;
    if (s.length() == 0){
        if (c == 0) return true;
        return false;
    } 
    if (s[0] == '(') return nestedHelper(s.substr(1), c + 1);
    if (s[0] == ')') return nestedHelper(s.substr(1), c - 1);
    return false;
}

bool divisible(int *prices, int size){
    int sum = 0;
    for (int i = 0; i < size; i++){
        sum += prices[i];
    }
    if (sum % 2 == 1) return false;
    bool ans = divisibleHelper(prices, size, sum / 2);
    //if (ans) std::cout << "Bob gets the rest" << std::endl;
    return ans;
}

bool divisibleHelper(int *prices, int size, int aliceNeeds){
    if (aliceNeeds == 0) return true;
    if (aliceNeeds < 0) return false;
    if (size == 0) return false;

    if (divisibleHelper(prices + 1, size - 1, aliceNeeds - prices[0])){
        //std::cout << "Alice gets painting with price " << prices[0] << std::endl;
        return true;
    }
    else if (divisibleHelper(prices + 1, size - 1, aliceNeeds)) return true;
    return false;
}

