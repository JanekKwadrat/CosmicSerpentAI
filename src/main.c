#include <curses.h>

// https://en.wikipedia.org/wiki/Linear_congruential_generator#Parameters_in_common_use
uint64_t random64(uint64_t* x) {
    *x = (uint64_t)1442695040888963407 + *x * (uint64_t)6364136223846793005;
    return (*x >> 16) ^ (*x << 48);
    //return *x ^ (*x * 177147 >> 11);
}

int main() {


    return 0;
}
