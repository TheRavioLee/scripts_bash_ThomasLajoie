#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Verification du capteur BMP280...\n");
    system("./check_bmp280");

    printf("\nVerification du capteur MPU-9250...\n");
    system("./check_mpu9250");

    return 0;
}
