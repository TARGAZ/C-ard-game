/**
 * Project Untitled
 */


#ifndef _CHAMPION_H
#define _CHAMPION_H

class Champion 
{
private:
    char name;
    int PV;
    int armor;
    int ability_id;
	
public:  
    void ability_effect();
};

#endif //_CHAMPION_H