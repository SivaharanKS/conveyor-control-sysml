/*********************************************************************
	Rhapsody	: 9.0.2 
	Login		: kumarass
	Component	: CodesGeneres 
	Configuration 	: AnimationConfig
	Model Element	: MaquetteTapis
//!	Generated Date	: Tue, 6, Jan 2026  
	File Path	: CodesGeneres\AnimationConfig\MaquetteTapis.h
*********************************************************************/

#ifndef MaquetteTapis_H
#define MaquetteTapis_H

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
//## class MaquetteTapis
#include "void_arreterA_ProxyOperationInterface.h"
//## class MaquetteTapis
#include "void_arreterB_ProxyOperationInterface.h"
//## class MaquetteTapis
#include "void_arreterC_ProxyOperationInterface.h"
//## class MaquetteTapis
#include "void_avancerA_ProxyOperationInterface.h"
//## class MaquetteTapis
#include "void_avancerB_ProxyOperationInterface.h"
//## class MaquetteTapis
#include "void_avancerC_ProxyOperationInterface.h"
//## class MaquetteTapis
#include "void_griffeA_ProxyOperationInterface.h"
//## class MaquetteTapis
#include "void_griffeB_ProxyOperationInterface.h"
//## class MaquetteTapis
#include "void_reculerA_ProxyOperationInterface.h"
//## class MaquetteTapis
#include "void_reculerB_ProxyOperationInterface.h"
//## class MaquetteTapis
#include "void_reculerC_ProxyOperationInterface.h"
//## auto_generated
#include <oxf\OMDefaultMulticastReactivePort.h>
//## class p_maq_sim_C
#include "bool_send_commandes_TrameCommandes_ProxyOperationInterface.h"
//## class p_maq_sim_C
#include "int_connect_to_maq_ProxyOperationInterface.h"
//## class p_maq_sim_C
#include "TrameCapteurs_read_capteurs_ProxyOperationInterface.h"
//## class p_maq_sim_C
#include "void_disconnect_ProxyOperationInterface.h"
//#[ ignore
#define OMAnim__DESIGN_MaquetteTapis_setMode_reel_bool_ARGS_DECLARATION bool p_mode_reel;

#define OMAnim__DESIGN_MaquetteTapis_setMode_simulation_bool_ARGS_DECLARATION bool p_mode_simulation;
//#]

//## package _DESIGN

//## class MaquetteTapis
class MaquetteTapis : public OMReactive, public void_avancerA_ProxyOperationInterface, public void_arreterA_ProxyOperationInterface, public void_reculerA_ProxyOperationInterface, public void_avancerC_ProxyOperationInterface, public void_arreterC_ProxyOperationInterface, public void_reculerC_ProxyOperationInterface, public void_griffeA_ProxyOperationInterface, public void_griffeB_ProxyOperationInterface, public void_avancerB_ProxyOperationInterface, public void_arreterB_ProxyOperationInterface, public void_reculerB_ProxyOperationInterface {
public :

//#[ ignore
    //## package _DESIGN
    class toTapis_C : public OMDefaultMulticastReactivePort {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        toTapis_C();
        
        //## auto_generated
        virtual ~toTapis_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectMaquetteTapis(MaquetteTapis* part);
        
        ////    Attributes    ////
    
    protected :
    
        int _p_;		//## attribute _p_
    };
    
    //## package _DESIGN
    class p_maq_sim_C : public bool_send_commandes_TrameCommandes_ProxyOperationInterface, public TrameCapteurs_read_capteurs_ProxyOperationInterface, public int_connect_to_maq_ProxyOperationInterface, public void_disconnect_ProxyOperationInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_maq_sim_C();
        
        //## auto_generated
        virtual ~p_maq_sim_C();
        
        ////    Operations    ////
        
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
        MaquetteTapis::p_maq_sim_C* getOutBound();
        
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
    
