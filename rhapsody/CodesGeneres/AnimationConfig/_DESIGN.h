/*********************************************************************
	Rhapsody	: 9.0.2 
	Login		: kumarass
	Component	: CodesGeneres 
	Configuration 	: AnimationConfig
	Model Element	: _DESIGN
//!	Generated Date	: Thu, 29, Jan 2026  
	File Path	: CodesGeneres\AnimationConfig\_DESIGN.h
*********************************************************************/

#ifndef _DESIGN_H
#define _DESIGN_H

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
#include <oxf\event.h>
//## auto_generated
class Griffe;

//## auto_generated
class MAIN_SysConvoyage;

//## auto_generated
class MaqTapisReelIO;

//## auto_generated
class MaqTapisSimIO;

//## auto_generated
class MaquetteIO;

//## auto_generated
class MaquetteTapis;

//## auto_generated
class TapisA;

//## auto_generated
class TapisB;

//## auto_generated
class TapisC;

//#[ ignore
#define evDisconnect__DESIGN_id 15001

#define evDEBA__DESIGN_id 15002

#define evMIAS__DESIGN_id 15003

#define evMIA__DESIGN_id 15004

#define evFINA__DESIGN_id 15005

#define evVERSA__DESIGN_id 15006

#define evDEBC__DESIGN_id 15007

#define evFINC__DESIGN_id 15008

#define evVERSAS__DESIGN_id 15009

#define evDCA__DESIGN_id 15010

#define ev__DESIGN_id 15011

#define evVERB__DESIGN_id 15012

#define evdebug__DESIGN_id 15013

#define evReset__DESIGN_id 15014

#define evRUNA__DESIGN_id 15015

#define evNONRUNA__DESIGN_id 15016

#define evNONRUNB__DESIGN_id 15017

#define evRUNB__DESIGN_id 15018

#define evDEBB__DESIGN_id 15019

#define evMIB__DESIGN_id 15020

#define evVERSB__DESIGN_id 15021

#define evFINB__DESIGN_id 15022

#define eventmessage_0__DESIGN_id 15023

#define evDCB__DESIGN_id 15024

#define FINB__DESIGN_id 15025
//#]

//## package _DESIGN


//#[ type TrameCapteurs
typedef struct {
    // Octet 1
    unsigned char dca : 1;  // D0
    unsigned char dcb : 1;  // D1
    unsigned char deba : 1;         // D2
    unsigned char mia : 1;        // D3
    unsigned char reserve1 : 4;        // D4-D7 (toujours à 0)
    
    // Octet 2
    unsigned char fina : 1;           // D0
    unsigned char debb : 1;         // D1
    unsigned char mib : 1;        // D2
    unsigned char finb : 1;           // D3
    unsigned char reserve2 : 4;        // D4-D7 (toujours à 0)
    
    // Octet 3
    unsigned char debc : 1;         // D0
    unsigned char finc : 1;           // D1
    unsigned char versa : 1;          // D2
    unsigned char versb : 1;          // D3
    unsigned char reserve3 : 4;        // D4-D7 (toujours à 0)
} TrameCapteurs;
//#]

//#[ type TrameCommandes
typedef struct {
    // Octet 1
    unsigned char mava : 1;  // avancer TpA
    unsigned char mara : 1;  // reculer TpA
    unsigned char mavb : 1;  // marche avant TpB
    unsigned char marb : 1;  // D3
    unsigned char mavc : 1;  // marche avant TpC
    unsigned char marc : 1;  // D5
    unsigned char ev   : 1;  // D6
    unsigned char reserved : 1;    // D7
} TrameCommandes;
//#]

//## event evDisconnect()
class evDisconnect : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevDisconnect;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evDisconnect();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevDisconnect : virtual public AOMEvent {
    DECLARE_META_EVENT(evDisconnect)
};
//#]
#endif // _OMINSTRUMENT

//## event evDEBA()
class evDEBA : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevDEBA;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evDEBA();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevDEBA : virtual public AOMEvent {
    DECLARE_META_EVENT(evDEBA)
};
//#]
#endif // _OMINSTRUMENT

//## event evMIAS()
class evMIAS : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevMIAS;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evMIAS();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevMIAS : virtual public AOMEvent {
    DECLARE_META_EVENT(evMIAS)
};
//#]
#endif // _OMINSTRUMENT

//## event evMIA()
class evMIA : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevMIA;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evMIA();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevMIA : virtual public AOMEvent {
    DECLARE_META_EVENT(evMIA)
};
//#]
#endif // _OMINSTRUMENT

//## event evFINA()
class evFINA : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevFINA;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evFINA();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevFINA : virtual public AOMEvent {
    DECLARE_META_EVENT(evFINA)
};
//#]
#endif // _OMINSTRUMENT

