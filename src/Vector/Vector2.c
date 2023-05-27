#include <math.h>

#include "../../include/Vector/Vector2.h"

float magnitude_vec2(Vector2 vec2) {
    return sqrt(
        vec2.x * vec2.x + 
        vec2.y * vec2.y
    );
}

Vector2 reverse_vec2(Vector2 vec2) {
    Vector2 result = {
        -vec2.x,
        -vec2.y
    };

    return result;
}

Vector2 normalize_vec2(Vector2 vec2) {
    float scalar = 1 / magnitude_vec2(vec2);

    Vector2 result = scale_vec2(vec2, scalar);

    return result;
}



Vector2 add_vec2(Vector2 vec2_1, Vector2 vec2_2) {
    Vector2 result = {
        vec2_1.x + vec2_2.x,
        vec2_1.y + vec2_2.y
    };

    return result;
}

Vector2 sub_vec2(Vector2 vec2_1, Vector2 vec2_2) {
    Vector2 result = add_vec2(vec2_1, reverse_vec2(vec2_2));

    return result;
}



Vector2 scale_vec2(Vector2 vec2, float scalar) {
    Vector2 result = {
        vec2.x * scalar,
        vec2.y * scalar
    };

    return result;
}

float dot_vec2(Vector2 vec2_1, Vector2 vec2_2) {
    return 
        vec2_1.x * vec2_2.x +
        vec2_1.y * vec2_2.y;
}