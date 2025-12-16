/********************************************************************
	Rhapsody	: 9.0.2 
	Login		: kumarass
	Component	: CodesGeneres 
	Configuration 	: AnimationConfig
	Model Element	: AnimationConfig
//!	Generated Date	: Tue, 16, Dec 2025  
	File Path	: CodesGeneres\AnimationConfig\MainCodesGeneres.cpp
*********************************************************************/

//## auto_generated
#include "MainCodesGeneres.h"
//## auto_generated
#include "MAIN_SysConvoyage.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            MAIN_SysConvoyage * p_MAIN_SysConvoyage;
            p_MAIN_SysConvoyage = new MAIN_SysConvoyage;
            p_MAIN_SysConvoyage->startBehavior();
            //#[ configuration CodesGeneres::AnimationConfig 
            //#]
            OXF::start();
            delete p_MAIN_SysConvoyage;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: CodesGeneres\AnimationConfig\MainCodesGeneres.cpp
*********************************************************************/
