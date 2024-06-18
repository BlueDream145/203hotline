# 203hotline
Epitech Project, MATHS 203

Subject:

Uncle Luigi runs a 25-phone hotline in Pondicherry.He reckons 3500 people could possibly call during each 8-hour day, and would like to know the probability of anoverload (that is, the probability of no line being available), depending on the average duration of calls.Here is your mission.

The random variable representing the number of people calling at a given time follows the binomial distribution,whereas calls are independent from each other.This program could be reused on a larger scale, so if you fear that computing the binomial distribution may be time-consuming, and you’re thinking about estimating it with a Poisson distribution, how very clever of you.

You then have to program software to confirm this, by doing the following:
•computing the binomial coefficient(nk)givenkandn(emphasizing the computation speed and stack optimiza-tion),
•comparing binomial and Poisson distributions, given the average duration of calls, and printing
    –the probabilities of gettingnsimultaneous calls (fornincreasing from 0 to 50),
    –the probability of an overload,
    –the computation time.
    
Usage:

./203hotline [n k | d]

n   n value for the computation of(nk)
k   kvalue for the computation of(nk)
d   average duration of calls (in seconds)

Example:

![alt text](https://github.com/alexandre10044/203hotline/blob/master/example.png?raw=true)
