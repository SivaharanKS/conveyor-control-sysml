/*********************************************************************
	Rhapsody	: 9.0.2 
	Login		: kumarass
	Component	: CodesGeneres 
	Configuration 	: AnimationConfig
	Model Element	: TapisC
//!	Generated Date	: Thu, 29, Jan 2026  
	File Path	: CodesGeneres\AnimationConfig\TapisC.h
*********************************************************************/

#ifndef TapisC_H
#define TapisC_H

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

//## class TapisC
class TapisC : public OMReactive {
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
        void connectTapisC(TapisC* part);
        
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
        TapisC::p_Commandes_C* getOutBound();
        
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
    friend class OMAnimatedTapisC;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    TapisC(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~TapisC();
    
    ////    Additional operations    ////
    
    //## auto_generated
    fromMaquetteTapis_C* getFromMaquetteTapis() const;
    
    //## auto_generated
    fromMaquetteTapis_C* get_fromMaquetteTapis() const;
    
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
    
    ////    Attributes    ////
    
    bool RunA;		//## attribute RunA
    
    bool RunB;		//## attribute RunB
    
    int choix;		//## attribute choix
    
    ////    Relations and components    ////
    
//#[ ignore
    fromMaquetteTapis_C fromMaquetteTapis;
    
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
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // state_14:
    //## statechart_method
    inline bool state_14_IN() const;
    
    //## statechart_method
    void state_14_entDef();
    
    //## statechart_method
    void state_14_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_14_handleEvent();
    
    // state_15:
    //## statechart_method
    inline bool state_15_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_15_handleEvent();
    
    // From_B:
    //## statechart_method
    inline bool From_B_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus From_B_handleEvent();
    
    // From_A:
    //## statechart_method
    inline bool From_A_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus From_A_handleEvent();
    
    // FinC_FromB:
    //## statechart_method
    inline bool FinC_FromB_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus FinC_FromB_handleEvent();
    
    // FinC_FromA:
    //## statechart_method
    inline bool FinC_FromA_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus FinC_FromA_handleEvent();
    
    // Debut_C:
    //## statechart_method
    inline bool Debut_C_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Debut_C_handleEvent();
    
    // C_to_B:
    //## statechart_method
    inline bool C_to_B_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus C_to_B_handleEvent();
    
    // C_to_A:
    //## statechart_method
    inline bool C_to_A_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus C_to_A_handleEvent();
    
    ////    Framework    ////

protected :

//#[ ignore
    enum TapisC_Enum {
        OMNonState = 0,
        state_14 = 1,
        state_15 = 2,
        From_B = 3,
        From_A = 4,
        FinC_FromB = 5,
        FinC_FromA = 6,
        Debut_C = 7,
        C_to_B = 8,
        C_to_A = 9
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int state_14_subState;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedTapisC : virtual public AOMInstance {
    DECLARE_REACTIVE_META(TapisC, OMAnimatedTapisC)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_14_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_15_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void From_B_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void From_A_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void FinC_FromB_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void FinC_FromA_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Debut_C_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void C_to_B_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void C_to_A_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool TapisC::rootState_IN() const {
    return true;
}

inline bool TapisC::state_14_IN() const {
    return rootState_subState == state_14;
}

inline bool TapisC::state_15_IN() const {
    return state_14_subState == state_15;
}

inline bool TapisC::From_B_IN() const {
    return state_14_subState == From_B;
}

inline bool TapisC::From_A_IN() const {
    return state_14_subState == From_A;
}

inline bool TapisC::FinC_FromB_IN() const {
    return state_14_subState == FinC_FromB;
}

inline bool TapisC::FinC_FromA_IN() const {
    return state_14_subState == FinC_FromA;
}

inline bool TapisC::Debut_C_IN() const {
    return state_14_subState == Debut_C;
}

inline bool TapisC::C_to_B_IN() const {
    return state_14_subState == C_to_B;
}

inline bool TapisC::C_to_A_IN() const {
    return state_14_subState == C_to_A;
}

#endif
/*********************************************************************
	File Path	: CodesGeneres\AnimationConfig\TapisC.h
*********************************************************************/
