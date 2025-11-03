
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"

static void testing_title(const char* title, const char* color)
{
    std::cout << color << "\n <===== " << title << " =====> \n";
}

static void test1()
{
    testing_title("Test1: HumanA has a weapon HumanB doesn't", CYAN);
    Weapon club = Weapon("crude spiked club");
    HumanA alice = HumanA("Alice", club);
    HumanB ben = HumanB("Ben");

    alice.attack();
    ben.attack();
}

static void test2()
{
    testing_title("Test2: HumanA and HumanB have the same weapon", BLUE);
    Weapon club = Weapon("crude spiked club");
    HumanA alice = HumanA("Alice", club);
    HumanB ben = HumanB("Ben");

    ben.setWeapon(club);
    alice.attack();
    ben.attack();
}

static void test3()
{
    testing_title("Test3: Changing weapon type for HumanA", YELLOW);
    Weapon club = Weapon("crude spiked club");
    Weapon knife = Weapon("cool knife");
    HumanA alice = HumanA("Alice", club);
    HumanB ben = HumanB("Ben");

    ben.setWeapon(knife);
    alice.attack();
    ben.attack();

    club.setType("magic club");
    alice.attack();
    ben.attack();
}

static  void subject_test()
{
    testing_title("Subject tests: ", GREEN);
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
}

int main()
{
    test1();
    test2();
    test3();
    subject_test();
    return 0;
}