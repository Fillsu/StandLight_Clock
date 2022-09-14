#include "Controler.h"


Controler::Controler(Service *servi)
{
service = servi ;
lightState=LIGHT_OFF;
}

Controler::~Controler()
{

}

void Controler::updateEvent(std::string strBtn)
{
    switch(lightState)
    {
        case LIGHT_OFF:
        if(strBtn=="powerButton")
        {
            lightState=LIGHT_ON;
            service->updateservice("ServiceOn");
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