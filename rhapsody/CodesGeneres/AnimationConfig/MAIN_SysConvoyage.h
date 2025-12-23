/*********************************************************************
	Rhapsody	: 9.0.2 
	Login		: kumarass
	Component	: CodesGeneres 
	Configuration 	: AnimationConfig
	Model Element	: MAIN_SysConvoyage
//!	Generated Date	: Tue, 23, Dec 2025  
	File Path	: CodesGeneres\AnimationConfig\MAIN_SysConvoyage.h
*********************************************************************/

#ifndef MAIN_SysConvoyage_H
#define MAIN_SysConvoyage_H

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
#include "_DESIGN.h"
//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## classInstance itsGriffe
#include "Griffe.h"
//## classInstance itsMaqTapisReelIO
#include "MaqTapisReelIO.h"
//## classInstance itsMaqTapisSimIO
#include "MaqTapisSimIO.h"
//## classInstance itsMaquetteTapis
#include "MaquetteTapis.h"
//## classInstance itsTapisA
#include "TapisA.h"
//## classInstance itsTapisB
#include "TapisB.h"
//## classInstance itsTapisC
#include "TapisC.h"
//## package _DESIGN

//## class MAIN_SysConvoyage
class MAIN_SysConvoyage : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedMAIN_SysConvoyage;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    MAIN_SysConvoyage(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~MAIN_SysConvoyage();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Griffe* getItsGriffe() const;
    
    //## auto_generated
    MaqTapisReelIO* getItsMaqTapisReelIO() const;
    
    //## auto_generated
    MaqTapisSimIO* getItsMaqTapisSimIO() const;
    
    //## auto_generated
    MaquetteTapis* getItsMaquetteTapis() const;
    
    //## auto_generated
    TapisA* getItsTapisA() const;
    
    //## auto_generated
    TapisB* getItsTapisB() const;
    
    //## auto_generated
    TapisC* getItsTapisC() const;
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    ////    Relations and components    ////
    
    Griffe itsGriffe;		//## classInstance itsGriffe
    
    MaqTapisReelIO itsMaqTapisReelIO;		//## classInstance itsMaqTapisReelIO
    
    MaqTapisSimIO itsMaqTapisSimIO;		//## classInstance itsMaqTapisSimIO
    
    MaquetteTapis itsMaquetteTapis;		//## classInstance itsMaquetteTapis
    
    TapisA itsTapisA;		//## classInstance itsTapisA
    
    TapisB itsTapisB;		//## classInstance itsTapisB
    
    TapisC itsTapisC;		//## classInstance itsTapisC
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void setActiveContext(IOxfActive* theActiveContext, bool activeInstance);
    
    //## auto_generated
    virtual void destroy();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedMAIN_SysConvoyage : virtual public AOMInstance {
    DECLARE_META(MAIN_SysConvoyage, OMAnimatedMAIN_SysConvoyage)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: CodesGeneres\AnimationConfig\MAIN_SysConvoyage.h
*********************************************************************/
