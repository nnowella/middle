#include <iostream>
#include "middle.h"

using namespace std;

int itc_max_num(long long number) {

    int r = 0;

    while (number != 0) {

        int x = number % 10;
        if (x > r) {

            r = x;

        }
        number /= 10;

    }
    return r;

}

int itc_min_num(long long number) {

    int n = 9;
    while (number != 0) {

        int x = number % 10;
        if (x < n) {

            n = x;

        }
        number /= 10;

    }
    return n;

}

int itc_rev_num(long long number){

    int n = 0;

    while (number != 0) {

        n++;
        number /= 10;

    }
    return n;

}

int itc_null_count(long long number) {

    if (number == 0) {

        return 1;

    }

    int n = 0;

    while (number != 0) {

        if (number % 10 == 0) {

            n++;

        }
        number /= 10;

    }
    return n;

}

bool itc_mirror_num(long long number){

    int n = number;
    long x = 0;

    while(number){

        x = x * 10 + number % 10;
        number /= 10;

    }

    if (x == n){

        return true;

    }
    else {

       return false;

    }
}

int itc_mirror_count(long long number){

    int n = 0;
    int c = 1;

    while (c <= number){

        if (itc_mirror_num(c) == 1){

            n += 1;

        }
        c += 1;
    }
    return n;
}
