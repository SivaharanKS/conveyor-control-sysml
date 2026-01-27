/*********************************************************************
	Rhapsody	: 9.0.2 
	Login		: kumarass
	Component	: CodesGeneres 
	Configuration 	: AnimationConfig
	Model Element	: Griffe
//!	Generated Date	: Tue, 27, Jan 2026  
	File Path	: CodesGeneres\AnimationConfig\Griffe.h
*********************************************************************/

#ifndef Griffe_H
#define Griffe_H

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

//## class Griffe
class Griffe : public OMReactive {
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
        void connectGriffe(Griffe* part);
        
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
        void connectGriffe(Griffe* part);
        
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
        void connectGriffe(Griffe* part);
        
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
        Griffe::p_Commandes_C* getOutBound();
        
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
    friend class OMAnimatedGriffe;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Griffe(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Griffe();
    
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
    
    ////    Attributes    ////
    
    bool RunA;		//## attribute RunA
    
    bool RunB;		//## attribute RunB
    
    int choix;		//## attribute choix
    
    ////    Relations and components    ////
    
//#[ ignore
    fromMaquetteTapis_C fromMaquetteTapis;
    
    fromA_C fromA;
    
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
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // state_14:
    //## statechart_method
    inline bool state_14_IN() const;
    
    //## statechart_method
    void state_14_entDef();
    
    //## statechart_method
    void state_14_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_14TakeevReset();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_14_processEvent();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_14_handleEvent();
    
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
    
    //## statechart_method
    IOxfReactive::TakeEventStatus LESRUN_handleEvent();
    
    // state_16:
    //## statechart_method
    inline bool state_16_IN() const;
    
    //## statechart_method
    void state_16_entDef();
    
    //## statechart_method
    void state_16_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_16_processEvent();
    
    // state_17:
    //## statechart_method
    inline bool state_17_IN() const;
    
    // Permission:
    //## statechart_method
    inline bool Permission_IN() const;
    
    // deBversA:
    //## statechart_method
    inline bool deBversA_IN() const;
    
    // deAversB:
    //## statechart_method
    inline bool deAversB_IN() const;
    
    // BversA:
    //## statechart_method
    inline bool BversA_IN() const;
    
    // state_16_B:
    //## statechart_method
    inline bool state_16_B_IN() const;
    
    // AversB:
    //## statechart_method
    inline bool AversB_IN() const;
    
    // state_16_A:
    //## statechart_method
    inline bool state_16_A_IN() const;
    
    // state_15:
    //## statechart_method
    inline bool state_15_IN() const;
    
    //## statechart_method
    void state_15_entDef();
    
    //## statechart_method
    void state_15_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_15_processEvent();
    
    // versB:
    //## statechart_method
    inline bool versB_IN() const;
    
    // versA:
    //## statechart_method
    inline bool versA_IN() const;
    
    // state_30:
    //## statechart_method
    inline bool state_30_IN() const;
    
    // retour_B:
    //## statechart_method
    inline bool retour_B_IN() const;
    
    // retour_A:
    //## statechart_method
    inline bool retour_A_IN() const;
    
    // B:
    //## statechart_method
    inline bool B_IN() const;
    
    // A:
    //## statechart_method
    inline bool A_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Griffe_Enum {
        OMNonState = 0,
        state_14 = 1,
        state_25 = 2,
        LESRUN = 3,
        state_16 = 4,
        state_17 = 5,
        Permission = 6,
        deBversA = 7,
        deAversB = 8,
        BversA = 9,
        state_16_B = 10,
        AversB = 11,
        state_16_A = 12,
        state_15 = 13,
        versB = 14,
        versA = 15,
        state_30 = 16,
        retour_B = 17,
        retour_A = 18,
        B = 19,
        A = 20
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int state_25_subState;
    
    int state_25_active;
    
    int state_16_subState;
    
    int state_16_active;
    
    int state_15_subState;
    
    int state_15_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedGriffe : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Griffe, OMAnimatedGriffe)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_14_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_25_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void LESRUN_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_16_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_17_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Permission_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void deBversA_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void deAversB_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void BversA_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_16_B_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void AversB_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_16_A_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_15_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void versB_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void versA_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_30_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void retour_B_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void retour_A_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void B_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void A_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool Griffe::rootState_IN() const {
    return true;
}

inline bool Griffe::state_14_IN() const {
    return rootState_subState == state_14;
}

inline bool Griffe::state_25_IN() const {
    return state_14_IN();
}

inline bool Griffe::LESRUN_IN() const {
    return state_25_subState == LESRUN;
}

inline bool Griffe::state_16_IN() const {
    return state_14_IN();
}

inline bool Griffe::state_17_IN() const {
    return state_16_subState == state_17;
}

inline bool Griffe::Permission_IN() const {
    return state_16_subState == Permission;
}

inline bool Griffe::deBversA_IN() const {
    return state_16_subState == deBversA;
}

inline bool Griffe::deAversB_IN() const {
    return state_16_subState == deAversB;
}

inline bool Griffe::BversA_IN() const {
    return state_16_subState == BversA;
}

inline bool Griffe::state_16_B_IN() const {
    return state_16_subState == state_16_B;
}

inline bool Griffe::AversB_IN() const {
    return state_16_subState == AversB;
}

inline bool Griffe::state_16_A_IN() const {
    return state_16_subState == state_16_A;
}

inline bool Griffe::state_15_IN() const {
    return state_14_IN();
}

inline bool Griffe::versB_IN() const {
    return state_15_subState == versB;
}

inline bool Griffe::versA_IN() const {
    return state_15_subState == versA;
}

inline bool Griffe::state_30_IN() const {
    return state_15_subState == state_30;
}

inline bool Griffe::retour_B_IN() const {
    return state_15_subState == retour_B;
}

inline bool Griffe::retour_A_IN() const {
    return state_15_subState == retour_A;
}

inline bool Griffe::B_IN() const {
    return state_15_subState == B;
}

inline bool Griffe::A_IN() const {
    return state_15_subState == A;
}

#endif
/*********************************************************************
	File Path	: CodesGeneres\AnimationConfig\Griffe.h
*********************************************************************/
