#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <string>
#include <stack>
class RPN
{
private:
	std::stack<int> _stack;
	int				_value;

public:
	RPN(std::string expression);
	RPN(const RPN& src);
	RPN& operator=(const RPN& rhs);
	~RPN();
	
	int	getValue() const;

	class InvalidExpression : public std::exception
	{
		virtual const char* what() const throw();
	};
};

bool	isNumeric(char c);
bool	isOperator(char c);


std::ostream& operator<<(std::ostream& os, const RPN& rpn);

#endif