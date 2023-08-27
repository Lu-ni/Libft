extern "C" {
    #include "libft.h"
    #include <stdlib.h>
}

#include "CppUTest/TestHarness.h"

TEST_GROUP(Ft) {};

//unit test for: isalpha
TEST(Ft, FTisalpha) {
    for (int i = 0; i < 256; i++) {
        CHECK(ft_isalpha(i) == isalpha(i));
    }
}

//unit test for: isdigit
TEST_GROUP(FTt) {};
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
    for (int i = -1000; i < 2560; i++) {
        CHECK(ft_isascii(i) == isascii(i));
    }
}

//unit test for: isprint
TEST(FTt, FTisprint) {
    for (int i = -1000; i < 2560; i++) {
        CHECK(ft_isprint(i) == isprint(i));
    }
}

//unit test for: strlen
TEST(FTt, FTstrlen) {
    CHECK(ft_strlen("") == strlen(""));
    CHECK(ft_strlen("ola") == strlen("ola"));
    CHECK(ft_strlen("923084 owewijr ;';';,.,.") == strlen("923084 owewijr ;';';,.,."));
    CHECK(ft_strlen("!@#!@#$%^i*(^%)$") == strlen("!@#!@#$%^i*(^%)$"));
}

//unit test for: memset
TEST(FTt, FTmemset) {
    char str1[10] = {'a','a','a','a','a','a','a','a','\0'};
    char str2[10] = {'a','a','a','a','a','a','a','a','\0'};

    ft_memset(str1, 'x', 4);
    memset(str2, 'x', 4);
    STRCMP_EQUAL(str2,str1);

    ft_memset(str1 + 2, 'e', 3);
    memset(str2 + 2, 'e', 3);
    STRCMP_EQUAL(str2,str1);
}
//unit test for: bzero
TEST(FTt, FTbzero) {
    char str1[10] = {'a','a','a','a','a','a','a','a','\0'};
    char str2[10] = {'a','a','a','a','a','a','a','a','\0'};

    ft_bzero(str1, 4);
    bzero(str2, 4);
    STRCMP_EQUAL(str2,str1);

    ft_bzero(str1 + 2, 3);
    bzero(str2 + 2, 3);
    STRCMP_EQUAL(str2,str1);
}

//unit test for: memcpy
TEST(FTt, FTmemcpy) {
    char src1[10] = {'a','a','a','a','a','a','a','a','\0'};
    char dest1[10] = {'x','x','x','x','x','x','x','x','\0'};
    char src2[10] = {'a','a','a','a','a','a','a','a','\0'};
    char dest2[10] = {'x','x','x','x','x','x','x','x','\0'};

    ft_memcpy(dest1, src1, 4);
    memcpy(dest2, src2, 4);
    STRCMP_EQUAL(dest1, dest2);
}

//unit test for: memmove
TEST(FTt, FTmemmove) {
    char src1[10] = {'a','e','w','q','t','y','u','i','\0'};
    char src2[10] = {'a','e','w','q','t','y','u','i','\0'};

    ft_memmove(src1, src1+2, 4);
    memmove(src2, src2+2, 4);
    STRCMP_EQUAL(src1, src2);

    ft_memmove(src1 + 2, src1, 4);
    memmove(src2 + 2, src2, 4);
    STRCMP_EQUAL(src1, src2);
}

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
