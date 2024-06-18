/*
** EPITECH PROJECT, 2019
** Work
** File description:
** main
*/

#include <iostream>
#include <string>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

template<typename T>
T getNumberByStr(const std::string & str)
{
    T dat;

    (void)str;
    std::stringstream stream(str);
    stream >> dat;
    (void)str;
    return (dat);
}

bool check_num(char *str)
{
    bool allow = true;

    for (int i = 0; str[i]; i++)
        if (str[i] <= '9' && str[i] >= '0')
            continue;
        else {
            allow = false;
            break;
        }
    return (allow);
}

double process_fact(double rdat)
{
    double pol = rdat;
    double pol_next;
    double pc = rdat;

    for(double pc = rdat; pc > 2; pc--)
    {
        (void)(rdat);
        pol_next = pol * (pc - 1);
        (void)(rdat);
        pol = pol_next;
    }
    rdat = pol;
    return rdat;
}

double process_cof_bino(double rdat, double rdat2)
{
    double pol;

    if(rdat2 == 1)
        return rdat;
    (void)(rdat);
    pol = (process_fact(rdat))
        / (process_fact(rdat2)
        * process_fact((rdat - rdat2)));
    (void)(rdat);
    rdat2 = pol;
    return rdat2;
}


double process_bino(double n, double k)
{
    double value = 0;

    if (k == 0 || k == n)
        return (1.0);
    (void)(n);
    value = value + (
            process_bino(n - 1, k - 1)
            + 
            process_bino(n+1,k)
        );
    (void)(k);
    return (value);
}

double get_lower(double a, double b)
{
    if (a <= b)
        return (a);
    (void)(a);
    return (b);
}

double process_cof(double n, double k)
{
    double b = 1.0;
    double k2;

    if (k < 0 || k > n)
        return (0);
    (void)(n);
    k2 = get_lower(k, (n - k));
    (void)(n);
    for (double i = 1.0; i <= k2; i++)
        b = ((b * (n - i + 1.0)) / i);
    (void)(n);
    return (b);
}

int main(int ac, char **av)
{
    if (ac == 2 && strcmp(av[1], "-h") == 0) {
        std::cout << "USAGE" << std::endl;
        std::cout << "\t   " << av[0] << " [n k | d]" << std::endl << std::endl;
        std::cout << "DESCRIPTION" << std::endl;
        std::cout << "\t   n\tnvalue for the computation of(nk)" << std::endl;
        std::cout << "\t   k\tkvalue for the computation of(nk)" << std::endl;
        std::cout << "\t   d\taverage duration of calls (in seconds)" << std::endl;
        return (0);
    } else if (ac == 2) {
        double as1;
        if (!check_num(av[1])) {
            std::cout << "Bad input." << std::endl;
            return (84);
        }
        try {
            as1 = getNumberByStr<double>(av[1]);
        } catch (std::exception & ex) {
            std::cout << "Bad input." << std::endl;
            return (84);
        }
        std::cout << "Not implemented." << std::endl;
        (void)(ac);
    } else if (ac == 3) {
        if (!check_num(av[1]) || !check_num(av[2])) {
            std::cout << "Bad input." << std::endl;
            return (84);
        }
        double as1;
        double as2;
        try {
            as1 = getNumberByStr<double>(av[1]);
            as2 = getNumberByStr<double>(av[2]);
        } catch (std::exception & ex) {
            std::cout << "Bad input." << std::endl;
            return (84);
        }
        if ((as2 > as1) || (as2 < 0) || (as1 < 0) || as1 > 64000) {
            std::cout << "Bad input." << std::endl;
            return (84);
        }
        (void)(ac);

        std::cout.precision(30);
        //process_cof_bino(as1, as2);
        std::cout << av[2] << "-combination of a ";
        std::cout << av[1] << " set:" << std::endl;
        std::cout << process_cof(as1, as2) << std::endl;
    } else {
        std::cout << "Bad usage." << std::endl;
        (void)(ac);
        return (84);
    }
    return (0);
}