//## event evVERSA()
class evVERSA : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevVERSA;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evVERSA();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevVERSA : virtual public AOMEvent {
    DECLARE_META_EVENT(evVERSA)
};
//#]
#endif // _OMINSTRUMENT

//## event evDEBC()
class evDEBC : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevDEBC;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evDEBC();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevDEBC : virtual public AOMEvent {
    DECLARE_META_EVENT(evDEBC)
};
//#]
#endif // _OMINSTRUMENT

//## event evFINC()
class evFINC : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevFINC;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evFINC();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevFINC : virtual public AOMEvent {
    DECLARE_META_EVENT(evFINC)
};
//#]
#endif // _OMINSTRUMENT

//## event evVERSAS()
class evVERSAS : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevVERSAS;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evVERSAS();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevVERSAS : virtual public AOMEvent {
    DECLARE_META_EVENT(evVERSAS)
};
//#]
#endif // _OMINSTRUMENT

//## event evDCA()
class evDCA : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevDCA;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evDCA();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevDCA : virtual public AOMEvent {
    DECLARE_META_EVENT(evDCA)
};
//#]
#endif // _OMINSTRUMENT

//## event ev()
class ev : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedev;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ev();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedev : virtual public AOMEvent {
    DECLARE_META_EVENT(ev)
};
//#]
#endif // _OMINSTRUMENT

//## event evVERB()
class evVERB : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevVERB;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evVERB();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevVERB : virtual public AOMEvent {
    DECLARE_META_EVENT(evVERB)
};
//#]
#endif // _OMINSTRUMENT

//## event evdebug()
class evdebug : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevdebug;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evdebug();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevdebug : virtual public AOMEvent {
    DECLARE_META_EVENT(evdebug)
};
//#]
#endif // _OMINSTRUMENT

//## event evReset()
class evReset : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevReset;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evReset();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevReset : virtual public AOMEvent {
    DECLARE_META_EVENT(evReset)
};
//#]
#endif // _OMINSTRUMENT

//## event evRUNA()
class evRUNA : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevRUNA;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evRUNA();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevRUNA : virtual public AOMEvent {
    DECLARE_META_EVENT(evRUNA)
};
//#]
#endif // _OMINSTRUMENT

//## event evNONRUNA()
class evNONRUNA : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevNONRUNA;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evNONRUNA();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevNONRUNA : virtual public AOMEvent {
    DECLARE_META_EVENT(evNONRUNA)
};
//#]
#endif // _OMINSTRUMENT

//## event evNONRUNB()
class evNONRUNB : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevNONRUNB;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evNONRUNB();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevNONRUNB : virtual public AOMEvent {
    DECLARE_META_EVENT(evNONRUNB)
};
//#]
#endif // _OMINSTRUMENT

//## event evRUNB()
class evRUNB : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevRUNB;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evRUNB();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevRUNB : virtual public AOMEvent {
    DECLARE_META_EVENT(evRUNB)
};
//#]
#endif // _OMINSTRUMENT

//## event evDEBB()
class evDEBB : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevDEBB;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evDEBB();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevDEBB : virtual public AOMEvent {
    DECLARE_META_EVENT(evDEBB)
};
//#]
#endif // _OMINSTRUMENT

//## event evMIB()
class evMIB : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevMIB;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evMIB();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevMIB : virtual public AOMEvent {
    DECLARE_META_EVENT(evMIB)
};
//#]
#endif // _OMINSTRUMENT

//## event evVERSB()
class evVERSB : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevVERSB;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evVERSB();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevVERSB : virtual public AOMEvent {
    DECLARE_META_EVENT(evVERSB)
};
//#]
#endif // _OMINSTRUMENT

//## event evFINB()
class evFINB : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevFINB;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evFINB();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevFINB : virtual public AOMEvent {
    DECLARE_META_EVENT(evFINB)
};
//#]
#endif // _OMINSTRUMENT

//## event eventmessage_0()
class eventmessage_0 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedeventmessage_0;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    eventmessage_0();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedeventmessage_0 : virtual public AOMEvent {
    DECLARE_META_EVENT(eventmessage_0)
};
//#]
#endif // _OMINSTRUMENT

//## event evDCB()
class evDCB : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevDCB;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evDCB();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevDCB : virtual public AOMEvent {
    DECLARE_META_EVENT(evDCB)
};
//#]
#endif // _OMINSTRUMENT

//## event FINB()
class FINB : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedFINB;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    FINB();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedFINB : virtual public AOMEvent {
    DECLARE_META_EVENT(FINB)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: CodesGeneres\AnimationConfig\_DESIGN.h
*********************************************************************/
