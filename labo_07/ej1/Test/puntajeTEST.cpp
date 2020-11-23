#include "../puntaje.h"
#include "gtest/gtest.h"

TEST(PuntajeTEST, MenorQue10MultiploDe3) {
    // setup
    int n = 3;
    //exercise
    int result = puntaje(n);
    // check
    EXPECT_TRUE(result == 16);
}

TEST(PuntajeTEST, MayorQue10NoMultiploDe3) {
    // setup
    int n = 11;
    //exercise
    int result = puntaje(n);
    // check
    EXPECT_TRUE(result == 1);
}