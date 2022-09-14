#include "Controler.h"


Controler::Controler(Service *servi,Clock_Service *Clock_service)
{
Clock_servicer=Clock_service;
service = servi ;
lightState=LIGHT_OFF;
}

Controler::~Controler()
{

}

void Controler::updateEvent(std::string strBtn)
{   
    if(strBtn=="clockupdate")
    {
        Clock_servicer->updateClock();
    }
    switch(lightState)
    {
        case LIGHT_OFF:
        if(strBtn=="powerButton")
        {
            //lightState=LIGHT_ON;
            service->updateservice("ServiceOn");
            Clock_servicer->led_count++;
            if((Clock_servicer->led_count)>5)
            {
                Clock_servicer->led_count=0;
            }
        }
        break;

        case LIGHT_ON:
        if(strBtn=="powerButton")
        {
            lightState=LIGHT_OFF;
            service->updateservice("ServiceOff");
        }
        break;

        
    }
}