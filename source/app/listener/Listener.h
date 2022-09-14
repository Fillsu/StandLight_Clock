#ifndef LISTENER_H
#define LISTENER_H
#include "Listener.h"
#include "Controler.h"
#include "Button.h"
#include "Clock_Check.h"
#include "Led.h"
#pragma once

class Listener
{
    
  private:
  //listener has tis componet
  //And this must be point, beucause of memory
  Button *powerButton;
  Controler *cont;
  Clock_Check *clkcheck;

  
  public :
  Listener(Button *button, Controler *led,Clock_Check *clk);
  ~Listener();
  void checkEvent();

};

#endif