#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotRequestForm", 72, 45){}
RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("RobotRequestForm", 72, 45), target(target){}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & other)
{
    AForm::operator=(other);
    target = other.target;
}
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
    if (this != &other)
    {
        AForm::operator=(other);
        target = other.target;
    }
    return (*this);
}
RobotomyRequestForm::~RobotomyRequestForm(){}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    checkExecutability(executor);
    std::cout << "* Drilling noises *" << std::endl;
    if (rand() % 2 == 0)
        std::cout << target << " has been robotomized." << std::endl;
    else
        std::cout << target << " has failed to be robotomized." << std::endl;
}