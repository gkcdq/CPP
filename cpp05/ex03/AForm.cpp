#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : name("Untitled"), is_signed(false), sign_grade(1), exec_grade(1) {}

AForm::AForm(const std::string& name, int sign_grade, int exec_grade)
    : name(name), is_signed(false), sign_grade(sign_grade), exec_grade(exec_grade) {
    if (sign_grade < 1 || exec_grade < 1)
        throw GradeTooHighException();
    if (sign_grade > 150 || exec_grade > 150)
        throw GradeTooLowException();
}

AForm::AForm(const AForm& other)
    : name(other.name), is_signed(other.is_signed),
      sign_grade(other.sign_grade), exec_grade(other.exec_grade) {}

AForm& AForm::operator=(const AForm& other) {
    if (this != &other)
        this->is_signed = other.is_signed;
    return *this;
}

AForm::~AForm() {}

const std::string& AForm::getName() const { return name; }
bool AForm::getIsSigned() const { return is_signed; }
int AForm::getSignGrade() const { return sign_grade; }
int AForm::getExecGrade() const { return exec_grade; }

void AForm::beSigned(const Bureaucrat& b) {
    if (b.getGrade() > sign_grade)
        throw GradeTooLowException();
    is_signed = true;
}

void AForm::checkExecutability(const Bureaucrat& executor) const {
    if (!is_signed)
        throw FormNotSignedException();
    if (executor.getGrade() > exec_grade)
        throw GradeTooLowException();
}

const char* AForm::GradeTooHighException::what() const throw() {
    return "Form grade too high!";
}

const char* AForm::GradeTooLowException::what() const throw() {
    return "Form grade too low!";
}

const char* AForm::FormNotSignedException::what() const throw() {
    return "Form is not signed!";
}

std::ostream& operator<<(std::ostream& out, const AForm& f) {
    out << f.getName() << " [sign grade: " << f.getSignGrade()
        << ", exec grade: " << f.getExecGrade()
        << ", is signed: " << (f.getIsSigned() ? "yes" : "no") << "]";
    return out;
}

