/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:30:36 by nfoughal          #+#    #+#             */
/*   Updated: 2023/09/14 01:17:50 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    this->integer = 0;
    this->character = '\0';
    this->flot = 0.0f;
    this->doble = 0.0;
}

ScalarConverter::~ScalarConverter()
{}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
    this->character = other.character;
    this->doble = other.doble;
    this->flot = other.flot;
    this->integer = other.integer;
}

ScalarConverter & ScalarConverter::operator=(const ScalarConverter &other)
{
     this->character = other.character;
    this->doble = other.doble;
    this->flot = other.flot;
    this->integer = other.integer;
    return (*this);
}

int ifInteger(std::string str)
{
    size_t i = 0;
    if(str[i] == '+' || str[i] == '-')
        i++;
    while(i < str.length())
    {
        if(!isdigit(str[i]))
            return(0);
        i++;
    }
    return (1);
}

int ifFloat(std::string str)
{  
    size_t i = 0;
    int foundPoint = 0;
    if(str == "+inff" || str == "-inff" || str == "nanf")
        return 2;
    if(str[i] == '+' || str[i] == '-')
        i++;
    while(i < str.length() - 1)
    {
        if(foundPoint && str[i] == '.')
            return (0);
        if(str[i] == '.')
            foundPoint = 1;
        else if(!isdigit(str[i]))
            return(0);
        i++;
    }
    return foundPoint && str[i] == 'f';
}

int ifDouble(std::string str)
{  
    size_t i = 0;
    int foundPoint = 0;
  
    if(str == "+inf" || str == "-inf" || str == "nan")
        return 2;

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
   
    return foundPoint ;
}

int ifCharacter(std::string str)
{
    if(str.length() > 1)
        return (0);
    if((str[0] >= 'a' && str[0] <= 'z') || (str[0] >= 'A' && str[0] <= 'Z'))
        return (1);
    return (0);
}

int intReturn(std::string str)
{
    int result;

    std::stringstream s(str);
    s >> result;
    if(s.fail() || !s.eof())
    {
        std::cout << "failed or overflow accured" << std::endl;
        exit(0);
    }
    return (result);
}
float floatReturn(std::string str)
{
    
    if(str == "+inff")
        str = "+inf";
    else if (str == "-inff")
        str = "-inf";
    else if (str == "-nanf")
        str = "-inf";
    else
        str = str.substr(0, str.length() - 1);
    float result;

    std::stringstream s(str);
    s >> result;
    return (result);
}
double doubleReturn(std::string str)
{
    double result;

    std::stringstream s(str);
    s >> result;
    return (result);
}

void  ScalarConverter::convertPrint(int i)
{
    if(i == 2)
    {
        std::cout << "char : impossible" << std::endl;
        std::cout << "int : impossible"  << std::endl;
        std::cout << "float : "<< flot  << "f" <<  std::endl;
        std::cout << "double : "<< doble << std::endl;
    }
    else
    { 
        if(isprint(character))
            std::cout << "char : " << character << std::endl;
        else if (integer > 127 || integer < -128)
            std::cout << "char : impossible" << std::endl;
        else
            std::cout << "char : Non displayable" << std::endl;
        
        std::cout << "int : "<< integer  << std::endl;
       if(static_cast<float>(integer) - flot == 0)
           std::cout << "float : "<< flot  << ".0f" << std::endl;
       else
            std::cout << "float : "<< flot  << "f" << std::endl;
        if(static_cast<double>(integer) - doble == 0)
           std::cout << "double : "<< doble  << ".0" << std::endl;
       else
            std::cout << "double : "<< doble  << std::endl;
    }
}

void ScalarConverter::converter(std::string str)
{
    int i = 0;
    if(str.empty())
    {
        std::cout << "empty string";
        return ;
    }
    else if(ifCharacter(str))
    {
        this->character = str[0];
        this->integer = static_cast<int>(character);
        this->flot = static_cast<float>(character);
        this->doble = static_cast<double>(character);
        std::cout << "-----Character-----" << std::endl;
        convertPrint(i);
    }
    else if(ifInteger(str))
    {
        this->integer = intReturn(str);
        this->flot = static_cast<float>(integer);
        this->character = static_cast<char>(integer);
        this->doble = static_cast<double>(integer);

        std::cout << "-----Integer-----" << std::endl;
        convertPrint(i);
    }
    else if(ifFloat(str))
    {
        i = ifFloat(str);
        float f = floatReturn(str);
        this->integer = static_cast<int>(f);
        this->character = static_cast<char>(f);
        this->doble = static_cast<double>(f);
        this->flot = f;

        std::cout << "-----Float-----" << std::endl;
        convertPrint(i);
    }
    else if(ifDouble(str))
    {
        i = ifDouble(str);
        double d = doubleReturn(str);
        this->integer = static_cast<int>(d);
        this->character = static_cast<char>(d);
        this->flot = static_cast<float>(d);
        this->doble = d;

        std::cout << "-----Double-----" << std::endl;
        convertPrint(i);
    }
    else
    std::cout << "syntax error" << std::endl;
    
}
