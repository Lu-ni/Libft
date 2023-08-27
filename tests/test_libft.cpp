extern "C" {
    #include "libft.h"
    #include <stdlib.h>
}

#include "CppUTest/TestHarness.h"

TEST_GROUP(FTt) {};

//unit test for: isalpha
TEST(FTt, FTisalpha) {
    for (int i = 0; i < 256; i++) {
        CHECK(ft_isalpha(i) == isalpha(i));
    }
}

//unit test for: isdigit
TEST(FTt, FTisdigit) {
    for (int i = 0; i < 256; i++) {
        CHECK(ft_isdigit(i) == isdigit(i));
    }
}

//unit test for: isalnum
TEST(FTt, FTisalnum) {
    for (int i = 0; i < 256; i++) {
        CHECK(ft_isalnum(i) == isalnum(i));
    }
}

//unit test for: isascii
    TEST(FTt, FTisascii) {
    for (int i = 0; i < 256; i++) {
        CHECK(ft_isascii(i) == isascii(i));
    }
}

//unit test for: isprint
TEST(FTt, FTisprint) {
    for (int i = 0; i < 256; i++) {
        CHECK(ft_isprint(i) == isprint(i));
    }
}

//unit test for: strlen
//unit test for: memset
//unit test for: bzer
//unit test for: memcpy
//unit test for: memmove
//unit test for: strlcpy
//unit test for: strlcat
//unit test for: toupper
//unit test for: tolower
//unit test for: strchr
//unit test for: strrchr
//unit test for: strncmp
//unit test for: memchr
//unit test for: memcmp
//unit test for: strnstr
//unit test for: atoi
//unit test for: calloc
//unit test for: strup
