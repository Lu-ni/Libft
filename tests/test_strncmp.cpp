#include <CppUTest/TestHarness.h>
#include <cstring>

extern "C" {
    #include "libft.h"   // Assuming libft.h has the prototype for ft_strncmp
}

TEST_GROUP(FTStrncmp) {};

TEST(FTStrncmp, EqualStrings) {
    const char* str1 = "Hello, World!";
    const char* str2 = "Hello, World!";
    CHECK(ft_strncmp(str1, str2, 13) == strncmp(str1, str2, 13));
}

TEST(FTStrncmp, UnequalStrings) {
    const char* str1 = "Hello, World!";
    const char* str2 = "Hello, world!";
    CHECK(ft_strncmp(str1, str2, 13) == strncmp(str1, str2, 13));
}

TEST(FTStrncmp, EqualStringsLimitComparison) {
    const char* str1 = "Hello, World!";
    const char* str2 = "Hello, world!";
    CHECK(ft_strncmp(str1, str2, 7) == strncmp(str1, str2, 7)); // Only comparing "Hello, "
}

TEST(FTStrncmp, DifferentLengthStrings) {
    const char* str1 = "Hello, World";
    const char* str2 = "Hello, ";
    CHECK(ft_strncmp(str1, str2, 13) == strncmp(str1, str2, 13));
}

TEST(FTStrncmp, NullCharacterComparison) {
    const char* str1 = "Hello";
    const char* str2 = "Hello\0World!";
    CHECK(ft_strncmp(str1, str2, 11) == strncmp(str1, str2, 11));
}

TEST(FTStrncmp, ZeroLengthComparison) {
    const char* str1 = "Hello, World!";
    const char* str2 = "Hello, world!";
    CHECK(ft_strncmp(str1, str2, 0) == strncmp(str1, str2, 0)); // Should always be 0 as nothing is compared
}

TEST(FTStrncmp, EmptyStrings) {
    const char* str1 = "";
    const char* str2 = "";
    CHECK(ft_strncmp(str1, str2, 5) == strncmp(str1, str2, 5));
}

TEST(FTStrncmp, SpecialCharacters) {
    const char* str1 = "Hello, \t\nWorld!";
    const char* str2 = "Hello, \t\nworld!";
    CHECK(ft_strncmp(str1, str2, 13) == strncmp(str1, str2, 13));
}
