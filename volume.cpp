#include <iostream>
#include "volume.h"
using namespace std;

float VolKubus(float sisi)
{
    return sisi * sisi * sisi; 
}

float VolBalok(float p, float l, float t)
{
    return p * l * t;
}

float HitungVolTabung(float r, float tinggi)
{
    float volume;
    volume = 3.14 * r * r * tinggi;
    return volume;
}

float HitungVolBola(float r)
{
    float volume;
    volume = (4.0 / 3.0) * 3.14 * r * r * r;
    return volume;
}
