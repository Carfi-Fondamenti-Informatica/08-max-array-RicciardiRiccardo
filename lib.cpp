
#include "lib.h"

float arr(float m[],int n){
    float a = m[0];

    for(int i=1;i<n;i++){
        if(m[i] > a){
            a = m[i];
        }
    }
    return a;
} 