    //## package _DESIGN
    class p_Commandes_C : public void_avancerA_ProxyOperationInterface, public void_arreterA_ProxyOperationInterface, public void_reculerA_ProxyOperationInterface, public void_avancerC_ProxyOperationInterface, public void_arreterC_ProxyOperationInterface, public void_reculerC_ProxyOperationInterface, public void_griffeA_ProxyOperationInterface, public void_griffeB_ProxyOperationInterface, public void_avancerB_ProxyOperationInterface, public void_arreterB_ProxyOperationInterface, public void_reculerB_ProxyOperationInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_Commandes_C();
        
        //## auto_generated
        virtual ~p_Commandes_C();
        
        ////    Operations    ////
        
        //## auto_generated
        virtual void arreterA();
        
        //## auto_generated
        virtual void arreterB();
        
        //## auto_generated
        virtual void arreterC();
        
        //## auto_generated
        virtual void avancerA();
        
        //## auto_generated
        virtual void avancerB();
        
        //## auto_generated
        virtual void avancerC();
        
        //## auto_generated
        void connectMaquetteTapis(MaquetteTapis* part);
        
        //## auto_generated
        void_arreterA_ProxyOperationInterface* getItsVoid_arreterA_ProxyOperationInterface();
        
        //## auto_generated
        void_arreterB_ProxyOperationInterface* getItsVoid_arreterB_ProxyOperationInterface();
        
        //## auto_generated
        void_arreterC_ProxyOperationInterface* getItsVoid_arreterC_ProxyOperationInterface();
        
        //## auto_generated
        void_avancerA_ProxyOperationInterface* getItsVoid_avancerA_ProxyOperationInterface();
        
        //## auto_generated
        void_avancerB_ProxyOperationInterface* getItsVoid_avancerB_ProxyOperationInterface();
        
        //## auto_generated
        void_avancerC_ProxyOperationInterface* getItsVoid_avancerC_ProxyOperationInterface();
        
        //## auto_generated
        void_griffeA_ProxyOperationInterface* getItsVoid_griffeA_ProxyOperationInterface();
        
        //## auto_generated
        void_griffeB_ProxyOperationInterface* getItsVoid_griffeB_ProxyOperationInterface();
        
        //## auto_generated
        void_reculerA_ProxyOperationInterface* getItsVoid_reculerA_ProxyOperationInterface();
        
        //## auto_generated
        void_reculerB_ProxyOperationInterface* getItsVoid_reculerB_ProxyOperationInterface();
        
        //## auto_generated
        void_reculerC_ProxyOperationInterface* getItsVoid_reculerC_ProxyOperationInterface();
        
        //## auto_generated
        virtual void griffeA();
        
        //## auto_generated
        virtual void griffeB();
        
        //## auto_generated
        virtual void reculerA();
        
        //## auto_generated
        virtual void reculerB();
        
        //## auto_generated
        virtual void reculerC();
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsVoid_arreterA_ProxyOperationInterface(void_arreterA_ProxyOperationInterface* p_void_arreterA_ProxyOperationInterface);
        
        //## auto_generated
        void setItsVoid_arreterB_ProxyOperationInterface(void_arreterB_ProxyOperationInterface* p_void_arreterB_ProxyOperationInterface);
        
        //## auto_generated
        void setItsVoid_arreterC_ProxyOperationInterface(void_arreterC_ProxyOperationInterface* p_void_arreterC_ProxyOperationInterface);
        
        //## auto_generated
        void setItsVoid_avancerA_ProxyOperationInterface(void_avancerA_ProxyOperationInterface* p_void_avancerA_ProxyOperationInterface);
        
        //## auto_generated
        void setItsVoid_avancerB_ProxyOperationInterface(void_avancerB_ProxyOperationInterface* p_void_avancerB_ProxyOperationInterface);
        
        //## auto_generated
        void setItsVoid_avancerC_ProxyOperationInterface(void_avancerC_ProxyOperationInterface* p_void_avancerC_ProxyOperationInterface);
        
        //## auto_generated
        void setItsVoid_griffeA_ProxyOperationInterface(void_griffeA_ProxyOperationInterface* p_void_griffeA_ProxyOperationInterface);
        
