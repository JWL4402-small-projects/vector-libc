#ifndef VECTOR2_H
#define VECTOR2_H

typedef struct {
    float x;
    float y;
} Vector2;

float magnitude_vec2(Vector2);
Vector2 reverse_vec2(Vector2);
Vector2 normalize_vec2(Vector2);

Vector2 add_vec2(Vector2, Vector2);
Vector2 sub_vec2(Vector2, Vector2);

Vector2 scale_vec2(Vector2, float);
float dot_vec2(Vector2, Vector2);

#endif // VECTOR2_H