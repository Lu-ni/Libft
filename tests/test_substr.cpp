#include <CppUTest/TestHarness.h>
#include <cstring>

extern "C" {
    #include "libft.h"   // Assuming libft.h has the prototype for ft_substr
}

TEST_GROUP(FTSubstr) {};

TEST(FTSubstr, SubstringWithinBounds) {
    const char* original = "Hello, World!";
    unsigned int start = 7;
    size_t len = 5;

    char* substr = ft_substr(original, start, len);

    CHECK(substr != NULL);
    STRCMP_EQUAL(substr, "World");

    free(substr);  // Freeing since ft_substr is expected to use malloc for memory allocation
}

TEST(FTSubstr, SubstringOutOfBounds) {
    const char* original = "Hello, World!";
    unsigned int start = 50;  // Start is beyond the string length
    size_t len = 5;

    char* substr = ft_substr(original, start, len);

    // Assuming your function returns an empty string if the start is out of bounds.
    CHECK(substr != NULL);
    STRCMP_EQUAL(substr, "");

    free(substr);
}

TEST(FTSubstr, SubstringFullLength) {
    const char* original = "Hello";
    unsigned int start = 0;
    size_t len = 5;

    char* substr = ft_substr(original, start, len);

    CHECK(substr != NULL);
    STRCMP_EQUAL(substr, "Hello");

    free(substr);
}

TEST(FTSubstr, SubstringZeroLength) {
    const char* original = "Hello, World!";
    unsigned int start = 7;
    size_t len = 0;

    char* substr = ft_substr(original, start, len);

    // Assuming your function returns an empty string if len is 0.
    CHECK(substr != NULL);
    STRCMP_EQUAL(substr, "");

    free(substr);
}

TEST(FTSubstr, SubstringNullString) {
    const char* original = NULL;
    unsigned int start = 0;
    size_t len = 5;

    char* substr = ft_substr(original, start, len);

    // Assuming your function returns NULL if the input string is NULL.
    CHECK(substr == NULL);
}

// ... you can add more tests for additional edge cases or unique scenarios.

