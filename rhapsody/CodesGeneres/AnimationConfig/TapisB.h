/*********************************************************************
	Rhapsody	: 9.0.2 
	Login		: kumarass
	Component	: CodesGeneres 
	Configuration 	: AnimationConfig
	Model Element	: TapisB
//!	Generated Date	: Tue, 27, Jan 2026  
	File Path	: CodesGeneres\AnimationConfig\TapisB.h
*********************************************************************/

#ifndef TapisB_H
#define TapisB_H

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
//## auto_generated
#include <oxf\OMDefaultReactivePort.h>
//## class p_Commandes_C
#include "void_arreterA_ProxyOperationInterface.h"
//## class p_Commandes_C
#include "void_arreterB_ProxyOperationInterface.h"
//## class p_Commandes_C
#include "void_arreterC_ProxyOperationInterface.h"
//## class p_Commandes_C
#include "void_avancerA_ProxyOperationInterface.h"
//## class p_Commandes_C
#include "void_avancerB_ProxyOperationInterface.h"
//## class p_Commandes_C
#include "void_avancerC_ProxyOperationInterface.h"
//## class p_Commandes_C
#include "void_griffeA_ProxyOperationInterface.h"
//## class p_Commandes_C
#include "void_griffeB_ProxyOperationInterface.h"
//## class p_Commandes_C
#include "void_reculerA_ProxyOperationInterface.h"
//## class p_Commandes_C
#include "void_reculerB_ProxyOperationInterface.h"
//## class p_Commandes_C
#include "void_reculerC_ProxyOperationInterface.h"
//## package _DESIGN

//## class TapisB
class TapisB : public OMReactive {
public :

//#[ ignore
    //## package _DESIGN
    class fromMaquetteTapis_C : public OMDefaultReactivePort {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        fromMaquetteTapis_C();
        
        //## auto_generated
        virtual ~fromMaquetteTapis_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectTapisB(TapisB* part);
        
        ////    Attributes    ////
    
    protected :
    
        int _p_;		//## attribute _p_
    };
    
    //## package _DESIGN
    class fromA_C : public OMDefaultReactivePort {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        fromA_C();
        
        //## auto_generated
        virtual ~fromA_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectTapisB(TapisB* part);
        
        ////    Attributes    ////
    
    protected :
    
        int _p_;		//## attribute _p_
    };
    
    //## package _DESIGN
    class toG_C : public OMDefaultReactivePort {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        toG_C();
        
        //## auto_generated
        virtual ~toG_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectTapisB(TapisB* part);
        
        ////    Attributes    ////
    
    protected :
    
        int _p_;		//## attribute _p_
    };
    
    //## package _DESIGN
    class toA_C : public OMDefaultReactivePort {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        toA_C();
        
        //## auto_generated
        virtual ~toA_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectTapisB(TapisB* part);
        
        ////    Attributes    ////
    
    protected :
    
