#include "Clock_Service.h"

Clock_Service::Clock_Service(Clock_View *clkview)
{
curTime=0;
clkviewer=clkview;
led_count=0;
}

Clock_Service::~Clock_Service()
{

}

 void Clock_Service::updateClock()
{   
    sprintf(clkviewer->led_lcd,"%d   ",led_count);
    //std::cout << led_count << std::endl;
    curTime=time(NULL);
    struct tm *timeDate=localtime(&curTime);
    //std::cout << timeDate->tm_hour << std::endl;
    
    clkviewer->updateTime(timeDate);
}