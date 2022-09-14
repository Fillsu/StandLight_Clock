#include <iostream>
#include <wiringPi.h>
#include "Button.h"
#include "Led.h"
#include "Listener.h"
#include "Controler.h"
#include "View.h"
#include "Service.h"


int main()
{
std::cout << "Hellodddw Wddorld" <<std::endl;
std::cout << "Hellodddw World" <<std::endl;
Button Button1(27);

Led led(21);
Led led2(22);
Led led3(23);
Led led4(24);
Led led5(25);

led.Off();
led2.Off();
led3.Off();
led4.Off();
led5.Off();

View view1(&led,&led2,&led3,&led4,&led5);
Service service1(&view1);
Controler controler1(&service1);
Listener listener(&Button1,&controler1);

    while(1)
    {
        listener.checkEvent();
        view1.lightView();
        delay(50);

    }

return 0;
}