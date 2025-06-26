#include "Form.hpp"

Form::Form() : sign_grade(0), execute_grade(0){}
Form::Form(const Form &other) : name(other.name), sig(other.sig), sign_grade(other.sign_grade), execute_grade(other.execute_grade){}
Form& Form::operator=(const Form& other)
{
    if (this != &other)
    {
        sig = other.sig;
    }
    return (*this);
}
Form::~Form(){}
Form::Form(const std::string n, const int sg, const int eg) : name(n), sig(false), sign_grade(sg), execute_grade(eg)
{
    if (sign_grade < 1 || execute_grade < 1)
        throw GradeTooHighException();
    else if (sign_grade > 150 || execute_grade > 150)
        throw GradeTooLowException();
}
const char *Form::GradeTooHighException::what() const throw()
{
    return ("Grade is too High");
}
const char *Form::GradeTooLowException::what() const throw()
{
    return ("Grade is too Low");
}
std::ostream& operator<<(std::ostream& out, const Form& form)
{
	out << "Form \"" << form.getName() << "\", "
		<< "Sign status: " << (form.getSignedStatus() ? "Signed" : "Not Signed") << ", "
		<< "Grade required to sign: " << form.getSignGrade() << ", "
		<< "Grade required to execute: " << form.getExecuteGrade();
	return (out);
}
std::string Form::getName() const {return name;}
int Form::getSignGrade() const {return sign_grade;}
int Form::getExecuteGrade() const {return execute_grade;}
bool Form::getSignedStatus() const {return sig;}

void Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > getSignGrade())
        throw GradeTooLowException();
    sig = true;
}