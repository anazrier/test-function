#include "luas.h"

float HitungPersegi(float s) {
    return s * s;
}

float HitungPersegiPanjang(float p, float l) {
    return p * l;
}

float HitungSegitiga(float a, float t) {
    return 0.5 * a * t;
}

float HitungJajarGenjang(float a, float t) {
    return a * t;
}

float HitungLingkaran(float r) {
    const float phi = 3.14;
    return phi * r * r;
}

float HitungBelahKetupat(float d1, float d2) {
    return 0.5 * d1 * d2;
}

float HitungLayangLayang(float d1, float d2) {
    return 0.5 * d1 * d2;
}

float HitungTrapesium(float a, float b, float t) {
    return 0.5 * (a + b) * t;
}