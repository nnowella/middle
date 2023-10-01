#include <iostream>
#include "middle.h"

using namespace std;

int itc_second_max_num(long long number) {

    if (number < 10) {

        return -1;

    }

    int n1 = -1, n2 = -1;

    while (number > 0) {

        int x = number % 10;
        if (x > n1) {

            n2 = n1;
            n1 = x;

        }
        else if (x > n2 && x < n1) {

            n2 = x;

        }
        number /= 10;

    }
    return n2;

}

int itc_second_simple_max_num(long long number) {

    if (number < 10) {

        return -1;

    }

    int n1 = -1, n2 = -1;

    while (number > 0) {

        int x = number % 10;
        if (x > n1) {

            n2 = n1;
            n1 = x;

        }
        else if (x > n2 && x < n1) {

            n2 = x;

        }
        number /= 10;

    }
    if (n1 == n2) {

        return -1;

    }
    else {

        return n;

    }
}

long long itc_bin_num(long long number) {

    if (number == 0) {

        return 0;

    }

    long long bin = 0;
    int n = 1;

    while (number != 0) {

        bin += (number % 2) * n;
        number /= 2;
        n *= 10;

    }
    return binary;

}

long long itc_oct_num(long long number){

    long long oct = 0;
    int x, n = 1;

    while (number > 0) {

        x = number % 8;
        oct += x * n;
        n *= 10;
        number /= 8;

    }
    return oct;

}

int itc_rev_bin_num(long long number){

    int x = 0, n = 1;

    if (number < 0){

        return -1;

    }
    else {
        while (number > 0) {

            x += (number % 10) * n;
            n *= 2;
            number /= 10;

        }
    }
    return x;

}

int itc_rev_oct_num(long long number){

    int x = 0, n = 1;

    while (number > 0) {
        x += (number % 10) * n;
        n *= 8;
        number /= 10;
    }
    return x;

}
