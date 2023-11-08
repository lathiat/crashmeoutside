#include <cstddef>

int main()
{
    volatile int* a = reinterpret_cast<volatile int*>(NULL);
    *a = 1;
}
