#include <iostream>
#include "middle.h"

using namespace std;

void itc_num_print(int number){

    cout << number;

}

int itc_len_num(long long number){

    int x = 0;

    if (number == 0){

        return 1;

    }
    if (number < 0){

        number *= -1;

    }

    while (number > 0){

        number /= 10;
        x += 1;

    }
    return x;

}

int itc_sum_num(long long number){

    int x = 0;

    while (number > 0){

        x += number % 10;
        number /= 10;

    }
    return x;

}

long long itc_multi_num(long long number){

    int x = 1;

    while (number > 0){

        x *= number %  10;
        number /= 10;

    }
    return x;

}
