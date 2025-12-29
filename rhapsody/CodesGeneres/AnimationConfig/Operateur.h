/*********************************************************************
	Rhapsody	: 9.0.2 
	Login		: kumarass
	Component	: CodesGeneres 
	Configuration 	: AnimationConfig
	Model Element	: Operateur
//!	Generated Date	: Mon, 29, Dec 2025  
	File Path	: CodesGeneres\AnimationConfig\Operateur.h
*********************************************************************/

#ifndef Operateur_H
#define Operateur_H

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

//## actor Operateur
class Operateur {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedOperateur;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Operateur();
    
    //## auto_generated
    ~Operateur();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedOperateur : virtual public AOMInstance {
    DECLARE_META(Operateur, OMAnimatedOperateur)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: CodesGeneres\AnimationConfig\Operateur.h
*********************************************************************/
