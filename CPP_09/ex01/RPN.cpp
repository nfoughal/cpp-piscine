/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:29:57 by nfoughal          #+#    #+#             */
/*   Updated: 2023/09/23 12:37:35 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(){}

RPN::~RPN(){}

RPN &RPN::operator=(const RPN &other)
{
    (void)other;
    return *this;
}

RPN::RPN(const RPN &other)
{
    *this = other;
}

int calculer(int top, int first, char operatorr)
{
    if(operatorr == '-')
        return (top - first);
    else if (operatorr == '+')
        return (top + first);
    else if (operatorr == '*')
        return (top * first);
    else if (operatorr == '/')
    {
        if(first == 0)
            throw std::runtime_error("devision by 0");
        return (top / first);
        
    }
    return (0);
}

std::stack<std::string> splitString(std::string str, std::string s)
{
    std::stack<std::string> sck;
    size_t start = 0;
    size_t end = str.find(s);
    
    while(end != std::string::npos)
    {
        sck.push(str.substr(start, end - start));
        start = end + s.length();
        end = str.find(s, start);
    }
    sck.push(str.substr(start));
    return sck;
}

std::stack<std::string> reversestack(std::stack<std::string> &myStack)
{
    std::stack<std::string> newStack;

    while(!myStack.empty())
    {
        std::string str = myStack.top();
        myStack.pop();
        newStack.push(str);
    }

    return (newStack);
}

void RPN::chickIt(std::string str)
{
    if(str.empty())
    {
        std::cout << "Error: empty string" << std::endl;
        return ;
    }
    std::stack<std::string> split = splitString(str, " ");
    while(!split.empty())
    {
        if(split.top().size() != 1)
        {
            std::cout << "Error: incorrect formula" << std::endl;
            return ;
        }
        if(!(split.top()[0] >= '0' && split.top()[0] <= '9') && split.top()[0] != '+' && split.top()[0] != '-' && split.top()[0] != '/' && split.top()[0] != '*')
        {
            std::cout << "Error: syntax error!" << std::endl;
            return ;
        }
        split.pop();
    }
    std::stack<std::string> split2 = splitString(str, " ");
    split2 = reversestack(split2);
    int result;
    int first;
    std::stack<int>s;
    while (!split2.empty())
    {
        if(split2.top()[0] >= '0' && split2.top()[0] <= '9')
            s.push(split2.top()[0] - '0');
        else
        {
            if(s.size() < 2)
            {    
                std::cout << "Error" << std::endl;
                return ;
            }
            first = s.top();
            s.pop();
            try
            {
                result = calculer(s.top(), first, split2.top()[0]); 
            }
            catch(const std::exception& e)
            {
                std::cout << "Error: "<< e.what() << '\n';
                return ;
            }
            s.pop();
            s.push(result);
        }
        split2.pop();
    }
    if (s.size() != 1)
        std::cerr << "Error\n";
    else
        std::cout << s.top() << std::endl;
    
}