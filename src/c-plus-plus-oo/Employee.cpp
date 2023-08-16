#include "Employee.hpp"

Employee::Employee(Cpf cpf, std::string name, float wage):Person(cpf, name), wage(wage)
{
}
