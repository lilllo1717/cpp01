#include "Zombie.hpp"

void say_your_name(Zombie* arr, int N)
{
 
    for (int i = 0; i < N; i++)
        arr[i].announce();
}

int main(void)
{
    Zombie* z_array;
    z_array = zombieHorde(3, "Kiki");
    say_your_name(z_array, 3);
    delete[] z_array;
}
