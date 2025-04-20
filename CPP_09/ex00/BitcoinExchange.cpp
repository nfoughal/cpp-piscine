/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 13:07:10 by nfoughal          #+#    #+#             */
/*   Updated: 2023/09/23 11:14:21 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}

BitcoinExchange::~BitcoinExchange(){}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
    (void)other;
    return *this;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
    *this = other;
}

int toInt(std::string str)
{
    int result;

    std::stringstream s(str);
    s >> result;
    if(s.fail() || !s.eof())
    {
        std::cout << "Error: failed or overflow accured" << std::endl;
        return -1;
    }
    return (result);
    
}

bool ifInteger(std::string str)
{
    size_t i = 0;
    if(str[i] == '-')
        i++;
    if (!str[i])
        return 0;
    while(i < str.length())
    {
        if(!isdigit(str[i]))
            return(0);
        i++;
    }
    return 1;
}



bool ifDouble(std::string str)
{  
    size_t i = 0;
    int foundPoint = 0;

    if(str[i] == '+' || str[i] == '-')
        i++;
    while(i < str.length())
    {
        if(foundPoint && str[i] == '.')
            return (0);
        if(str[i] == '.')
            foundPoint = 1;
        else if(!isdigit(str[i]))
            return(0);
        i++;
    }
   
    return foundPoint && i > 1;
}

float tofloat(std::string str)
{

    if (!ifInteger(str) && !ifDouble(str))
    {
        std::cout << "Error: failed" << std::endl;
        return -214748364;
    }
        
    float result;
    std::stringstream s(str);

    s >> result;
    if(!s.eof())
    {
        std::cout << "Error: failed" << std::endl;
        return -214748364;
    }
    return (result);   
}

int ifValid(std::string str)
{
    size_t pos = str.find(" | ");
    if(pos != 10 || pos == std::string::npos)
    {
       std::cout << "Error: bad input => " << str << std::endl;
       return 0;    
    }

    std::string first = str.substr(0, pos);
    std::string second = str.substr(pos + 3);
    
    if(first[4] != '-' || first[7] != '-')
    {
        std::cout << "Error: Incorrect formula most have '-' in this position!" << std::endl;
        return 0; 
    }
    
    int day, month, year;

    year = toInt(first.substr(0, 4));
    month = toInt(first.substr(5, 2));
    day = toInt(first.substr(8));
    if(year == -1 || month == -1 || day == -1)
        return 0 ;
    if (year < 2009 || year > 2022 || month < 1 || month > 12)
    {
        std::cout << "Error: Year or Month out of range" << std::endl;
        return 0 ;
    }
    int arrayOfDaysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(day < 1 || day > arrayOfDaysInMonth[month])
    {
        std::cout << "Error: day out of range" << std::endl;
        return 0;
    }
    float value = tofloat(second);
    if (value == -214748364)
     return 0 ;

    else if (value < 0)
    {
        std::cout << "Error: not a positive number." << std::endl;
        return (0);
    }
    else if (value < 0 || value > 1000)
    {
        std::cout << "Error: too large a number." << std::endl;
        return 0;
    }
    return 1;
}

void BitcoinExchange:: run(std::string file)
{
    std::ifstream input(file);
    std::ifstream datafile("data.csv");
    if(!input.is_open() || !datafile.is_open())
    {
        std::cout << "Error file not found!" << std::endl;
        return ;
    }

    std::map<std::string, float> bitcoinPrice;

    std::string line1;
    std::string date;

    while(std::getline(datafile, line1))
    {
        if(line1 == "date,exchange_rate")
            std::getline(datafile, line1);
        bitcoinPrice[line1.substr(0, 10)] = tofloat(line1.substr(11));
    }
    std::map<std::string,float>::iterator it;
    std::string line;
    while(std::getline(input, line))
    {
        if(line == "date | value")
             std::getline(input, line);
        if(ifValid(line))
        {
        it = bitcoinPrice.lower_bound(line.substr(0, 10));
        if(it != bitcoinPrice.end())
        {
            if(it != bitcoinPrice.begin() && it->first != line.substr(0, 10))
                it--;
            std::cout << line.substr(0, 10) << " => " << line.substr(13) << " = " << tofloat(line.substr(13)) * (it->second) << std::endl;
        }
        }
    }

    input.close();
    datafile.close();
}