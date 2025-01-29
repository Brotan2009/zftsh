#include <stdio.h>

void drawTriangle(int height, int baseLength) {
    int spaces, stars;

    for (int i = 0; i < height; i++) {
        spaces = height - i - 1;
        stars = 2 * i + 1;
  
        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }
        
        for (int j = 0; j < stars; j++) {
            printf("*");
        }
       
        printf("\n");
    }
}

int main() {
    int sideA, sideB;
    if (scanf("%d %d", &sideA, &sideB) != 2 || sideA <= 0 || sideB <= 0) {
        printf("NO\n");
        return 0;
    }

    if (sideA != sideB) {
        printf("NO\n");
        return 0;
    }

    int height = sideA; // Можно использовать длину стороны как высоту

    int baseLength = 2 * height - 1; // Основание будет нечетным

    drawTriangle(height, baseLength);

    return 0;
}
