#include "MicroBit.h"

MicroBit uBit;

int main()
{
    // Initialise the micro:bit runtime.
    uBit.init();

	int number = 0;
	for (int z = 0; z < 10; z++) {
		number = z;
		ManagedString t(number);
		uBit.display.printChar(t.charAt(0), 600);
	}

	char lower[] = { "a" };
	for (int z = 0; z < 5; z++) {
		ManagedString t(lower);
		uBit.display.printChar(t.charAt(0), 600);
		lower[0] += 1;
	}

	char upper[] = { "A" };
	for (int z = 0; z < 5; z++) {
		ManagedString t(upper);
		uBit.display.printChar(t.charAt(0), 600);
		upper[0] += 1;
	}

    release_fiber();

    return 0;
}
