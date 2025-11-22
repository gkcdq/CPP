#include "Conversion.hpp"
#include "climits"
#include "cstdlib"

ScalarConverter::ScalarConverter(){}
ScalarConverter::~ScalarConverter(){}
ScalarConverter::ScalarConverter(const ScalarConverter &other){(void)other;}
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
	if (this != &other)
	{
		(void)other;
	}
	return (*this);
}
int check_if_char(std::string s);
void convert_all_to_char(std::string &literal);
void convert_all_to_float_f(std::string &literal);
void convert_all_to_double_f(std::string &literal);
int literal_is_a_float(std::string literal);
int literal_is_a_double(std::string literal);
void convert_all_to_double(std::string &literal);
void convert_all_to_int(std::string &literal);
void convert_all_to_float(std::string &literal);
int literal_is_a_int(std::string literal);
void ScalarConverter::convert(std::string &literal)
{
	if (check_if_char(literal) == 1)
	{
		convert_all_to_char(literal);
	}
	else if (literal == "nanf" || literal == "+inff" || literal == "-inff")
	{
		convert_all_to_float_f(literal);
	}
	else if (literal == "nan" || literal == "+inf" || literal == "-inf")
	{
		convert_all_to_double_f(literal);
	}
	else if (literal_is_a_float(literal) == 0)
	{
	    convert_all_to_float(literal);
	}
	else if (literal_is_a_double(literal) == 0)
	{
		convert_all_to_double(literal);
	}
	else if (literal_is_a_int(literal) == 0)
	{
		convert_all_to_int(literal);
	}
	else
		std::cout << "'" << literal << "' What is that ?" << std::endl;
	return ;
}

void convert_all_to_int(std::string &literal)
{
    char *endptr = nullptr;
    errno = 0;
    long l = std::strtol(literal.c_str(), &endptr, 10);
    if (*endptr != '\0' || errno == ERANGE || l < INT_MIN || l > INT_MAX)
	{
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
		int i = static_cast<int>(l);
		std::cout << "float: " << static_cast<float>(i) << "f" << std::endl;
    	std::cout << "double: " << static_cast<double>(i) << std::endl;
        return;
    }
    int i = static_cast<int>(l);
    if (i < 0 || i > 127)
        std::cout << "char: impossible" << std::endl;
    else if (!std::isprint(i))
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
    std::cout << "int: " << i << std::endl;
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "float: " << static_cast<float>(i) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(i) << std::endl;
}

int literal_is_a_int(std::string literal)
{
	int i = 0;
    if (literal[0] == '-')
        return(0);
	while(literal[i])
	{
        if (i > 0 && literal[i] == '-')
            return (1);
		if (literal[i] < 48 || literal[i] > 57)
			return (1);
		i++;
	}
	long d = atoi((const char *)literal.c_str());
	if (d > INT_MAX || d < INT_MIN)
		return (1);
	return (0);
}


void convert_all_to_double(std::string &literal)
{
    double d = std::strtod(literal.c_str(), nullptr);
    if (std::isnan(d) || std::isinf(d) || d < 0 || d > 127)
        std::cout << "char: impossible" << std::endl;
    else if (!std::isprint(static_cast<char>(d)))
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
    if (std::isnan(d) || std::isinf(d) || d > static_cast<double>(INT_MAX) || d < static_cast<double>(INT_MIN))
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(d) << std::endl;
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
    std::cout << "double: " << d << std::endl;
}

int literal_is_a_double(std::string literal)
{
    int len = literal.length();
    int point_count = 0;
    int digit_count = 0;
    int i = 0;
    if (literal[i] == '+' || literal[i] == '-')
        i++;
    for (; i < len; ++i)
    {
        if (literal[i] == '.')
            point_count++;
        else if (isdigit(literal[i]))
            digit_count++;
        else
            return 1;
    }
    if (point_count != 1 || digit_count == 0)
        return 1;
    return 0;
}


void convert_all_to_float(std::string &literal)
{
    std::string floatStr = literal.substr(0, literal.length() - 1);
    float f = std::strtof(floatStr.c_str(), nullptr);
    if (std::isnan(f) || std::isinf(f) || f < 0 || f > 127)
        std::cout << "char: impossible" << std::endl;
    else if (!std::isprint(static_cast<char>(f)))
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
    if (std::isnan(f) || std::isinf(f) || f > static_cast<float>(INT_MAX) || f < static_cast<float>(INT_MIN))
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(f) << std::endl;
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "float: " << f << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(f) << std::endl;
}

int literal_is_a_float(std::string literal)
{
    int len = literal.length();
    if (len < 2 || literal[len - 1] != 'f')
        return 1;
    std::string core = literal.substr(0, len - 1);
    int point_count = 0;
    int digit_count = 0;
    int i = 0;
    if (core[i] == '-' || core[i] == '+')
        i++;
    for (; i < (int)core.length(); ++i)
    {
        if (core[i] == '.')
            point_count++;
        else if (isdigit(core[i]))
            digit_count++;
        else
            return 1;
    }
    if (point_count != 1 || digit_count == 0)
        return 1;
    return 0;
}

int not_a_number(char c)
{
	if (c != '0' || c != '1' || c != '2' || c != '3' || c != '4' || c != '5' || c != '6' || c != '7' || c != '8' || c != '9')
		return (1);
	return (0);
}

int check_if_char(std::string s)
{
	int i = 0;
	while(s[i] <= 32 && s[i])
		i++;
	int j = i;
	while(s[j] > 32 && s[j])
		j++;
	if (j - i != 1)
		return (1);
    while (s[j] <= 32 && s[j])
        j++;
    if (s[j] != '\0')
        return (1);

	if ((s[i] >= 32 && s[i] <= 127) && not_a_number(s[i]) == 0)
		return (0);
	else 
		return (1);
}


void convert_all_to_char(std::string &literal)
{
    int i = 0;
    while (literal[i] && literal[i] <= 32)
        i++;
    char c = literal[i];
    std::cout << "char: '" << c << "'" << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void convert_all_to_float_f(std::string &literal)
{
    float f;

    if (literal == "nanf")
        f = std::numeric_limits<float>::quiet_NaN();
    else if (literal == "+inff")
        f = std::numeric_limits<float>::infinity();
    else 
        f = -std::numeric_limits<float>::infinity();
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "float: " << f << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(f) << std::endl;
}

void convert_all_to_double_f(std::string &literal)
{
    double d;

    if (literal == "nan")
        d = std::numeric_limits<double>::quiet_NaN();
    else if (literal == "+inf")
        d = std::numeric_limits<double>::infinity();
    else
        d = -std::numeric_limits<double>::infinity();
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
    std::cout << "double: " << d << std::endl;
}

