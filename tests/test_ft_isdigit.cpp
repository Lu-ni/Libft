extern "C" {
    #include "libft.h"
}

#include "CppUTest/TestHarness.h"

TEST_GROUP(FTIsdigit) {};

TEST(FTIsdigit, ValidDigitsChars) {
    CHECK_TRUE(ft_isdigit('0'));
    CHECK_TRUE(ft_isdigit('1'));
    CHECK_FALSE(ft_isdigit('x'));
    CHECK_FALSE(ft_isdigit('@'));
}

