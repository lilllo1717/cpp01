#include "Harl.hpp"

int main(void)
{
    Harl new_harl = Harl();
    new_harl.complain("INFO");
    new_harl.complain("WARNING");
    new_harl.complain("In");
    return 0;
}