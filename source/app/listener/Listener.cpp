
#include "Listener.h"

void Listener::checkEvent()
{
        if(powerButton->getState()==RELEASE_ACTIVE)
    {
        
            cont->updateEvent("powerButton");

    }
}

Listener::Listener(Button *button, Controler *led)
{
 powerButton=button;
 cont = led;
}

Listener::~Listener()
{

}