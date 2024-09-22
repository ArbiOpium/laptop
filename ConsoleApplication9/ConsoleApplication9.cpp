#include<iostream>
#include"Laptop.h"

using namespace std;

int main()
{
	Laptop laptop("ASUS", 1000, "Intel I5", 100, "NVIDIA RTX 3050", 600, "Corsair 32GB", 350, "Samsung 1TB", 200);
	laptop.Output();
}