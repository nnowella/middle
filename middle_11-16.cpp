#include <iostream>
#include "middle.h"

using namespace std;

int itc_second_max_num(long long number){

    if (number < 10){

        return -1;

    }
    int m1 = -1, m2 = -1;
    while (number > 0) {

        int x = number % 10;

        if (x > m1) {

            m2 = m1;
            m1 = x;

        }
        else if(x > m2 && x < m1){

            m2 = x;

        }
        number /= 10;
    }
    return m2;
}

int itc_second_simple_max_num(long long number){

    itc_second_max_num(number);
    itc_max_num(number);

    if (itc_second_max_num(number) != itc_max_num(number)){

        return itc_second_max_num(number);

    }
    else {

        return -1;

    }
}

long long itc_bin_num(long long number) {

    long long bin = 0;
    int x, n = 1;

    while (number > 0) {

        x = number % 2;
        bin += x * n;
        n *= 10;
        number /= 2;

    }
    return bin;

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
