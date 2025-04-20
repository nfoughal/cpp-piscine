/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:55:10 by nfoughal          #+#    #+#             */
/*   Updated: 2023/09/23 12:25:24 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}

PmergeMe::~PmergeMe(){}

PmergeMe &PmergeMe::operator=(const PmergeMe &other)
{
    (void)other;
    return *this;
}

PmergeMe::PmergeMe(const PmergeMe &other)
{
    *this = other;
}


int toInt(std::string str)
{
    int result;

    std::stringstream s(str);

    s >> result;
    if(s.fail() || result < 0 || !s.eof())
    {
        std::cout << "Error: failde or overflow accured or negative number" << std::endl;
        exit(0);
    }
    return result;
}

std::vector<int> pars(std::vector<std::string> vec)
{
    size_t i = 0;
    std::vector<int> intVec;

    while(i < vec.size())
        intVec.push_back(toInt(vec[i++]));
    return intVec;
}

std::vector<int> jacobsthalNumbers(int size)
{
    int i = 2;
    std::vector<int> jacobs;
    jacobs.push_back(0);
    jacobs.push_back(1);

    while(1)
    {
        int inJacob = jacobs[i - 1] + 2 * jacobs[i - 2];
        jacobs.push_back(inJacob);
        if(inJacob >= size)
            break;
        i++;
    }
    return (jacobs);
}


void insertFun(std::vector<int>  firsts, std::vector<int> & seconds, int index)
{
    size_t i = 0;
    while(i < seconds.size())
    {
        if(seconds[i] >= firsts[index])
        {
            seconds.insert(seconds.begin() + i, firsts[index]);
            return ;
        }
        i++;
    }
   seconds.insert(seconds.end() , firsts[index]);
}

void   jacobsort(std::vector<int> jacob, std::vector<int> firsts, std::vector<int> & seconds)
{
    size_t lastjacob = 1;
    size_t i = 0;
    while(i < jacob.size())
    {
        size_t j = jacob[i] - 1;
        while(j >= lastjacob)
        {
            if (j < firsts.size())
                insertFun(firsts, seconds, j);
            j--;
        }
        lastjacob = jacob[i];
        i++;
    }
}


void PmergeMe::vectorSorter(std::vector<std::string> vec)
{
    size_t i = 0;
    std::vector<int> intVec;
    std::vector<int> intvec2;
    std::vector<std::pair<int, int> > pairs;

    intVec = pars(vec);
    std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();
    
    if(intVec.size() == 1)
    {
        std::cout << intVec[0] << std::endl;
        exit(0);
    }

    i = 0;
    std::cout << "Before : ";
    while(i < intVec.size())
        std::cout << intVec[i++] << " ";
    std::cout<< std::endl;
    
    if(intVec.size() % 2 != 0)
    {
        intvec2.push_back(intVec[0]);
        intVec.erase(intVec.begin());
    }
    i = 0;
    while(i < intVec.size())
    {
        if(i + 1 < intVec.size())
        {
            int first = intVec[i];
            int second = intVec[i + 1];
            
            if(first > second)
            {
            int tmp = first;
            first = second;
            second = tmp;
            }
            pairs.push_back(std::make_pair(first, second));
        }
        i += 2;
    }

    i = 0;
    size_t j = 0;
    while(i < pairs.size() - 1)
    {
        size_t min = i;
        j = i + 1;
        while(j < pairs.size())
        {
            if(pairs[j].second < pairs[min].second)
                min = j;
            j++;
        }

        if(i != min)
        {
            std::pair<int, int> tmp = pairs[i];
            pairs[i] = pairs[min];
            pairs[min] = tmp;
        }

        i++;
    }

    std::vector<int> firsts;
    std::vector<int> seconds;

    i = 0;
    while(i < pairs.size())
    {
        firsts.push_back(pairs[i].first);
        seconds.push_back(pairs[i].second);
        i++;
    }
    seconds.insert(seconds.begin(), firsts[0]);
    
    std::vector<int> jacob;
    jacob = jacobsthalNumbers(firsts.size());
    jacob.erase(jacob.begin());
    jacob.erase(jacob.begin());
    jacob.erase(jacob.begin());

   jacobsort(jacob, firsts, seconds);

   if (intvec2.size())
   {
        insertFun(intvec2, seconds, 0);
   }

    i = 0;
    std::cout << "After  : ";
    while(i < seconds.size())
        std::cout << seconds[i++] << " ";
    std::cout<< std::endl;
    std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();

    std::chrono::microseconds duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

    std::cout << "Time to process a range of " << seconds.size() << " elements with std::[vector] : " << duration.count() << " us"<< std::endl;
}









std::deque<int> dequePars(std::deque<std::string> deq)
{
    size_t i = 0;
    std::deque<int> intDeq;

    while(i < deq.size())
        intDeq.push_back(toInt(deq[i++]));
    return intDeq;
}

std::deque<int> dequejacobsthalNumbers(int size)
{
    int i = 2;
    std::deque<int> jacobs;
    jacobs.push_back(0);
    jacobs.push_back(1);

    while(1)
    {
        int inJacob = jacobs[i - 1] + 2 * jacobs[i - 2];
        jacobs.push_back(inJacob);
        if(inJacob >= size)
            break;
        i++;
    }
    return (jacobs);
}


void insertFun(std::deque<int>  firsts, std::deque<int> & seconds, int index)
{
    size_t i = 0;
    while(i < seconds.size())
    {
        if(seconds[i] >= firsts[index])
        {
            seconds.insert(seconds.begin() + i, firsts[index]);
            return ;
        }
        i++;
    }
   seconds.insert(seconds.end() , firsts[index]);
}

void   jacobsort(std::deque<int> jacob, std::deque<int> firsts, std::deque<int> & seconds)
{
    size_t lastjacob = 1;
    size_t i = 0;
    while(i < jacob.size())
    {
        size_t j = jacob[i] - 1;
        while(j >= lastjacob)
        {
            if (j < firsts.size())
                insertFun(firsts, seconds, j);
            j--;
        }
        lastjacob = jacob[i];
        i++;
    }
}


void PmergeMe::dequeSorter(std::deque<std::string> deq)
{
    size_t i = 0;
    std::deque<int> intDeq;
    std::deque<int> intdeq2;
    std::deque<std::pair<int, int> > pairs;
        intDeq = dequePars(deq);
        std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();
    
    if(intDeq.size() == 1)
    {
        std::cout << intDeq[0] << std::endl;
        exit(0);
    }
    if(intDeq.size() % 2 != 0)
    {
        intdeq2.push_back(intDeq[0]);
        intDeq.erase(intDeq.begin());
    }
    i = 0;
    while(i < intDeq.size())
    {
        if(i + 1 < intDeq.size())
        {
            int first = intDeq[i];
            int second = intDeq[i + 1];
            
            if(first > second)
            {
            int tmp = first;
            first = second;
            second = tmp;
            }
            pairs.push_back(std::make_pair(first, second));
        }
        i += 2;
    }

    i = 0;
    size_t j = 0;
    while(i < pairs.size() - 1)
    {
        size_t min = i;
        j = i + 1;
        while(j < pairs.size())
        {
            if(pairs[j].second < pairs[min].second)
                min = j;
            j++;
        }

        if(i != min)
        {
            std::pair<int, int> tmp = pairs[i];
            pairs[i] = pairs[min];
            pairs[min] = tmp;
        }

        i++;
    }

    std::deque<int> firsts;
    std::deque<int> seconds;

    i = 0;
    while(i < pairs.size())
    {
        firsts.push_back(pairs[i].first);
        seconds.push_back(pairs[i].second);
        i++;
    }
    seconds.insert(seconds.begin(), firsts[0]);
    
    std::deque<int> jacob;
    jacob = dequejacobsthalNumbers(firsts.size());
    jacob.erase(jacob.begin());
    jacob.erase(jacob.begin());
    jacob.erase(jacob.begin());

   jacobsort(jacob, firsts, seconds);

   if (intdeq2.size())
   {
        insertFun(intdeq2, seconds, 0);
   }

    i = 0;
    std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();

    std::chrono::microseconds duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

    std::cout << "Time to process a range of " << seconds.size() << " elements with std::[deque] : " << duration.count() << " us"<< std::endl;
}
