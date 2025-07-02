#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137){}
ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("ShrubberyCreationForm", 145, 137), target(target){}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
{
    AForm::operator=(other);
    target = other.target;
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
    if (this != &other)
    {
        AForm::operator=(other);
        target = other.target;
    }
    return (*this);
}
ShrubberyCreationForm::~ShrubberyCreationForm(){}
void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
    checkExecutability(executor);
    std::ofstream ofs(target + "_shrubbery");
    if (!ofs)
    {
        std::cerr << "Erreur : impossible de créer le fichier " << target << "_shrubbery" << std::endl;
        return;
    }
    ofs << "       _-_" << std::endl;
    ofs << "    /~~   ~~\\" << std::endl;
    ofs << " /~~         ~~\\" << std::endl;
    ofs << "{               }" << std::endl;
    ofs << " \\  _-     -_  /" << std::endl;
    ofs << "   ~  \\\\ //  ~" << std::endl;
    ofs << "_- -   | | _- _" << std::endl;
    ofs << "  _ -  | |   -_" << std::endl;
    ofs << "       | |" << std::endl;
    ofs.close();
}