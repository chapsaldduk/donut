#include <stdio.h>
#include <string.h>
#include <math.h>
double sin(), cos();
int main(){
    float A = 0, B = 0;
    float z[1760];
    char b[1760];
    printf("\x1b[2j");
    while(1){
        memset(b, 32, 1760);
        memset(z, 0, 7040);
        for(float j = 0; j < 6.28; j += 0.07){
            for(float i=0; i<6.28; i+=0.02){
                float sini = sin(i),
                cosj = cos(j),
                sinA = sin(A),
                sinj = sin(j),
                cosA = cos(A),
                cosj2 = cosj + 2,
                mess = 1/(sini*cosj2*sinA+sinj*consA+5),
                cosi = cos(i),
                cosB = cos(B),
                sinB = sin(B),
                t = sini*cosj2*consA-sinj*sinA;
                
                int x = 40+30*mess*(cosi*cosj2*cosB - t*sinB),
                y = 12+15*mess*(cosi*cosj2*sinB + t*cosB),
                o = x+80*y,
                N = 8*((sinj*sinA-sini*cosj*cosA)*cosB-sini*cosj*sinA - sinj*cosA - cosi*cosj*sinB);
 
                if(y < 22 && y>0 && x>0 && x<80 && mess>z[o]){
                    z[o] = mess;
                    b[o] = ".,-~:;=!*#$@"[N>0?N:0];
                }
            }
        }
        printf("\x1b[d");
        for(int k = 0, k<1761; k++){
            putchar(k%80?b[k]:10);
        }
        A += 0.04;
        B += 0.02;
    }
    return 0;
}