/*********************************************************************
	Rhapsody	: 9.0.2 
	Login		: kumarass
	Component	: CodesGeneres 
	Configuration 	: AnimationConfig
	Model Element	: MaqTapisReelIO
//!	Generated Date	: Mon, 19, Jan 2026  
	File Path	: CodesGeneres\AnimationConfig\MaqTapisReelIO.h
*********************************************************************/

#ifndef MaqTapisReelIO_H
#define MaqTapisReelIO_H

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
//## class MaqTapisReelIO
#include "bool_send_commandes_TrameCommandes_ProxyOperationInterface.h"
//## class MaqTapisReelIO
#include "int_connect_to_maq_ProxyOperationInterface.h"
//## class MaqTapisReelIO
#include "MaquetteIO.h"
//## class MaqTapisReelIO
#include "TrameCapteurs_read_capteurs_ProxyOperationInterface.h"
//## class MaqTapisReelIO
#include "void_disconnect_ProxyOperationInterface.h"
//#[ ignore
#define OMAnim__DESIGN_MaqTapisReelIO_set_ID_PC__int_ARGS_DECLARATION int p__ID_PC_;

#define OMAnim__DESIGN_MaqTapisReelIO_set_NUM_MAQ__int_ARGS_DECLARATION int p__NUM_MAQ_;
//#]

//## package _DESIGN

//## class MaqTapisReelIO
class MaqTapisReelIO : public OMThread, public OMReactive, public MaquetteIO, public TrameCapteurs_read_capteurs_ProxyOperationInterface, public void_disconnect_ProxyOperationInterface, public int_connect_to_maq_ProxyOperationInterface, public bool_send_commandes_TrameCommandes_ProxyOperationInterface {
public :

//#[ ignore
    //## package _DESIGN
    class p_MaqTapisReelIO_C : public TrameCapteurs_read_capteurs_ProxyOperationInterface, public void_disconnect_ProxyOperationInterface, public int_connect_to_maq_ProxyOperationInterface, public bool_send_commandes_TrameCommandes_ProxyOperationInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_MaqTapisReelIO_C();
        
        //## auto_generated
        virtual ~p_MaqTapisReelIO_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectMaqTapisReelIO(MaqTapisReelIO* part);
        
        //## auto_generated
        virtual int connect_to_maq();
        
        //## auto_generated
        virtual void disconnect();
        
        //## auto_generated
        bool_send_commandes_TrameCommandes_ProxyOperationInterface* getItsBool_send_commandes_TrameCommandes_ProxyOperationInterface();
        
        //## auto_generated
        int_connect_to_maq_ProxyOperationInterface* getItsInt_connect_to_maq_ProxyOperationInterface();
        
        //## auto_generated
        TrameCapteurs_read_capteurs_ProxyOperationInterface* getItsTrameCapteurs_read_capteurs_ProxyOperationInterface();
        
        //## auto_generated
        void_disconnect_ProxyOperationInterface* getItsVoid_disconnect_ProxyOperationInterface();
        
        //## auto_generated
        virtual TrameCapteurs read_capteurs();
        
        //## auto_generated
        virtual bool send_commandes(TrameCommandes commandes);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsBool_send_commandes_TrameCommandes_ProxyOperationInterface(bool_send_commandes_TrameCommandes_ProxyOperationInterface* p_bool_send_commandes_TrameCommandes_ProxyOperationInterface);
        
        //## auto_generated
        void setItsInt_connect_to_maq_ProxyOperationInterface(int_connect_to_maq_ProxyOperationInterface* p_int_connect_to_maq_ProxyOperationInterface);
        
        //## auto_generated
        void setItsTrameCapteurs_read_capteurs_ProxyOperationInterface(TrameCapteurs_read_capteurs_ProxyOperationInterface* p_TrameCapteurs_read_capteurs_ProxyOperationInterface);
        
