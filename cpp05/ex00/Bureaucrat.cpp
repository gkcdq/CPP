#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){}
Bureaucrat::Bureaucrat(std::string s, int x) : name(s), grade(x)
{
    if (grade < 1)
        throw GradeTooHighExeption();
    else if (grade > 150)
        throw GradeTooLowExeption();
}
Bureaucrat::Bureaucrat(const Bureaucrat &other){grade = other.grade;}
Bureaucrat::~Bureaucrat(){}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
    if (this != &other)
        grade = other.grade;
    return (*this);
}
std::string Bureaucrat::getName() const {return (name);}
int Bureaucrat::getGrade() const {return grade;}
const char * Bureaucrat::GradeTooHighExeption::what() const throw()
{
    return ("Grade is too High");
}
const char *Bureaucrat::GradeTooLowExeption:: what() const throw()
{
    return ("Grade is too Low");
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &up)
{
    os << up.getName() << " bureaucrat grade is " << up.getGrade() << "." << std::endl;
    return (os);
}

void Bureaucrat::increment()
{
    if (grade <= 1)
        throw GradeTooHighExeption();
    grade--;
}

void Bureaucrat::decrement()
{
    if (grade >= 150)
        throw GradeTooLowExeption();
    grade++;
}

