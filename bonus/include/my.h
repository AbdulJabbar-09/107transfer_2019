/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** my.h
*/

#include <iostream>
#include <iomanip>
#include <cstring>
#include <cmath>
using namespace std;

class math
{
public:
    double ret;
    int i;
    int get;
};

#define values_ret (ti.i++, plus = strdup(str + ti.i),\
plus[ti.get - ti.i + 1] = 0, ti.ret *= x,\
ti.ret += atoi(plus))

#define put_vals (cout << fixed << setprecision(3) << x         \
<< "\e[34m -\e[0m" << "\e[31m> \e[0m" <<      \
fixed << setprecision(5) << ti.ret << endl,   \
ti.i = 1, ti.ret = ti.i)

int parse_stores_and_return(int ac, char **av);
double horner_method(char *str, double step);
int main(int ac, char **av);
