#include <CppUTest/TestHarness.h>
#include <cstring>

extern "C" {
    #include "libft.h"   // Assuming libft.h has the prototype for ft_strjoin
}

TEST_GROUP(FTStrjoin) {};

TEST(FTStrjoin, JoinTwoNonEmptyStrings) {
    const char* prefix = "Hello, ";
    const char* suffix = "World!";

    char* result = ft_strjoin(prefix, suffix);

    CHECK(result != NULL);
    STRCMP_EQUAL(result, "Hello, World!");

    free(result);  // Freeing since ft_strjoin is expected to use malloc for memory allocation
}

TEST(FTStrjoin, JoinPrefixEmptyString) {
    const char* prefix = "";
    const char* suffix = "World!";

    char* result = ft_strjoin(prefix, suffix);

    CHECK(result != NULL);
    STRCMP_EQUAL(result, "World!");

    free(result);
}

TEST(FTStrjoin, JoinSuffixEmptyString) {
    const char* prefix = "Hello, ";
    const char* suffix = "";

    char* result = ft_strjoin(prefix, suffix);

    CHECK(result != NULL);
    STRCMP_EQUAL(result, "Hello, ");

    free(result);
}

TEST(FTStrjoin, JoinTwoEmptyStrings) {
    const char* prefix = "";
    const char* suffix = "";

    char* result = ft_strjoin(prefix, suffix);

    CHECK(result != NULL);
    STRCMP_EQUAL(result, "");

    free(result);
}

TEST(FTStrjoin, JoinWithPrefixNull) {
    const char* prefix = NULL;
    const char* suffix = "World!";

    char* result = ft_strjoin(prefix, suffix);

    // Assuming your function returns NULL if one of the input strings is NULL.
    CHECK(result == NULL);
}

TEST(FTStrjoin, JoinWithSuffixNull) {
    const char* prefix = "Hello, ";
    const char* suffix = NULL;

    char* result = ft_strjoin(prefix, suffix);

    // Assuming your function returns NULL if one of the input strings is NULL.
    CHECK(result == NULL);
}

// ... you can add more tests for additional edge cases or unique scenarios.