        int _p_;		//## attribute _p_
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
        TapisB::p_Commandes_C* getOutBound();
        
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
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedTapisB;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    TapisB(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    virtual ~TapisB();
    
    ////    Operations    ////
    
    //## operation EnvoisRun()
    virtual void EnvoisRun();
    
    ////    Additional operations    ////
    
    //## auto_generated
    fromMaquetteTapis_C* getFromMaquetteTapis() const;
    
    //## auto_generated
    fromMaquetteTapis_C* get_fromMaquetteTapis() const;
    
    //## auto_generated
    fromA_C* getFromA() const;
    
    //## auto_generated
    fromA_C* get_fromA() const;
    
    //## auto_generated
    toG_C* getToG() const;
    
    //## auto_generated
    toG_C* get_toG() const;
    
    //## auto_generated
    toA_C* getToA() const;
    
    //## auto_generated
    toA_C* get_toA() const;
    
    //## auto_generated
    p_Commandes_C* getP_Commandes() const;
    
    //## auto_generated
    p_Commandes_C* get_p_Commandes() const;
    
    //## auto_generated
    bool getRunA() const;
    
    //## auto_generated
    void setRunA(bool p_RunA);
    
    //## auto_generated
    bool getRunB() const;
    
    //## auto_generated
    void setRunB(bool p_RunB);
    
    //## auto_generated
    int getChoix() const;
    
    //## auto_generated
    void setChoix(int p_choix);
    
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
    
    bool RunA;		//## attribute RunA
    
    bool RunB;		//## attribute RunB
    
    int choix;		//## attribute choix
    
    ////    Relations and components    ////
    
//#[ ignore
    fromMaquetteTapis_C fromMaquetteTapis;
    
    fromA_C fromA;
    
    toG_C toG;
    
    toA_C toA;
    
    p_Commandes_C p_Commandes;
//#]

    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    void rootStateEntDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // state_9:
    //## statechart_method
    inline bool state_9_IN() const;
    
    //## statechart_method
    void state_9_entDef();
    
    //## statechart_method
    void state_9_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_9TakeevReset();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_9_processEvent();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_9_handleEvent();
    
    // state_26:
    //## statechart_method
    inline bool state_26_IN() const;
    
    //## statechart_method
    void state_26_entDef();
    
    //## statechart_method
    void state_26_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_26_processEvent();
    
    // ENVOISLESRUN:
    //## statechart_method
    inline bool ENVOISLESRUN_IN() const;
    
    // state_25:
    //## statechart_method
    inline bool state_25_IN() const;
    
    //## statechart_method
    void state_25_entDef();
    
    //## statechart_method
    void state_25_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_25_processEvent();
    
    // LESRUN:
    //## statechart_method
    inline bool LESRUN_IN() const;
    
    // state_12:
    //## statechart_method
    inline bool state_12_IN() const;
    
    //## statechart_method
    void state_12_entDef();
    
    //## statechart_method
    void state_12_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_12_processEvent();
    
    // retourB:
    //## statechart_method
    inline bool retourB_IN() const;
    
    // init2:
    //## statechart_method
    inline bool init2_IN() const;
    
    // DebutB:
    //## statechart_method
    inline bool DebutB_IN() const;
    
    // Debut:
    //## statechart_method
    inline bool Debut_IN() const;
    
    // choixB:
    //## statechart_method
    inline bool choixB_IN() const;
    
    // BversGriffe:
    //## statechart_method
    inline bool BversGriffe_IN() const;
    
    // BsurC:
    //## statechart_method
    inline bool BsurC_IN() const;
    
    // BretourC:
    //## statechart_method
    inline bool BretourC_IN() const;
    
    // AvancerB:
    //## statechart_method
    inline bool AvancerB_IN() const;
    
    // AttenteGriffe:
    //## statechart_method
    inline bool AttenteGriffe_IN() const;
    
    // ArreterB:
    //## statechart_method
    inline bool ArreterB_IN() const;
    
    // state_11:
    //## statechart_method
    inline bool state_11_IN() const;
    
    //## statechart_method
    void state_11_entDef();
    
    //## statechart_method
    void state_11_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_11_processEvent();
    
    // Rien_B:
    //## statechart_method
    inline bool Rien_B_IN() const;
    
    // Retour_B:
    //## statechart_method
    inline bool Retour_B_IN() const;
    
    // Initialisation:
    //## statechart_method
    inline bool Initialisation_IN() const;
    
    // init:
    //## statechart_method
    inline bool init_IN() const;
    
    // Debut_B:
    //## statechart_method
    inline bool Debut_B_IN() const;
    
    // Benne_B:
    //## statechart_method
    inline bool Benne_B_IN() const;
    
    // Avancer_B_apres_griffe:
    //## statechart_method
    inline bool Avancer_B_apres_griffe_IN() const;
    
    // Avancer_B:
    //## statechart_method
    inline bool Avancer_B_IN() const;
    
    // Arreter_B:
    //## statechart_method
    inline bool Arreter_B_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum TapisB_Enum {
        OMNonState = 0,
        state_9 = 1,
        state_26 = 2,
        ENVOISLESRUN = 3,
        state_25 = 4,
        LESRUN = 5,
        state_12 = 6,
        retourB = 7,
        init2 = 8,
        DebutB = 9,
        Debut = 10,
        choixB = 11,
        BversGriffe = 12,
        BsurC = 13,
        BretourC = 14,
        AvancerB = 15,
        AttenteGriffe = 16,
        ArreterB = 17,
        state_11 = 18,
        Rien_B = 19,
        Retour_B = 20,
        Initialisation = 21,
        init = 22,
        Debut_B = 23,
        Benne_B = 24,
        Avancer_B_apres_griffe = 25,
        Avancer_B = 26,
        Arreter_B = 27
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int state_26_subState;
    
    int state_26_active;
    
    IOxfTimeout* state_26_timeout;
    
    int state_25_subState;
    
    int state_25_active;
    
    int state_12_subState;
    
    int state_12_active;
    
    int state_11_subState;
    
    int state_11_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedTapisB : virtual public AOMInstance {
    DECLARE_REACTIVE_META(TapisB, OMAnimatedTapisB)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_9_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_26_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void ENVOISLESRUN_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_25_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void LESRUN_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_12_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void retourB_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void init2_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void DebutB_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Debut_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void choixB_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void BversGriffe_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void BsurC_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void BretourC_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void AvancerB_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void AttenteGriffe_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void ArreterB_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_11_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Rien_B_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Retour_B_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Initialisation_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void init_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Debut_B_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Benne_B_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Avancer_B_apres_griffe_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Avancer_B_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Arreter_B_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool TapisB::rootState_IN() const {
    return true;
}

inline bool TapisB::state_9_IN() const {
    return rootState_subState == state_9;
}

inline bool TapisB::state_26_IN() const {
    return state_9_IN();
}

inline bool TapisB::ENVOISLESRUN_IN() const {
    return state_26_subState == ENVOISLESRUN;
}

inline bool TapisB::state_25_IN() const {
    return state_9_IN();
}

inline bool TapisB::LESRUN_IN() const {
    return state_25_subState == LESRUN;
}

inline bool TapisB::state_12_IN() const {
    return state_9_IN();
}

inline bool TapisB::retourB_IN() const {
    return state_12_subState == retourB;
}

inline bool TapisB::init2_IN() const {
    return state_12_subState == init2;
}

inline bool TapisB::DebutB_IN() const {
    return state_12_subState == DebutB;
}

inline bool TapisB::Debut_IN() const {
    return state_12_subState == Debut;
}

inline bool TapisB::choixB_IN() const {
    return state_12_subState == choixB;
}

inline bool TapisB::BversGriffe_IN() const {
    return state_12_subState == BversGriffe;
}

inline bool TapisB::BsurC_IN() const {
    return state_12_subState == BsurC;
}

inline bool TapisB::BretourC_IN() const {
    return state_12_subState == BretourC;
}

inline bool TapisB::AvancerB_IN() const {
    return state_12_subState == AvancerB;
}

inline bool TapisB::AttenteGriffe_IN() const {
    return state_12_subState == AttenteGriffe;
}

inline bool TapisB::ArreterB_IN() const {
    return state_12_subState == ArreterB;
}

inline bool TapisB::state_11_IN() const {
    return state_9_IN();
}

inline bool TapisB::Rien_B_IN() const {
    return state_11_subState == Rien_B;
}

inline bool TapisB::Retour_B_IN() const {
    return state_11_subState == Retour_B;
}

inline bool TapisB::Initialisation_IN() const {
    return state_11_subState == Initialisation;
}

inline bool TapisB::init_IN() const {
    return state_11_subState == init;
}

inline bool TapisB::Debut_B_IN() const {
    return state_11_subState == Debut_B;
}

inline bool TapisB::Benne_B_IN() const {
    return state_11_subState == Benne_B;
}

inline bool TapisB::Avancer_B_apres_griffe_IN() const {
    return state_11_subState == Avancer_B_apres_griffe;
}

inline bool TapisB::Avancer_B_IN() const {
    return state_11_subState == Avancer_B;
}

inline bool TapisB::Arreter_B_IN() const {
    return state_11_subState == Arreter_B;
}

#endif
/*********************************************************************
	File Path	: CodesGeneres\AnimationConfig\TapisB.h
*********************************************************************/
