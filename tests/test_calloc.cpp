#include <CppUTest/TestHarness.h>
#include <cstdlib>

extern "C" {
    #include "libft.h"   // Assuming libft.h has the prototype for ft_calloc
}

TEST_GROUP(FTCalloc) {};

TEST(FTCalloc, AllocateNonZeroMemory) {
    size_t nmemb = 5;
    size_t size = sizeof(int);
    int* ft_mem = (int*)ft_calloc(nmemb, size);
    int* std_mem = (int*)calloc(nmemb, size);
    
    // Check if memory was allocated
    CHECK(ft_mem != NULL);
    CHECK(std_mem != NULL);
    
    // Check that the memory is zeroed out
    for (size_t i = 0; i < nmemb; i++) {
        CHECK(ft_mem[i] == 0);
        CHECK(std_mem[i] == 0);
    }
    
    free(ft_mem);
    free(std_mem);
}

TEST(FTCalloc, AllocateZeroMemory) {
    void* ft_mem = ft_calloc(0, sizeof(int));
    void* std_mem = calloc(0, sizeof(int));

    // Both calls should either return NULL or a valid pointer which can be passed to free
    if (ft_mem) {
        free(ft_mem);
    }
    if (std_mem) {
        free(std_mem);
    }

    // Since behavior can differ between implementations, just ensure it doesn't crash
}

TEST(FTCalloc, AllocateWithZeroSize) {
    size_t nmemb = 5;

    void* ft_mem = ft_calloc(nmemb, 0);
    void* std_mem = calloc(nmemb, 0);

    // Both calls should either return NULL or a valid pointer which can be passed to free
    if (ft_mem) {
        free(ft_mem);
    }
    if (std_mem) {
        free(std_mem);
    }

    // Since behavior can differ between implementations, just ensure it doesn't crash
}

