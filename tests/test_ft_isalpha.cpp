extern "C" {
    #include "libft.h"
}

#include "CppUTest/TestHarness.h"

TEST_GROUP(FTIsAlpha) {};

TEST(FTIsAlpha, ValidAlphabeticChars) {
    CHECK_TRUE(ft_isalpha('a'));
    CHECK_TRUE(ft_isalpha('Z'));
    CHECK_FALSE(ft_isalpha('1'));
    CHECK_FALSE(ft_isalpha('@'));
}