        //## auto_generated
        void setItsVoid_disconnect_ProxyOperationInterface(void_disconnect_ProxyOperationInterface* p_void_disconnect_ProxyOperationInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        bool_send_commandes_TrameCommandes_ProxyOperationInterface* itsBool_send_commandes_TrameCommandes_ProxyOperationInterface;		//## link itsBool_send_commandes_TrameCommandes_ProxyOperationInterface
        
        int_connect_to_maq_ProxyOperationInterface* itsInt_connect_to_maq_ProxyOperationInterface;		//## link itsInt_connect_to_maq_ProxyOperationInterface
        
        TrameCapteurs_read_capteurs_ProxyOperationInterface* itsTrameCapteurs_read_capteurs_ProxyOperationInterface;		//## link itsTrameCapteurs_read_capteurs_ProxyOperationInterface
        
        void_disconnect_ProxyOperationInterface* itsVoid_disconnect_ProxyOperationInterface;		//## link itsVoid_disconnect_ProxyOperationInterface
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedMaqTapisReelIO;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    MaqTapisReelIO(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    virtual ~MaqTapisReelIO();
    
    ////    Operations    ////
    
    //## operation Demarrage()
    virtual void Demarrage();
    
    //## operation connect_to_maq()
    virtual int connect_to_maq();
    
    //## operation disconnect()
    virtual void disconnect();
    
    //## operation init_com()
    virtual void init_com();
    
    //## operation mode_reel()
    virtual void mode_reel();
    
    //## operation read_capteurs()
    virtual TrameCapteurs read_capteurs();
    
    //## operation reset_commandes()
    virtual void reset_commandes();
    
    //## operation send_commandes(TrameCommandes)
    virtual bool send_commandes(TrameCommandes commandes);

private :

    //## operation recv_capteurs(TrameCapteurs*)
    virtual bool recv_capteurs(TrameCapteurs* capteurs);
    
    ////    Additional operations    ////

public :

    //## auto_generated
    p_MaqTapisReelIO_C* getP_MaqTapisReelIO() const;
    
    //## auto_generated
    p_MaqTapisReelIO_C* get_p_MaqTapisReelIO() const;
    
    //## auto_generated
    int get_ID_PC_() const;
    
    //## auto_generated
    void set_ID_PC_(int p__ID_PC_);
    
    //## auto_generated
    int get_NUM_MAQ_() const;
    
    //## auto_generated
    void set_NUM_MAQ_(int p__NUM_MAQ_);
    
    //## auto_generated
    TrameCapteurs getCapteurs() const;
    
    //## auto_generated
    void setCapteurs(TrameCapteurs p_capteurs);
    
    //## auto_generated
    TrameCommandes getCommandes() const;
    
    //## auto_generated
    void setCommandes(TrameCommandes p_commandes);
    
    //## auto_generated
    bool getConnected() const;
    
    //## auto_generated
    void setConnected(bool p_connected);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    //## auto_generated
    void initStatechart();
    
    ////    Attributes    ////
    
    int _ID_PC_;		//## attribute _ID_PC_
    
    int _NUM_MAQ_;		//## attribute _NUM_MAQ_
    
    TrameCapteurs capteurs;		//## attribute capteurs
    
    TrameCommandes commandes;		//## attribute commandes
    
    bool connected;		//## attribute connected
    
    ////    Relations and components    ////
    
//#[ ignore
    p_MaqTapisReelIO_C p_MaqTapisReelIO;
//#]

    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // idle:
    //## statechart_method
    inline bool idle_IN() const;
    
    // connected_to_maquette_reel:
    //## statechart_method
    inline bool connected_to_maquette_reel_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum MaqTapisReelIO_Enum {
        OMNonState = 0,
        idle = 1,
        connected_to_maquette_reel = 2
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(_DESIGN_MaqTapisReelIO_set_ID_PC__int)

DECLARE_OPERATION_CLASS(_DESIGN_MaqTapisReelIO_set_NUM_MAQ__int)

//#[ ignore
class OMAnimatedMaqTapisReelIO : public OMAnimatedMaquetteIO {
    DECLARE_REACTIVE_META(MaqTapisReelIO, OMAnimatedMaqTapisReelIO)
    
    DECLARE_META_OP(_DESIGN_MaqTapisReelIO_set_ID_PC__int)
    
    DECLARE_META_OP(_DESIGN_MaqTapisReelIO_set_NUM_MAQ__int)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void idle_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void connected_to_maquette_reel_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool MaqTapisReelIO::rootState_IN() const {
    return true;
}

inline bool MaqTapisReelIO::idle_IN() const {
    return rootState_subState == idle;
}

inline bool MaqTapisReelIO::connected_to_maquette_reel_IN() const {
    return rootState_subState == connected_to_maquette_reel;
}

#endif
/*********************************************************************
	File Path	: CodesGeneres\AnimationConfig\MaqTapisReelIO.h
*********************************************************************/
