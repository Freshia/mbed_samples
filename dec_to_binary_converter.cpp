#include "mbed.h"

DigitalOut led_1(LED1);
DigitalOut led_2(LED2);
DigitalOut led_3(LED3);
DigitalOut led_4(LED4);

int main() {
    //while(1) {
        for(int i=0; i<=15;i++){
            if(i<=7){
                led_1 = 1;
                }
            if(i<=3 | i==8| i==9 | i==12 | i == 13){
                led_2 = 1;
                }
                
            if(i==0| i==1 | i==4 | i == 5| i==8| i==9 | i==12 | i == 13){
                led_3 = 1;
                }
                
            if(i%2 ==0){
                led_4 = 1;
                }
            wait(1.5);
            led_1 = 0;
            led_2 = 0;
            led_3 = 0;
            led_4 = 0;
            }
        
  //  }
}
