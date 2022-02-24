#include "ShrubberyCreationForm.hpp"

ShrubberyCreationFrom::ShrubberyCreationFrom(const std::string &target):
	Form("ShrubberyCreationFrom", 145, 137), _target(target) {}

ShrubberyCreationFrom::ShrubberyCreationFrom(
		const ShrubberyCreationFrom &other): _target(other._target) {}

ShrubberyCreationFrom::~ShrubberyCreationFrom() {}

ShrubberyCreationFrom& ShrubberyCreationFrom::operator=(
		const ShrubberyCreationFrom &other) {
	if (this == &other)
		return *this;
	_target = other._target;
	return *this;
}

std::string const& ShrubberyCreationFrom::getTarget() const { return _target; }

void ShrubberyCreationFrom::execute(const Bureaucrat & executor) const {
	Form::execute(executor);
	std::ofstream	outfile;
	outfile.open(_target + "_shruberry");
	if (outfile.fail()) {
		std::cout << "Couldn't open outfile" << std::endl;
		return ;
	}
	std::cout << "File " << GREEN << _target <<  "_shrubbery " << RESET;
	std::cout << "has been created" << std::endl;
	outfile << "\n \
                                              .         ;\n\
                 .              .              ;%     ;;\n\
                   ,           ,                :;%  %;\n\
                    :         ;                   :;%;'     .,\n\
           ,.        %;     %;            ;        %;'    ,;\n\
             ;       ;%;  %%;        ,     %;    ;%;    ,%'\n\
              %;       %;%;      ,  ;       %;  ;%;   ,%;'\n\
               ;%;      %;        ;%;        % ;%;  ,%;'\n\
                `%;.     ;%;     %;'         `;%%;.%;'\n\
                 `:;%.    ;%%. %@;        %; ;@%;%'\n\
                    `:%;.  :;bd%;          %;@%;'\n\
                      `@%:.  :;%.         ;@@%;'\n\
                        `@%.  `;@%.      ;@@%;\n\
                          `@%%. `@%%    ;@@%;\n\
                            ;@%. :@%%  %@@%;\n\
                              %@bd%%%bd%%:;\n\
                                #@%%%%%:;;\n\
                                %@@%%%::;\n\
                                %@@@%(o);  . '\n\
                                %@@@o%;:(.,'\n\
                            `.. %@@@o%::;\n\
                               `)@@@o%::;\n\
                                %@@(o)::;\n\
                               .%@@@@%::;\n\
                               ;%@@@@%::;.\n\
                              ;%@@@@%%:;;;.\n\
                          ...;%@@@@@%%:;;;;,..\n";
}

std::ostream& operator<<(std::ostream& out, ShrubberyCreationFrom const& form) {
	out << "This is ShrubberyCreationFrom and its target is ";
	out << form.getTarget();
	return out;
}
