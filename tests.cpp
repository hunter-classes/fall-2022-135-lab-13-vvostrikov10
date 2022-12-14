#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("<printRange tests>"){
    CHECK(printRange(0, 3) == "0 1 2 3");
    CHECK(printRange(-1, 4) == "-1 0 1 2 3 4");
    CHECK(printRange(1, 1) == "1");
    CHECK(printRange(6, 3) == "");
}

TEST_CASE("<sumRange tests>"){
    CHECK(sumRange(0, 3) == 6);
    CHECK(sumRange(-1, 4) == 9);
    CHECK(sumRange(1, 1) == 1);
    CHECK(sumRange(6, 3) == 0);
}

TEST_CASE("<sumArray tests>"){
    int t[] = {1, 2 , 3, 4, 5};
    CHECK(sumArray(t, 3) == 6);
    CHECK(sumArray(t, 5) == 15);
    CHECK(sumArray(t, 0) == 0);
}

TEST_CASE("<isAlphanumeric tests>"){
    CHECK(isAlphanumeric("ab123c") == true);
    CHECK(isAlphanumeric("") == true);
    CHECK(isAlphanumeric("ab123c:") == false);
    CHECK(isAlphanumeric("ab123c ") == false);
}

TEST_CASE("<nestedParens tests>"){
    CHECK(nestedParens("(())") == true);
    CHECK(nestedParens("(()())") == true);
    CHECK(nestedParens("(()))") == false);
    CHECK(nestedParens(")(") == false);
    CHECK(nestedParens("(( ))") == false);
}

TEST_CASE("<divisible tests>"){
    int prices [] = {10, 15, 12, 18, 19, 17, 13, 35, 33};
    CHECK(divisible(prices, 9) == true);
    prices[0]++;
    CHECK(divisible(prices, 9) == false);
    int prices2 [] = {1, 1, 4};
    CHECK(divisible(prices2, 3) == false);
}
