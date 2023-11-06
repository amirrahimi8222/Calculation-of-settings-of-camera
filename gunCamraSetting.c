#include <stdio.h>

int main() {
  float distance;
  int speed,num;
    char size,wind_direction;
    float gun_up,wind;
    scanf("%f%c\n",&distance,&size);
    scanf("%d%c",&speed,&wind_direction);
    switch (size) {
        case 'm':
            distance=distance;
            break;}
            switch (size) {
                case 'M':distance=distance*1600;
                    break;}
                    switch (size) {
        case 'k' :distance=distance*1000;
                       break;}
    switch (wind_direction)
    {
        case 'W':wind=-1*(speed/5)*0.2;
            break;}
    switch (wind_direction) {
        case 'E':wind=(speed/5)*0.2;
            break;}
    switch (wind_direction) {
        case 'S':distance=distance+speed*10;
            break;}
    switch (wind_direction) {
        case 'N':distance=distance;
            break;}
            num=distance/100;
    gun_up=num*0.2;
    printf("%.1f\n%.1f",gun_up,wind);
    return 0;
}
                       



