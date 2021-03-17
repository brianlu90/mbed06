#include "mbed.h"
using namespace std::chrono;

Ticker BlueLed;

DigitalOut led1(LED4);

void toggle(void)
{
    led1 = !led1;
}

int main(void)
{
    led1 = 1;
    BlueLed.attach(&toggle, 500ms);
    while (1);
}