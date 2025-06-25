#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){}
Bureaucrat::Bureaucrat(std::string name, int x) : name(name), grade(x)
{
    if (grade < 1)
        throw GradeTooHighExeption();
    else if (grade > 150)
        throw GradeTooLowExeption();
}
Bureaucrat::~Bureaucrat(){}
void Bureaucrat::setName(std::string na){name = na;}
std::string Bureaucrat::getType(){return name;}
int Bureaucrat::getGrade(){return grade;}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
    if (this != &other)
        grade = other.grade;
    return (*this);
}
void Bureaucrat::increment()
{
    if (grade <= 1)
        throw GradeTooHighExeption();
    grade--;
}
void Bureaucrat::decrement()
{
    if ( grade >= 150)
        throw GradeTooLowExeption();
    grade++;
}
const char *Bureaucrat::GradeTooHighExeption::what() const throw()
{
    return ("Grade is too High");
}
const char * Bureaucrat::GradeTooLowExeption::what() const throw()
{
    return ("Grade is too Low");
}
std::ostream &operator<<(std::ostream &os, Bureaucrat &up)
{
    os << up.getType() << " bureaucrat grade is " << up.getGrade() << "." << std::endl;
    return (os);
}


