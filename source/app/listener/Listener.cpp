
#include "Listener.h"


Listener::Listener(Button *button, Controler *led,Clock_Check *clk)
{
 powerButton=button;
 cont = led;
 clkcheck=clk;
}

Listener::~Listener()
{

}

void Listener::checkEvent()
{
        if(powerButton->getState()==RELEASE_ACTIVE)
    {
        
            cont->updateEvent("powerButton");

    }
    
    if(clkcheck->Is_Clock_update()==true)
    {
        
            cont->updateEvent("clockupdate");

    }
}

