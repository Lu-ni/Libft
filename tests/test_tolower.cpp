#include <CppUTest/TestHarness.h>
#include <ctype.h>

extern "C" {
    #include "libft.h"   // Assuming this header has the prototypes for ft_toupper and ft_tolower
}

TEST_GROUP(FTtolower) {};

TEST(FTtolower, LowercaseCharacters) {
    for (char c = 'a'; c <= 'z'; ++c) {
        CHECK(ft_tolower(c) == tolower(c));
    }
}

TEST(FTtolower, UppercaseCharacters) {
    for (char c = 'A'; c <= 'Z'; ++c) {
        CHECK(ft_tolower(c) == tolower(c));
    }
}

TEST(FTtolower, DigitsAndSpecialChars) {
    for (char c = '0'; c <= '9'; ++c) {
        CHECK(ft_tolower(c) == tolower(c));
    }
    const char* specialChars = "!@#$%^&*()-_=+[]{}|;:'\",.<>?/";
    for (int i = 0; specialChars[i]; ++i) {
        CHECK(ft_tolower(specialChars[i]) == tolower(specialChars[i]));
    }
}

// Assuming ASCII behavior for the standard library
TEST(FTtolower, NonASCII) {
    for (int c = 128; c <= 255; ++c) {
        CHECK(ft_tolower(c) == tolower(c));
    }
}

