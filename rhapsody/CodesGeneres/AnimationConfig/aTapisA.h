/*********************************************************************
	Rhapsody	: 9.0.2 
	Login		: kumarass
	Component	: CodesGeneres 
	Configuration 	: AnimationConfig
	Model Element	: aTapisA
//!	Generated Date	: Tue, 16, Dec 2025  
	File Path	: CodesGeneres\AnimationConfig\aTapisA.h
*********************************************************************/

#ifndef aTapisA_H
#define aTapisA_H

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

//## actor aTapisA
class aTapisA {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedaTapisA;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    aTapisA();
    
    //## auto_generated
    ~aTapisA();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedaTapisA : virtual public AOMInstance {
    DECLARE_META(aTapisA, OMAnimatedaTapisA)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: CodesGeneres\AnimationConfig\aTapisA.h
*********************************************************************/
