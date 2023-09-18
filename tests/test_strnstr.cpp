#include <CppUTest/TestHarness.h>
#include <cstring>

extern "C" {
    #include "libft.h"   // Assuming libft.h has the prototype for ft_strnstr
}

TEST_GROUP(FTStrnstr) {};

TEST(FTStrnstr, FindSubstringInMiddle) {
    const char* haystack = "Hello, World!";
    const char* needle = "o, W";
    CHECK(ft_strnstr(haystack, needle, 13) == strnstr(haystack, needle, 13));
}

TEST(FTStrnstr, FindSubstringAtStart) {
    const char* haystack = "Hello, World!";
    const char* needle = "Hello";
    CHECK(ft_strnstr(haystack, needle, 13) == strnstr(haystack, needle, 13));
}

TEST(FTStrnstr, FindSubstringAtEnd) {
    const char* haystack = "Hello, World!";
    const char* needle = "World!";
    CHECK(ft_strnstr(haystack, needle, 13) == strnstr(haystack, needle, 13));
}

TEST(FTStrnstr, SubstringNotInString) {
    const char* haystack = "Hello, World!";
    const char* needle = "Universe";
    CHECK(ft_strnstr(haystack, needle, 13) == strnstr(haystack, needle, 13));
}

TEST(FTStrnstr, EmptySubstring) {
    const char* haystack = "Hello, World!";
    const char* needle = "";
    CHECK(ft_strnstr(haystack, needle, 13) == strnstr(haystack, needle, 13));  // Should always return haystack
}

TEST(FTStrnstr, ZeroLengthSearch) {
    const char* haystack = "Hello, World!";
    const char* needle = "Hello";
    CHECK(ft_strnstr(haystack, needle, 0) == strnstr(haystack, needle, 0));  // Should always be NULL as nothing is searched
}

TEST(FTStrnstr, SubstringExceedingLimit) {
    const char* haystack = "Hello, World!";
    const char* needle = "World!";
    CHECK(ft_strnstr(haystack, needle, 7) == strnstr(haystack, needle, 7));  // Should return NULL as needle is outside the limit
}

TEST(FTStrnstr, ExactLimitMatch) {
    const char* haystack = "Hello, World!";
    const char* needle = ", ";
    CHECK(ft_strnstr(haystack, needle, 6) == strnstr(haystack, needle, 6)); // It should match as ", " starts exactly at position 6
}

