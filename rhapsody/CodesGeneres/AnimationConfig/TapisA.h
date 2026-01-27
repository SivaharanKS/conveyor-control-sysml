/*********************************************************************
	Rhapsody	: 9.0.2 
	Login		: kumarass
	Component	: CodesGeneres 
	Configuration 	: AnimationConfig
	Model Element	: TapisA
//!	Generated Date	: Tue, 27, Jan 2026  
	File Path	: CodesGeneres\AnimationConfig\TapisA.h
*********************************************************************/

#ifndef TapisA_H
#define TapisA_H

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

//## class TapisA
class TapisA : public OMReactive {
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
        void connectTapisA(TapisA* part);
        
        ////    Attributes    ////
    
    protected :
    
        int _p_;		//## attribute _p_
    };
    
    //## package _DESIGN
    class toB_C : public OMDefaultReactivePort {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        toB_C();
        
        //## auto_generated
        virtual ~toB_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectTapisA(TapisA* part);
        
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
        void connectTapisA(TapisA* part);
        
        ////    Attributes    ////
    
    protected :
    
        int _p_;		//## attribute _p_
    };
    
    //## package _DESIGN
    class fromB_C : public OMDefaultReactivePort {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        fromB_C();
        
        //## auto_generated
        virtual ~fromB_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectTapisA(TapisA* part);
        
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
        TapisA::p_Commandes_C* getOutBound();
        
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
    friend class OMAnimatedTapisA;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    TapisA(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    virtual ~TapisA();
    
    ////    Operations    ////
    
    //## operation EnvoisRun()
    virtual void EnvoisRun();
    
    ////    Additional operations    ////
    
    //## auto_generated
    fromMaquetteTapis_C* getFromMaquetteTapis() const;
    
    //## auto_generated
    fromMaquetteTapis_C* get_fromMaquetteTapis() const;
    
    //## auto_generated
    toB_C* getToB() const;
    
    //## auto_generated
    toB_C* get_toB() const;
    
    //## auto_generated
    toG_C* getToG() const;
    
    //## auto_generated
    toG_C* get_toG() const;
    
    //## auto_generated
    fromB_C* getFromB() const;
    
    //## auto_generated
    fromB_C* get_fromB() const;
    
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
    
    toB_C toB;
    
    toG_C toG;
    
    fromB_C fromB;
    
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
    
    // state_15:
    //## statechart_method
    inline bool state_15_IN() const;
    
    //## statechart_method
    void state_15_entDef();
    
    //## statechart_method
    void state_15_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_15TakeevReset();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_15_processEvent();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_15_handleEvent();
    
    // state_34:
    //## statechart_method
    inline bool state_34_IN() const;
    
    //## statechart_method
    void state_34_entDef();
    
    //## statechart_method
    void state_34_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_34_processEvent();
    
    // ENVOISLESRUN:
    //## statechart_method
    inline bool ENVOISLESRUN_IN() const;
    
    // state_30:
    //## statechart_method
    inline bool state_30_IN() const;
    
    //## statechart_method
    void state_30_entDef();
    
    //## statechart_method
    void state_30_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_30_processEvent();
    
    // LESRUN:
    //## statechart_method
    inline bool LESRUN_IN() const;
    
    // state_17:
    //## statechart_method
    inline bool state_17_IN() const;
    
    //## statechart_method
    void state_17_entDef();
    
    //## statechart_method
    void state_17_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_17_processEvent();
    
    // init2:
    //## statechart_method
    inline bool init2_IN() const;
    
    // DebutA:
    //## statechart_method
    inline bool DebutA_IN() const;
    
    // Debut:
    //## statechart_method
    inline bool Debut_IN() const;
    
    // choixA:
    //## statechart_method
    inline bool choixA_IN() const;
    
    // AversGriffe:
    //## statechart_method
    inline bool AversGriffe_IN() const;
    
    // AvancerA:
    //## statechart_method
    inline bool AvancerA_IN() const;
    
    // AttenteGriffe:
    //## statechart_method
    inline bool AttenteGriffe_IN() const;
    
    // AsurC:
    //## statechart_method
    inline bool AsurC_IN() const;
    
    // ArreterA:
    //## statechart_method
    inline bool ArreterA_IN() const;
    
    // AretourC:
    //## statechart_method
    inline bool AretourC_IN() const;
    
    // Aretour:
    //## statechart_method
    inline bool Aretour_IN() const;
    
    // state_16:
    //## statechart_method
    inline bool state_16_IN() const;
    
    //## statechart_method
    void state_16_entDef();
    
    //## statechart_method
    void state_16_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_16_processEvent();
    
    // state_18:
    //## statechart_method
    inline bool state_18_IN() const;
    
    // Rien_A:
    //## statechart_method
    inline bool Rien_A_IN() const;
    
    // Retour_A:
    //## statechart_method
    inline bool Retour_A_IN() const;
    
    // initialisation:
    //## statechart_method
    inline bool initialisation_IN() const;
    
    // Debut_A:
    //## statechart_method
    inline bool Debut_A_IN() const;
    
    // Benne_A:
    //## statechart_method
    inline bool Benne_A_IN() const;
    
    // Avancer_A_apres_griffe:
    //## statechart_method
    inline bool Avancer_A_apres_griffe_IN() const;
    
    // Avancer_A:
    //## statechart_method
    inline bool Avancer_A_IN() const;
    
    // Arreter_A:
    //## statechart_method
    inline bool Arreter_A_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum TapisA_Enum {
        OMNonState = 0,
        state_15 = 1,
        state_34 = 2,
        ENVOISLESRUN = 3,
        state_30 = 4,
        LESRUN = 5,
        state_17 = 6,
        init2 = 7,
        DebutA = 8,
        Debut = 9,
        choixA = 10,
        AversGriffe = 11,
        AvancerA = 12,
        AttenteGriffe = 13,
        AsurC = 14,
        ArreterA = 15,
        AretourC = 16,
        Aretour = 17,
        state_16 = 18,
        state_18 = 19,
        Rien_A = 20,
        Retour_A = 21,
        initialisation = 22,
        Debut_A = 23,
        Benne_A = 24,
        Avancer_A_apres_griffe = 25,
        Avancer_A = 26,
        Arreter_A = 27
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int state_34_subState;
    
    int state_34_active;
    
    IOxfTimeout* state_34_timeout;
    
    int state_30_subState;
    
    int state_30_active;
    
    int state_17_subState;
    
    int state_17_active;
    
    int state_16_subState;
    
    int state_16_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedTapisA : virtual public AOMInstance {
    DECLARE_REACTIVE_META(TapisA, OMAnimatedTapisA)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_15_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_34_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void ENVOISLESRUN_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_30_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void LESRUN_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_17_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void init2_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void DebutA_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Debut_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void choixA_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void AversGriffe_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void AvancerA_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void AttenteGriffe_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void AsurC_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void ArreterA_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void AretourC_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Aretour_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_16_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_18_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Rien_A_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Retour_A_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void initialisation_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Debut_A_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Benne_A_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Avancer_A_apres_griffe_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Avancer_A_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Arreter_A_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool TapisA::rootState_IN() const {
    return true;
}

inline bool TapisA::state_15_IN() const {
    return rootState_subState == state_15;
}

inline bool TapisA::state_34_IN() const {
    return state_15_IN();
}

inline bool TapisA::ENVOISLESRUN_IN() const {
    return state_34_subState == ENVOISLESRUN;
}

inline bool TapisA::state_30_IN() const {
    return state_15_IN();
}

inline bool TapisA::LESRUN_IN() const {
    return state_30_subState == LESRUN;
}

inline bool TapisA::state_17_IN() const {
    return state_15_IN();
}

inline bool TapisA::init2_IN() const {
    return state_17_subState == init2;
}

inline bool TapisA::DebutA_IN() const {
    return state_17_subState == DebutA;
}

inline bool TapisA::Debut_IN() const {
    return state_17_subState == Debut;
}

inline bool TapisA::choixA_IN() const {
    return state_17_subState == choixA;
}

inline bool TapisA::AversGriffe_IN() const {
    return state_17_subState == AversGriffe;
}

inline bool TapisA::AvancerA_IN() const {
    return state_17_subState == AvancerA;
}

inline bool TapisA::AttenteGriffe_IN() const {
    return state_17_subState == AttenteGriffe;
}

inline bool TapisA::AsurC_IN() const {
    return state_17_subState == AsurC;
}

inline bool TapisA::ArreterA_IN() const {
    return state_17_subState == ArreterA;
}

inline bool TapisA::AretourC_IN() const {
    return state_17_subState == AretourC;
}

inline bool TapisA::Aretour_IN() const {
    return state_17_subState == Aretour;
}

inline bool TapisA::state_16_IN() const {
    return state_15_IN();
}

inline bool TapisA::state_18_IN() const {
    return state_16_subState == state_18;
}

inline bool TapisA::Rien_A_IN() const {
    return state_16_subState == Rien_A;
}

inline bool TapisA::Retour_A_IN() const {
    return state_16_subState == Retour_A;
}

inline bool TapisA::initialisation_IN() const {
    return state_16_subState == initialisation;
}

inline bool TapisA::Debut_A_IN() const {
    return state_16_subState == Debut_A;
}

inline bool TapisA::Benne_A_IN() const {
    return state_16_subState == Benne_A;
}

inline bool TapisA::Avancer_A_apres_griffe_IN() const {
    return state_16_subState == Avancer_A_apres_griffe;
}

inline bool TapisA::Avancer_A_IN() const {
    return state_16_subState == Avancer_A;
}

inline bool TapisA::Arreter_A_IN() const {
    return state_16_subState == Arreter_A;
}

#endif
/*********************************************************************
	File Path	: CodesGeneres\AnimationConfig\TapisA.h
*********************************************************************/
