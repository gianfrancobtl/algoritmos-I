#include "../llenarTaxis.h"
#include "gtest/gtest.h"

TEST(LlenarTaxisTEST, todosIguales1) {
    // setup
    int g1 = 3;
    int g2 = 3;
    int g3 = 3;

    //falla
    int result = llenarTaxis1(g1,g2,g3);

    // check
    EXPECT_TRUE(result == 5);
}

TEST(LlenarTaxisTEST, todosIguales2) {
    int g1 = 3;
    int g2 = 3;
    int g3 = 3;

    int result = llenarTaxis2(g1,g2,g3);

    EXPECT_TRUE(result == 5);
}

TEST(LlenarTaxisTEST, todosIguales3) {
    int g1 = 3;
    int g2 = 3;
    int g3 = 3;

    int result = llenarTaxis3(g1,g2,g3);

    EXPECT_TRUE(result == 5);
}