        //## auto_generated
        void setItsVoid_griffeB_ProxyOperationInterface(void_griffeB_ProxyOperationInterface* p_void_griffeB_ProxyOperationInterface);
        
        //## auto_generated
        void setItsVoid_reculerA_ProxyOperationInterface(void_reculerA_ProxyOperationInterface* p_void_reculerA_ProxyOperationInterface);
        
        //## auto_generated
        void setItsVoid_reculerB_ProxyOperationInterface(void_reculerB_ProxyOperationInterface* p_void_reculerB_ProxyOperationInterface);
        
        //## auto_generated
        void setItsVoid_reculerC_ProxyOperationInterface(void_reculerC_ProxyOperationInterface* p_void_reculerC_ProxyOperationInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        void_arreterA_ProxyOperationInterface* itsVoid_arreterA_ProxyOperationInterface;		//## link itsVoid_arreterA_ProxyOperationInterface
        
        void_arreterB_ProxyOperationInterface* itsVoid_arreterB_ProxyOperationInterface;		//## link itsVoid_arreterB_ProxyOperationInterface
        
        void_arreterC_ProxyOperationInterface* itsVoid_arreterC_ProxyOperationInterface;		//## link itsVoid_arreterC_ProxyOperationInterface
        
        void_avancerA_ProxyOperationInterface* itsVoid_avancerA_ProxyOperationInterface;		//## link itsVoid_avancerA_ProxyOperationInterface
        
        void_avancerB_ProxyOperationInterface* itsVoid_avancerB_ProxyOperationInterface;		//## link itsVoid_avancerB_ProxyOperationInterface
        
        void_avancerC_ProxyOperationInterface* itsVoid_avancerC_ProxyOperationInterface;		//## link itsVoid_avancerC_ProxyOperationInterface
        
        void_griffeA_ProxyOperationInterface* itsVoid_griffeA_ProxyOperationInterface;		//## link itsVoid_griffeA_ProxyOperationInterface
        
        void_griffeB_ProxyOperationInterface* itsVoid_griffeB_ProxyOperationInterface;		//## link itsVoid_griffeB_ProxyOperationInterface
        
        void_reculerA_ProxyOperationInterface* itsVoid_reculerA_ProxyOperationInterface;		//## link itsVoid_reculerA_ProxyOperationInterface
        
        void_reculerB_ProxyOperationInterface* itsVoid_reculerB_ProxyOperationInterface;		//## link itsVoid_reculerB_ProxyOperationInterface
        
        void_reculerC_ProxyOperationInterface* itsVoid_reculerC_ProxyOperationInterface;		//## link itsVoid_reculerC_ProxyOperationInterface
    };
    
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
        MaquetteTapis::p_MaqTapisReelIO_C* getOutBound();
        
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
    friend class OMAnimatedMaquetteTapis;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    MaquetteTapis(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    virtual ~MaquetteTapis();
    
    ////    Operations    ////
    
    //## operation arreterA()
    virtual void arreterA();
    
    //## operation arreterB()
    virtual void arreterB();
    
    //## operation arreterC()
    virtual void arreterC();
    
    //## operation avancerA()
    virtual void avancerA();
    
    //## operation avancerB()
    virtual void avancerB();
    
    //## operation avancerC()
    virtual void avancerC();
    
    //## operation griffeA()
    virtual void griffeA();
    
    //## operation griffeB()
    virtual void griffeB();
    
    //## operation reculerA()
    virtual void reculerA();
    
    //## operation reculerB()
    virtual void reculerB();
    
    //## operation reculerC()
    virtual void reculerC();
    
    //## operation reset_commandes()
    virtual void reset_commandes();
    
    ////    Additional operations    ////
    
    //## auto_generated
    toTapis_C* getToTapis() const;
    
    //## auto_generated
    toTapis_C* get_toTapis() const;
    
    //## auto_generated
    p_maq_sim_C* getP_maq_sim() const;
    
    //## auto_generated
    p_maq_sim_C* get_p_maq_sim() const;
    
    //## auto_generated
    p_Commandes_C* getP_Commandes() const;
    
    //## auto_generated
    p_Commandes_C* get_p_Commandes() const;
    
    //## auto_generated
    p_MaqTapisReelIO_C* getP_MaqTapisReelIO() const;
    
    //## auto_generated
    p_MaqTapisReelIO_C* get_p_MaqTapisReelIO() const;
    
    //## auto_generated
    TrameCapteurs getCapteurs() const;
    
    //## auto_generated
    void setCapteurs(TrameCapteurs p_capteurs);
    
    //## auto_generated
    TrameCommandes getCommandes() const;
    
    //## auto_generated
    void setCommandes(TrameCommandes p_commandes);
    
    //## auto_generated
    bool getMode_reel() const;
    
    //## auto_generated
    void setMode_reel(bool p_mode_reel);
    
    //## auto_generated
    bool getMode_simulation() const;
    
    //## auto_generated
    void setMode_simulation(bool p_mode_simulation);
    
    //## auto_generated
    bool getReel_connected() const;
    
    //## auto_generated
    void setReel_connected(bool p_reel_connected);
    
    //## auto_generated
    bool getSim_connected() const;
    
    //## auto_generated
    void setSim_connected(bool p_sim_connected);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);
    
