#ifndef CONTROLER_H
#define CONTROLER_H


#include <string>
#include "Service.h"


class Controler
{
private:
    int lightState;
    Service *service;

public:
    
    virtual ~Controler();
    void updateEvent(std::string strBtn);
     Controler(Service *servi);

};

#endif