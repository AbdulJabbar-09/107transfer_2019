/*
** EPITECH PROJECT, 2020
** 107transfer made in c++
** File description:
** 107transfer
*/

#include "../include/my.h"

double my_horner(char *str, double x)
{
    math ti;
    ti.i = strlen(str) - 1;
    ti.ret = 0;
    ti.get = ti.i;
    char *plus;

    for (ti.i = strlen(str) - 1; ti.i >= 0; ti.i -= 2) {
        ti.get = ti.i;
        for (; ti.i >= 0 && str[ti.i] != '*'; ti.i--);
        values_ret;
    } return (ti.ret);
}

int parse_stores_and_return(int ac, char **av)
{
    math ti;
    ti.ret = 1;

    for (double x = 0; x < 1.001; x += 0.001) {
        for (ti.i = 1; ti.i < ac - 1; ti.i += 2)
            ti.ret *= my_horner(av[ti.i], x) /
                my_horner(av[ti.i + 1], x);
        if (x == 0.001 && ti.ret == 0.00000) return (84);
        put_vals;
    } return (0);
}

int check_args(int ac, char **av)
{
    for (int i = 1; av[i] != NULL; i++) {
        for (int j = 0; av[i][j] != '\0'; j++) {
            if ((av[i][j] < '0' || av[i][j] > '9') &&\
                (av[i][j] != '*' && av[i][j] != '-'))
                return (84);
            else if (av[i][j] == '*' && av[i][j + 1] == '*' ||
                     av[i][j] == '*' && av[i][j+ 1] == '\0') return (84);
        }
    } return (0);
}

void usage(void)
{
    cout << "USAGE\n    ./107transfer [num den]*\n";
    cout << "\nDESCRIPTION\n    num     polynomial numerator ";
    cout << "defined by its coeficients\n    den   ";
    cout << "  polynomial denominator defined by its coeficients" << endl;
}

int main(int ac, char **av)
{
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        usage();
        return (0);
    } else if (ac != 3 && ac != 5) return (84);
    if (ac == 5 && av[4][0] == '0' || ac == 3 && av[2][0] == '0')
        return (84);
    if (check_args(ac, av) == 84) return (84);
    return ((parse_stores_and_return(ac, av) == 84) ? 84 : 0);
}