    ////    Attributes    ////
    
    TrameCapteurs capteurs;		//## attribute capteurs
    
    TrameCommandes commandes;		//## attribute commandes
    
    bool mode_reel;		//## attribute mode_reel
    
    bool mode_simulation;		//## attribute mode_simulation
    
    bool reel_connected;		//## attribute reel_connected
    
    bool sim_connected;		//## attribute sim_connected
    
    ////    Relations and components    ////
    
//#[ ignore
    toTapis_C toTapis;
    
    p_maq_sim_C p_maq_sim;
    
    p_Commandes_C p_Commandes;
    
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
    
    // sim_dialog:
    //## statechart_method
    inline bool sim_dialog_IN() const;
    
    // sim_connecting:
    //## statechart_method
    inline bool sim_connecting_IN() const;
    
    // reel_dialog:
    //## statechart_method
    inline bool reel_dialog_IN() const;
    
    // reel_connecting:
    //## statechart_method
    inline bool reel_connecting_IN() const;
    
    // idle:
    //## statechart_method
    inline bool idle_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus idle_handleEvent();
    
    ////    Framework    ////

protected :

//#[ ignore
    enum MaquetteTapis_Enum {
        OMNonState = 0,
        sim_dialog = 1,
        sim_connecting = 2,
        reel_dialog = 3,
        reel_connecting = 4,
        idle = 5
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    IOxfTimeout* rootState_timeout;
//#]
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(_DESIGN_MaquetteTapis_setMode_reel_bool)

DECLARE_OPERATION_CLASS(_DESIGN_MaquetteTapis_setMode_simulation_bool)

//#[ ignore
class OMAnimatedMaquetteTapis : virtual public AOMInstance {
    DECLARE_REACTIVE_META(MaquetteTapis, OMAnimatedMaquetteTapis)
    
    DECLARE_META_OP(_DESIGN_MaquetteTapis_setMode_reel_bool)
    
    DECLARE_META_OP(_DESIGN_MaquetteTapis_setMode_simulation_bool)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sim_dialog_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sim_connecting_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void reel_dialog_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void reel_connecting_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void idle_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool MaquetteTapis::rootState_IN() const {
    return true;
}

inline bool MaquetteTapis::sim_dialog_IN() const {
    return rootState_subState == sim_dialog;
}

inline bool MaquetteTapis::sim_connecting_IN() const {
    return rootState_subState == sim_connecting;
}

inline bool MaquetteTapis::reel_dialog_IN() const {
    return rootState_subState == reel_dialog;
}

inline bool MaquetteTapis::reel_connecting_IN() const {
    return rootState_subState == reel_connecting;
}

inline bool MaquetteTapis::idle_IN() const {
    return rootState_subState == idle;
}

#endif
/*********************************************************************
	File Path	: CodesGeneres\AnimationConfig\MaquetteTapis.h
*********************************************************************/
