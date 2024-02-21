/*Q 7) In a town, the percentage of men is 52. The percentage
of total literacy is 48. If total percentage of literate men
is 35 of the total population, write a program to find the
total number of Illiterate men and women if the population
 of the town is 80,000.
 */

#include<stdio.h>
int main()  {
    int m,f,t = 80000;
    int m_illt, f_illt;
    m = 0.52*t;
    f = 0.48*t;
    // int m_literate = 0.35*80000;
    m_illt = m - 0.35*t;
    f_illt = 0.52*t - m_illt;
    printf("Total Population of the town is %d out of which %d males and %d females are illiterate.", t,m_illt,f_illt);
    return 0;
}

