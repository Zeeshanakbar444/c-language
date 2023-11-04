// volume 3
// surface a * a*a
#include<stdio.h>
#include<math.h>

int main(){

    float volume , surfaceArea , length_input;
    printf("enter lenght \n");
    scanf("%f" , &length_input);

    volume  =pow(length_input ,3 );
    surfaceArea = 6 * pow(length_input , 2);
    printf("volume is %0.2f \n surface of area is %0.2f" , volume , surfaceArea);
    return 0;
}
