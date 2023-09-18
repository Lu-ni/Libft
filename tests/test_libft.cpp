extern "C" {
    #include "libft.h"
    #include <stdlib.h>
}

#include "CppUTest/TestHarness.h"
#include <cstring>

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
TEST_GROUP(FTStrlcpy) {};
TEST(FTStrlcpy, RegularString) {
    char dest1[50];
    char dest2[50];
    CHECK(ft_strlcpy(dest1, "Hello, World!", sizeof(dest1)) == strlcpy(dest2, "Hello, World!", sizeof(dest2)));
    STRCMP_EQUAL(dest1, dest2);
}

TEST(FTStrlcpy, EmptySource) {
    char dest1[50] = "previous";
    char dest2[50] = "previous";
    CHECK(ft_strlcpy(dest1, "", sizeof(dest1)) == strlcpy(dest2, "", sizeof(dest2)));
    STRCMP_EQUAL(dest1, dest2);
}

TEST(FTStrlcpy, EmptyDestination) {
    char dest1[1] = "";
    char dest2[1] = "";
    CHECK(ft_strlcpy(dest1, "Hello", sizeof(dest1)) == strlcpy(dest2, "Hello", sizeof(dest2)));
    STRCMP_EQUAL(dest1, dest2);
}

TEST(FTStrlcpy, BufferLargerThanSource) {
    char dest1[50];
    char dest2[50];
    CHECK(ft_strlcpy(dest1, "Hello", sizeof(dest1)) == strlcpy(dest2, "Hello", sizeof(dest2)));
    STRCMP_EQUAL(dest1, dest2);
}

TEST(FTStrlcpy, BufferSmallerThanSource) {
    char dest1[5];
    char dest2[5];
    CHECK(ft_strlcpy(dest1, "Hello, World!", sizeof(dest1)) == strlcpy(dest2, "Hello, World!", sizeof(dest2)));
    STRCMP_EQUAL(dest1, dest2);
}

TEST(FTStrlcpy, BufferEqualToSource) {
    char dest1[14];
    char dest2[14];
    CHECK(ft_strlcpy(dest1, "Hello, World!", sizeof(dest1)) == strlcpy(dest2, "Hello, World!", sizeof(dest2)));
    STRCMP_EQUAL(dest1, dest2);
}

TEST(FTStrlcpy, BufferSizeZero) {
    char dest1[1] = "";
    char dest2[1] = "";
    CHECK(ft_strlcpy(dest1, "Hello, World!", 0) == strlcpy(dest2, "Hello, World!", 0));
    STRCMP_EQUAL(dest1, dest2);
}

//unit test for: strlcat
TEST_GROUP(FTStrlcat) {};

TEST(FTStrlcat, RegularStringConcatenation) {
    char dest1[50] = "Hello, ";
    char dest2[50] = "Hello, ";
    CHECK(ft_strlcat(dest1, "World!", sizeof(dest1)) == strlcat(dest2, "World!", sizeof(dest2)));
    STRCMP_EQUAL(dest1, dest2);
}

TEST(FTStrlcat, EmptySource) {
    char dest1[50] = "Hello, ";
    char dest2[50] = "Hello, ";
    CHECK(ft_strlcat(dest1, "", sizeof(dest1)) == strlcat(dest2, "", sizeof(dest2)));
    STRCMP_EQUAL(dest1, dest2);
}

TEST(FTStrlcat, EmptyDestination) {
    char dest1[1] = "";
    char dest2[1] = "";
    CHECK(ft_strlcat(dest1, "World!", sizeof(dest1)) == strlcat(dest2, "World!", sizeof(dest2)));
    STRCMP_EQUAL(dest1, dest2);
}

TEST(FTStrlcat, BufferLargerThanCombinedLength) {
    char dest1[50] = "Hello, ";
    char dest2[50] = "Hello, ";
    CHECK(ft_strlcat(dest1, "World!", sizeof(dest1)) == strlcat(dest2, "World!", sizeof(dest2)));
    STRCMP_EQUAL(dest1, dest2);
}

TEST(FTStrlcat, BufferSmallerThanCombinedLength) {
    char dest1[10] = "Hello, ";
    char dest2[10] = "Hello, ";
    CHECK(ft_strlcat(dest1, "World! Universe!", sizeof(dest1)) == strlcat(dest2, "World! Universe!", sizeof(dest2)));
    STRCMP_EQUAL(dest1, dest2);
}

TEST(FTStrlcat, BufferEqualToCombinedLength) {
    char dest1[14] = "Hello, ";
    char dest2[14] = "Hello, ";
    CHECK(ft_strlcat(dest1, "World!", sizeof(dest1)) == strlcat(dest2, "World!", sizeof(dest2)));
    STRCMP_EQUAL(dest1, dest2);
}

TEST(FTStrlcat, BufferSizeZero) {
    char dest1[1] = "";
    char dest2[1] = "";
    CHECK(ft_strlcat(dest1, "World!", 0) == strlcat(dest2, "World!", 0));
    STRCMP_EQUAL(dest1, dest2);
}

//unit test for: toupper
TEST_GROUP(FTtoupper) {};

TEST(FTtoupper, UppercaseCharacters) {
    for (char c = 'A'; c <= 'Z'; ++c) {
        CHECK(ft_toupper(c) == toupper(c));
    }
}

TEST(FTtoupper, LowercaseCharacters) {
    for (char c = 'a'; c <= 'z'; ++c) {
        CHECK(ft_toupper(c) == toupper(c));
    }
}

TEST(FTtoupper, DigitsAndSpecialChars) {
    for (char c = '0'; c <= '9'; ++c) {
        CHECK(ft_toupper(c) == toupper(c));
    }
    const char* specialChars = "!@#$%^&*()-_=+[]{}|;:'\",.<>?/";
    for (int i = 0; specialChars[i]; ++i) {
        CHECK(ft_toupper(specialChars[i]) == toupper(specialChars[i]));
    }
}

TEST(FTtoupper, NonASCII) {
    for (int c = 128; c <= 255; ++c) {
        CHECK(ft_toupper(c) == toupper(c));
    }
}

//unit test for: atoi
TEST(FTt, FTatoi) {
    CHECK(ft_atoi("123") == atoi("123"));
    CHECK(ft_atoi("-123") == atoi("-123"));
    CHECK(ft_atoi("+123") == atoi("+123"));
    CHECK(ft_atoi("-+123") == atoi("-+123"));
    CHECK(ft_atoi("--123") == atoi("--123"));
    CHECK(ft_atoi("001") == atoi("001"));
    CHECK(ft_atoi("2147483647") == atoi("2147483647"));
    CHECK(ft_atoi("-2147483648") == atoi("-2147483648"));
}

//unit test for: calloc
//unit test for: strup
