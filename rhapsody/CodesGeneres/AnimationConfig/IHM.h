/*********************************************************************
	Rhapsody	: 9.0.2 
	Login		: kumarass
	Component	: CodesGeneres 
	Configuration 	: AnimationConfig
	Model Element	: IHM
//!	Generated Date	: Tue, 23, Dec 2025  
	File Path	: CodesGeneres\AnimationConfig\IHM.h
*********************************************************************/

#ifndef IHM_H
#define IHM_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "..\..\Pci7841.h"
//## auto_generated
#include "..\..\resource.h"
//## auto_generated
#include "..\..\Typedef.h"
//## auto_generated
#include "winsock2.h"
//## auto_generated
#include "ws2tcpip.h"
//## auto_generated
#include "_ANALYSE.h"
//## package _ANALYSE

//## actor IHM
class IHM {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedIHM;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    IHM();
    
    //## auto_generated
    ~IHM();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedIHM : virtual public AOMInstance {
    DECLARE_META(IHM, OMAnimatedIHM)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: CodesGeneres\AnimationConfig\IHM.h
*********************************************************************/
