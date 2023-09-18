#include <CppUTest/TestHarness.h>
#include <cstring>

extern "C" {
    #include "libft.h"   // Assuming libft.h has the prototype for ft_strdup
}

TEST_GROUP(FTStrdup) {};

TEST(FTStrdup, DuplicateNonNullString) {
    const char* original = "Hello, World!";
    
    char* ft_dup = ft_strdup(original);
    char* std_dup = strdup(original);

    // Check if memory was allocated
    CHECK(ft_dup != NULL);
    CHECK(std_dup != NULL);
    
    // Check if both duplicates are the same as the original
    STRCMP_EQUAL(ft_dup, original);
    STRCMP_EQUAL(std_dup, original);
    
    free(ft_dup);
    free(std_dup);
}

TEST(FTStrdup, DuplicateEmptyString) {
    const char* original = "";
    
    char* ft_dup = ft_strdup(original);
    char* std_dup = strdup(original);
    
    // Check if memory was allocated
    CHECK(ft_dup != NULL);
    CHECK(std_dup != NULL);
    
    // Check if both duplicates are the same as the original (empty string)
    STRCMP_EQUAL(ft_dup, original);
    STRCMP_EQUAL(std_dup, original);
    
    free(ft_dup);
    free(std_dup);
}
