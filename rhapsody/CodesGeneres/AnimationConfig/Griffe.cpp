/********************************************************************
	Rhapsody	: 9.0.2 
	Login		: kumarass
	Component	: CodesGeneres 
	Configuration 	: AnimationConfig
	Model Element	: Griffe
//!	Generated Date	: Thu, 29, Jan 2026  
	File Path	: CodesGeneres\AnimationConfig\Griffe.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Griffe.h"
//#[ ignore
#define _DESIGN_Griffe_Griffe_SERIALIZE OM_NO_OP
//#]

//## package _DESIGN

//## class Griffe
//#[ ignore
Griffe::fromMaquetteTapis_C::fromMaquetteTapis_C() : _p_(0) {
}

Griffe::fromMaquetteTapis_C::~fromMaquetteTapis_C() {
}

void Griffe::fromMaquetteTapis_C::connectGriffe(Griffe* part) {
    InBound.setItsDefaultProvidedInterface(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}

Griffe::fromA_C::fromA_C() : _p_(0) {
}

Griffe::fromA_C::~fromA_C() {
}

void Griffe::fromA_C::connectGriffe(Griffe* part) {
    InBound.setItsDefaultProvidedInterface(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}

Griffe::fromB_C::fromB_C() : _p_(0) {
}

Griffe::fromB_C::~fromB_C() {
}

void Griffe::fromB_C::connectGriffe(Griffe* part) {
    InBound.setItsDefaultProvidedInterface(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}

Griffe::p_Commandes_C::p_Commandes_C() : _p_(0) {
    itsVoid_arreterA_ProxyOperationInterface = NULL;
    itsVoid_arreterB_ProxyOperationInterface = NULL;
    itsVoid_arreterC_ProxyOperationInterface = NULL;
    itsVoid_avancerA_ProxyOperationInterface = NULL;
    itsVoid_avancerB_ProxyOperationInterface = NULL;
    itsVoid_avancerC_ProxyOperationInterface = NULL;
    itsVoid_griffeA_ProxyOperationInterface = NULL;
    itsVoid_griffeB_ProxyOperationInterface = NULL;
    itsVoid_reculerA_ProxyOperationInterface = NULL;
    itsVoid_reculerB_ProxyOperationInterface = NULL;
    itsVoid_reculerC_ProxyOperationInterface = NULL;
}

Griffe::p_Commandes_C::~p_Commandes_C() {
    cleanUpRelations();
}

void Griffe::p_Commandes_C::arreterA() {
    
    if (itsVoid_arreterA_ProxyOperationInterface != NULL) {
        itsVoid_arreterA_ProxyOperationInterface->arreterA();
    }
    
}

void Griffe::p_Commandes_C::arreterB() {
    
    if (itsVoid_arreterB_ProxyOperationInterface != NULL) {
        itsVoid_arreterB_ProxyOperationInterface->arreterB();
    }
    
}

void Griffe::p_Commandes_C::arreterC() {
    
    if (itsVoid_arreterC_ProxyOperationInterface != NULL) {
        itsVoid_arreterC_ProxyOperationInterface->arreterC();
    }
    
}

void Griffe::p_Commandes_C::avancerA() {
    
    if (itsVoid_avancerA_ProxyOperationInterface != NULL) {
        itsVoid_avancerA_ProxyOperationInterface->avancerA();
    }
    
}

void Griffe::p_Commandes_C::avancerB() {
    
    if (itsVoid_avancerB_ProxyOperationInterface != NULL) {
        itsVoid_avancerB_ProxyOperationInterface->avancerB();
    }
    
}

void Griffe::p_Commandes_C::avancerC() {
    
    if (itsVoid_avancerC_ProxyOperationInterface != NULL) {
        itsVoid_avancerC_ProxyOperationInterface->avancerC();
    }
    
}

void_arreterA_ProxyOperationInterface* Griffe::p_Commandes_C::getItsVoid_arreterA_ProxyOperationInterface() {
    return this;
}

void_arreterB_ProxyOperationInterface* Griffe::p_Commandes_C::getItsVoid_arreterB_ProxyOperationInterface() {
    return this;
}

void_arreterC_ProxyOperationInterface* Griffe::p_Commandes_C::getItsVoid_arreterC_ProxyOperationInterface() {
    return this;
}

void_avancerA_ProxyOperationInterface* Griffe::p_Commandes_C::getItsVoid_avancerA_ProxyOperationInterface() {
    return this;
}

void_avancerB_ProxyOperationInterface* Griffe::p_Commandes_C::getItsVoid_avancerB_ProxyOperationInterface() {
    return this;
}

void_avancerC_ProxyOperationInterface* Griffe::p_Commandes_C::getItsVoid_avancerC_ProxyOperationInterface() {
    return this;
}

void_griffeA_ProxyOperationInterface* Griffe::p_Commandes_C::getItsVoid_griffeA_ProxyOperationInterface() {
    return this;
}

void_griffeB_ProxyOperationInterface* Griffe::p_Commandes_C::getItsVoid_griffeB_ProxyOperationInterface() {
    return this;
}

void_reculerA_ProxyOperationInterface* Griffe::p_Commandes_C::getItsVoid_reculerA_ProxyOperationInterface() {
    return this;
}

void_reculerB_ProxyOperationInterface* Griffe::p_Commandes_C::getItsVoid_reculerB_ProxyOperationInterface() {
    return this;
}

void_reculerC_ProxyOperationInterface* Griffe::p_Commandes_C::getItsVoid_reculerC_ProxyOperationInterface() {
    return this;
}

Griffe::p_Commandes_C* Griffe::p_Commandes_C::getOutBound() {
    return this;
}

void Griffe::p_Commandes_C::griffeA() {
    
    if (itsVoid_griffeA_ProxyOperationInterface != NULL) {
        itsVoid_griffeA_ProxyOperationInterface->griffeA();
    }
    
}

void Griffe::p_Commandes_C::griffeB() {
    
    if (itsVoid_griffeB_ProxyOperationInterface != NULL) {
        itsVoid_griffeB_ProxyOperationInterface->griffeB();
    }
    
}

void Griffe::p_Commandes_C::reculerA() {
    
    if (itsVoid_reculerA_ProxyOperationInterface != NULL) {
        itsVoid_reculerA_ProxyOperationInterface->reculerA();
    }
    
}

void Griffe::p_Commandes_C::reculerB() {
    
    if (itsVoid_reculerB_ProxyOperationInterface != NULL) {
        itsVoid_reculerB_ProxyOperationInterface->reculerB();
    }
    
}

void Griffe::p_Commandes_C::reculerC() {
    
    if (itsVoid_reculerC_ProxyOperationInterface != NULL) {
        itsVoid_reculerC_ProxyOperationInterface->reculerC();
    }
    
}

void Griffe::p_Commandes_C::setItsVoid_arreterA_ProxyOperationInterface(void_arreterA_ProxyOperationInterface* p_void_arreterA_ProxyOperationInterface) {
    itsVoid_arreterA_ProxyOperationInterface = p_void_arreterA_ProxyOperationInterface;
}

void Griffe::p_Commandes_C::setItsVoid_arreterB_ProxyOperationInterface(void_arreterB_ProxyOperationInterface* p_void_arreterB_ProxyOperationInterface) {
    itsVoid_arreterB_ProxyOperationInterface = p_void_arreterB_ProxyOperationInterface;
}

void Griffe::p_Commandes_C::setItsVoid_arreterC_ProxyOperationInterface(void_arreterC_ProxyOperationInterface* p_void_arreterC_ProxyOperationInterface) {
    itsVoid_arreterC_ProxyOperationInterface = p_void_arreterC_ProxyOperationInterface;
}

void Griffe::p_Commandes_C::setItsVoid_avancerA_ProxyOperationInterface(void_avancerA_ProxyOperationInterface* p_void_avancerA_ProxyOperationInterface) {
    itsVoid_avancerA_ProxyOperationInterface = p_void_avancerA_ProxyOperationInterface;
}

void Griffe::p_Commandes_C::setItsVoid_avancerB_ProxyOperationInterface(void_avancerB_ProxyOperationInterface* p_void_avancerB_ProxyOperationInterface) {
    itsVoid_avancerB_ProxyOperationInterface = p_void_avancerB_ProxyOperationInterface;
}

void Griffe::p_Commandes_C::setItsVoid_avancerC_ProxyOperationInterface(void_avancerC_ProxyOperationInterface* p_void_avancerC_ProxyOperationInterface) {
    itsVoid_avancerC_ProxyOperationInterface = p_void_avancerC_ProxyOperationInterface;
}

void Griffe::p_Commandes_C::setItsVoid_griffeA_ProxyOperationInterface(void_griffeA_ProxyOperationInterface* p_void_griffeA_ProxyOperationInterface) {
    itsVoid_griffeA_ProxyOperationInterface = p_void_griffeA_ProxyOperationInterface;
}

void Griffe::p_Commandes_C::setItsVoid_griffeB_ProxyOperationInterface(void_griffeB_ProxyOperationInterface* p_void_griffeB_ProxyOperationInterface) {
    itsVoid_griffeB_ProxyOperationInterface = p_void_griffeB_ProxyOperationInterface;
}

void Griffe::p_Commandes_C::setItsVoid_reculerA_ProxyOperationInterface(void_reculerA_ProxyOperationInterface* p_void_reculerA_ProxyOperationInterface) {
    itsVoid_reculerA_ProxyOperationInterface = p_void_reculerA_ProxyOperationInterface;
}

void Griffe::p_Commandes_C::setItsVoid_reculerB_ProxyOperationInterface(void_reculerB_ProxyOperationInterface* p_void_reculerB_ProxyOperationInterface) {
    itsVoid_reculerB_ProxyOperationInterface = p_void_reculerB_ProxyOperationInterface;
}

void Griffe::p_Commandes_C::setItsVoid_reculerC_ProxyOperationInterface(void_reculerC_ProxyOperationInterface* p_void_reculerC_ProxyOperationInterface) {
    itsVoid_reculerC_ProxyOperationInterface = p_void_reculerC_ProxyOperationInterface;
}

void Griffe::p_Commandes_C::cleanUpRelations() {
    if(itsVoid_arreterA_ProxyOperationInterface != NULL)
        {
            itsVoid_arreterA_ProxyOperationInterface = NULL;
        }
    if(itsVoid_arreterB_ProxyOperationInterface != NULL)
        {
            itsVoid_arreterB_ProxyOperationInterface = NULL;
        }
    if(itsVoid_arreterC_ProxyOperationInterface != NULL)
        {
            itsVoid_arreterC_ProxyOperationInterface = NULL;
        }
    if(itsVoid_avancerA_ProxyOperationInterface != NULL)
        {
            itsVoid_avancerA_ProxyOperationInterface = NULL;
        }
    if(itsVoid_avancerB_ProxyOperationInterface != NULL)
        {
            itsVoid_avancerB_ProxyOperationInterface = NULL;
        }
    if(itsVoid_avancerC_ProxyOperationInterface != NULL)
        {
            itsVoid_avancerC_ProxyOperationInterface = NULL;
        }
    if(itsVoid_griffeA_ProxyOperationInterface != NULL)
        {
            itsVoid_griffeA_ProxyOperationInterface = NULL;
        }
    if(itsVoid_griffeB_ProxyOperationInterface != NULL)
        {
            itsVoid_griffeB_ProxyOperationInterface = NULL;
        }
    if(itsVoid_reculerA_ProxyOperationInterface != NULL)
        {
            itsVoid_reculerA_ProxyOperationInterface = NULL;
        }
    if(itsVoid_reculerB_ProxyOperationInterface != NULL)
        {
            itsVoid_reculerB_ProxyOperationInterface = NULL;
        }
    if(itsVoid_reculerC_ProxyOperationInterface != NULL)
        {
            itsVoid_reculerC_ProxyOperationInterface = NULL;
        }
}
//#]

Griffe::Griffe(IOxfActive* theActiveContext) : RunA(false), RunB(false), choix(2) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Griffe, Griffe(), 0, _DESIGN_Griffe_Griffe_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

Griffe::~Griffe() {
    NOTIFY_DESTRUCTOR(~Griffe, true);
}

Griffe::fromMaquetteTapis_C* Griffe::getFromMaquetteTapis() const {
    return (Griffe::fromMaquetteTapis_C*) &fromMaquetteTapis;
}

Griffe::fromMaquetteTapis_C* Griffe::get_fromMaquetteTapis() const {
    return (Griffe::fromMaquetteTapis_C*) &fromMaquetteTapis;
}

Griffe::fromA_C* Griffe::getFromA() const {
    return (Griffe::fromA_C*) &fromA;
}

Griffe::fromA_C* Griffe::get_fromA() const {
    return (Griffe::fromA_C*) &fromA;
}

Griffe::fromB_C* Griffe::getFromB() const {
    return (Griffe::fromB_C*) &fromB;
}

Griffe::fromB_C* Griffe::get_fromB() const {
    return (Griffe::fromB_C*) &fromB;
}

Griffe::p_Commandes_C* Griffe::getP_Commandes() const {
    return (Griffe::p_Commandes_C*) &p_Commandes;
}

Griffe::p_Commandes_C* Griffe::get_p_Commandes() const {
    return (Griffe::p_Commandes_C*) &p_Commandes;
}

bool Griffe::getRunA() const {
    return RunA;
}

void Griffe::setRunA(bool p_RunA) {
    RunA = p_RunA;
}

bool Griffe::getRunB() const {
    return RunB;
}

void Griffe::setRunB(bool p_RunB) {
    RunB = p_RunB;
}

int Griffe::getChoix() const {
    return choix;
}

void Griffe::setChoix(int p_choix) {
    choix = p_choix;
}

bool Griffe::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Griffe::initRelations() {
    if (get_fromMaquetteTapis() != NULL) {
        get_fromMaquetteTapis()->connectGriffe(this);
    }
    if (get_fromA() != NULL) {
        get_fromA()->connectGriffe(this);
    }
    if (get_fromB() != NULL) {
        get_fromB()->connectGriffe(this);
    }
}

void Griffe::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    state_25_subState = OMNonState;
    state_25_active = OMNonState;
    state_16_subState = OMNonState;
    state_16_active = OMNonState;
    state_15_subState = OMNonState;
    state_15_active = OMNonState;
}

void Griffe::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("12");
        state_14_entDef();
        NOTIFY_TRANSITION_TERMINATED("12");
    }
}

IOxfReactive::TakeEventStatus Griffe::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State state_14
    if(rootState_active == state_14)
        {
            res = state_14_processEvent();
        }
    return res;
}

void Griffe::state_14_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.state_14");
    rootState_subState = state_14;
    rootState_active = state_14;
    state_15_entDef();
    state_16_entDef();
    state_25_entDef();
}

void Griffe::state_14_exit() {
    state_15_exit();
    state_16_exit();
    state_25_exit();
    
    NOTIFY_STATE_EXITED("ROOT.state_14");
}

IOxfReactive::TakeEventStatus Griffe::state_14TakeevReset() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    NOTIFY_TRANSITION_STARTED("11");
    state_14_exit();
    state_14_entDef();
    NOTIFY_TRANSITION_TERMINATED("11");
    res = eventConsumed;
    return res;
}

IOxfReactive::TakeEventStatus Griffe::state_14_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State state_15
    if(state_15_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(state_14))
                {
                    return res;
                }
        }
    // State state_16
    if(state_16_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(state_14))
                {
                    return res;
                }
        }
    // State state_25
    if(state_25_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(state_14))
                {
                    return res;
                }
        }
    if(res == eventNotConsumed)
        {
            res = state_14_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus Griffe::state_14_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evReset__DESIGN_id))
        {
            res = state_14TakeevReset();
        }
    
    return res;
}

void Griffe::state_25_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.state_14.state_25");
    NOTIFY_TRANSITION_STARTED("23");
    NOTIFY_STATE_ENTERED("ROOT.state_14.state_25.LESRUN");
    state_25_subState = LESRUN;
    state_25_active = LESRUN;
    NOTIFY_TRANSITION_TERMINATED("23");
}

void Griffe::state_25_exit() {
    // State LESRUN
    if(state_25_subState == LESRUN)
        {
            NOTIFY_STATE_EXITED("ROOT.state_14.state_25.LESRUN");
        }
    state_25_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.state_14.state_25");
}

IOxfReactive::TakeEventStatus Griffe::state_25_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State LESRUN
    if(state_25_active == LESRUN)
        {
            res = LESRUN_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus Griffe::LESRUN_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evNONRUNA__DESIGN_id))
        {
            NOTIFY_TRANSITION_STARTED("25");
            NOTIFY_STATE_EXITED("ROOT.state_14.state_25.LESRUN");
            //#[ transition 25 
            RunA=false;
            //#]
            NOTIFY_STATE_ENTERED("ROOT.state_14.state_25.LESRUN");
            state_25_subState = LESRUN;
            state_25_active = LESRUN;
            NOTIFY_TRANSITION_TERMINATED("25");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(evNONRUNB__DESIGN_id))
        {
            NOTIFY_TRANSITION_STARTED("26");
            NOTIFY_STATE_EXITED("ROOT.state_14.state_25.LESRUN");
            //#[ transition 26 
            RunB=false;
            //#]
            NOTIFY_STATE_ENTERED("ROOT.state_14.state_25.LESRUN");
            state_25_subState = LESRUN;
            state_25_active = LESRUN;
            NOTIFY_TRANSITION_TERMINATED("26");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(evRUNA__DESIGN_id))
        {
            NOTIFY_TRANSITION_STARTED("24");
            NOTIFY_STATE_EXITED("ROOT.state_14.state_25.LESRUN");
            //#[ transition 24 
            RunA=true;
            //#]
            NOTIFY_STATE_ENTERED("ROOT.state_14.state_25.LESRUN");
            state_25_subState = LESRUN;
            state_25_active = LESRUN;
            NOTIFY_TRANSITION_TERMINATED("24");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(evRUNB__DESIGN_id))
        {
            NOTIFY_TRANSITION_STARTED("27");
            NOTIFY_STATE_EXITED("ROOT.state_14.state_25.LESRUN");
            //#[ transition 27 
            RunB=true;
            //#]
            NOTIFY_STATE_ENTERED("ROOT.state_14.state_25.LESRUN");
            state_25_subState = LESRUN;
            state_25_active = LESRUN;
            NOTIFY_TRANSITION_TERMINATED("27");
            res = eventConsumed;
        }
    
    
    return res;
}

void Griffe::state_16_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.state_14.state_16");
    NOTIFY_TRANSITION_STARTED("13");
    NOTIFY_STATE_ENTERED("ROOT.state_14.state_16.state_17");
    pushNullTransition();
    state_16_subState = state_17;
    state_16_active = state_17;
    NOTIFY_TRANSITION_TERMINATED("13");
}

void Griffe::state_16_exit() {
    switch (state_16_subState) {
        // State state_17
        case state_17:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_14.state_16.state_17");
        }
        break;
        // State Permission
        case Permission:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_14.state_16.Permission");
        }
        break;
        // State B
        case state_16_B:
        {
            NOTIFY_STATE_EXITED("ROOT.state_14.state_16.B");
        }
        break;
        // State BversA
        case BversA:
        {
            NOTIFY_STATE_EXITED("ROOT.state_14.state_16.BversA");
        }
        break;
        // State AversB
        case AversB:
        {
            NOTIFY_STATE_EXITED("ROOT.state_14.state_16.AversB");
        }
        break;
        // State A
        case state_16_A:
        {
            NOTIFY_STATE_EXITED("ROOT.state_14.state_16.A");
        }
        break;
        // State deAversB
        case deAversB:
        {
            NOTIFY_STATE_EXITED("ROOT.state_14.state_16.deAversB");
        }
        break;
        // State deBversA
        case deBversA:
        {
            NOTIFY_STATE_EXITED("ROOT.state_14.state_16.deBversA");
        }
        break;
        default:
            break;
    }
    state_16_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.state_14.state_16");
}

IOxfReactive::TakeEventStatus Griffe::state_16_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_16_active) {
        // State state_17
        case state_17:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 14 
                    if(choix==2)
                        {
                            NOTIFY_TRANSITION_STARTED("14");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.state_14.state_16.state_17");
                            NOTIFY_STATE_ENTERED("ROOT.state_14.state_16.Permission");
                            pushNullTransition();
                            state_16_subState = Permission;
                            state_16_active = Permission;
                            NOTIFY_TRANSITION_TERMINATED("14");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State Permission
        case Permission:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 15 
                    if(RunB)
                        {
                            NOTIFY_TRANSITION_STARTED("15");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.state_14.state_16.Permission");
                            //#[ transition 15 
                            p_Commandes.griffeB();
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.state_14.state_16.B");
                            state_16_subState = state_16_B;
                            state_16_active = state_16_B;
                            NOTIFY_TRANSITION_TERMINATED("15");
                            res = eventConsumed;
                        }
                    else
                        {
                            //## transition 19 
                            if(RunA )
                                {
                                    NOTIFY_TRANSITION_STARTED("19");
                                    popNullTransition();
                                    NOTIFY_STATE_EXITED("ROOT.state_14.state_16.Permission");
                                    //#[ transition 19 
                                    p_Commandes.griffeA();
                                    //#]
                                    NOTIFY_STATE_ENTERED("ROOT.state_14.state_16.A");
                                    state_16_subState = state_16_A;
                                    state_16_active = state_16_A;
                                    NOTIFY_TRANSITION_TERMINATED("19");
                                    res = eventConsumed;
                                }
                        }
                }
            
            
        }
        break;
        // State B
        case state_16_B:
        {
            if(IS_EVENT_TYPE_OF(FINB__DESIGN_id))
                {
                    NOTIFY_TRANSITION_STARTED("16");
                    NOTIFY_STATE_EXITED("ROOT.state_14.state_16.B");
                    //#[ transition 16 
                    p_Commandes.griffeA();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_14.state_16.BversA");
                    state_16_subState = BversA;
                    state_16_active = BversA;
                    NOTIFY_TRANSITION_TERMINATED("16");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State BversA
        case BversA:
        {
            if(IS_EVENT_TYPE_OF(evDEBC__DESIGN_id))
                {
                    NOTIFY_TRANSITION_STARTED("17");
                    NOTIFY_STATE_EXITED("ROOT.state_14.state_16.BversA");
                    //#[ transition 17 
                    p_Commandes.griffeB();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_14.state_16.AversB");
                    state_16_subState = AversB;
                    state_16_active = AversB;
                    NOTIFY_TRANSITION_TERMINATED("17");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State AversB
        case AversB:
        {
            if(IS_EVENT_TYPE_OF(evDEBB__DESIGN_id))
                {
                    NOTIFY_TRANSITION_STARTED("18");
                    NOTIFY_STATE_EXITED("ROOT.state_14.state_16.AversB");
                    //#[ transition 18 
                    RunB=false;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_14.state_16.Permission");
                    pushNullTransition();
                    state_16_subState = Permission;
                    state_16_active = Permission;
                    NOTIFY_TRANSITION_TERMINATED("18");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State A
        case state_16_A:
        {
            if(IS_EVENT_TYPE_OF(evFINA__DESIGN_id))
                {
                    NOTIFY_TRANSITION_STARTED("20");
                    NOTIFY_STATE_EXITED("ROOT.state_14.state_16.A");
                    //#[ transition 20 
                    p_Commandes.griffeB();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_14.state_16.deAversB");
                    state_16_subState = deAversB;
                    state_16_active = deAversB;
                    NOTIFY_TRANSITION_TERMINATED("20");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State deAversB
        case deAversB:
        {
            if(IS_EVENT_TYPE_OF(evDEBC__DESIGN_id))
                {
                    NOTIFY_TRANSITION_STARTED("21");
                    NOTIFY_STATE_EXITED("ROOT.state_14.state_16.deAversB");
                    //#[ transition 21 
                    p_Commandes.griffeA();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_14.state_16.deBversA");
                    state_16_subState = deBversA;
                    state_16_active = deBversA;
                    NOTIFY_TRANSITION_TERMINATED("21");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State deBversA
        case deBversA:
        {
            if(IS_EVENT_TYPE_OF(evDEBA__DESIGN_id))
                {
                    NOTIFY_TRANSITION_STARTED("22");
                    NOTIFY_STATE_EXITED("ROOT.state_14.state_16.deBversA");
                    //#[ transition 22 
                    RunA=false;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_14.state_16.Permission");
                    pushNullTransition();
                    state_16_subState = Permission;
                    state_16_active = Permission;
                    NOTIFY_TRANSITION_TERMINATED("22");
                    res = eventConsumed;
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

void Griffe::state_15_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.state_14.state_15");
    NOTIFY_TRANSITION_STARTED("4");
    NOTIFY_STATE_ENTERED("ROOT.state_14.state_15.state_30");
    pushNullTransition();
    state_15_subState = state_30;
    state_15_active = state_30;
    NOTIFY_TRANSITION_TERMINATED("4");
}

void Griffe::state_15_exit() {
    switch (state_15_subState) {
        // State versA
        case versA:
        {
            NOTIFY_STATE_EXITED("ROOT.state_14.state_15.versA");
        }
        break;
        // State A
        case A:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_14.state_15.A");
        }
        break;
        // State versB
        case versB:
        {
            NOTIFY_STATE_EXITED("ROOT.state_14.state_15.versB");
        }
        break;
        // State B
        case B:
        {
            NOTIFY_STATE_EXITED("ROOT.state_14.state_15.B");
        }
        break;
        // State retour_A
        case retour_A:
        {
            NOTIFY_STATE_EXITED("ROOT.state_14.state_15.retour_A");
        }
        break;
        // State retour_B
        case retour_B:
        {
            NOTIFY_STATE_EXITED("ROOT.state_14.state_15.retour_B");
        }
        break;
        // State state_30
        case state_30:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_14.state_15.state_30");
        }
        break;
        default:
            break;
    }
    state_15_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.state_14.state_15");
}

IOxfReactive::TakeEventStatus Griffe::state_15_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_15_active) {
        // State versA
        case versA:
        {
            if(IS_EVENT_TYPE_OF(evVERSA__DESIGN_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.state_14.state_15.versA");
                    NOTIFY_STATE_ENTERED("ROOT.state_14.state_15.A");
                    pushNullTransition();
                    state_15_subState = A;
                    state_15_active = A;
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State A
        case A:
        {
            if(IS_EVENT_TYPE_OF(evDEBC__DESIGN_id))
                {
                    NOTIFY_TRANSITION_STARTED("8");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.state_14.state_15.A");
                    //#[ transition 8 
                    p_Commandes.griffeB();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_14.state_15.retour_B");
                    state_15_subState = retour_B;
                    state_15_active = retour_B;
                    NOTIFY_TRANSITION_TERMINATED("8");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evFINA__DESIGN_id))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.state_14.state_15.A");
                    //#[ transition 2 
                    p_Commandes.griffeB();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_14.state_15.versB");
                    state_15_subState = versB;
                    state_15_active = versB;
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State versB
        case versB:
        {
            if(IS_EVENT_TYPE_OF(evVERSB__DESIGN_id))
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    NOTIFY_STATE_EXITED("ROOT.state_14.state_15.versB");
                    NOTIFY_STATE_ENTERED("ROOT.state_14.state_15.B");
                    state_15_subState = B;
                    state_15_active = B;
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State B
        case B:
        {
            if(IS_EVENT_TYPE_OF(evMIA__DESIGN_id))
                {
                    //## transition 0 
                    if(!RunB)
                        {
                            NOTIFY_TRANSITION_STARTED("0");
                            NOTIFY_STATE_EXITED("ROOT.state_14.state_15.B");
                            //#[ transition 0 
                            p_Commandes.griffeA();
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.state_14.state_15.versA");
                            state_15_subState = versA;
                            state_15_active = versA;
                            NOTIFY_TRANSITION_TERMINATED("0");
                            res = eventConsumed;
                        }
                }
            else if(IS_EVENT_TYPE_OF(evDEBC__DESIGN_id))
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    NOTIFY_STATE_EXITED("ROOT.state_14.state_15.B");
                    //#[ transition 5 
                    p_Commandes.griffeA();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_14.state_15.retour_A");
                    state_15_subState = retour_A;
                    state_15_active = retour_A;
                    NOTIFY_TRANSITION_TERMINATED("5");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evFINB__DESIGN_id))
                {
                    NOTIFY_TRANSITION_STARTED("7");
                    NOTIFY_STATE_EXITED("ROOT.state_14.state_15.B");
                    //#[ transition 7 
                    p_Commandes.griffeA();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_14.state_15.versA");
                    state_15_subState = versA;
                    state_15_active = versA;
                    NOTIFY_TRANSITION_TERMINATED("7");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State retour_A
        case retour_A:
        {
            if(IS_EVENT_TYPE_OF(evMIA__DESIGN_id))
                {
                    NOTIFY_TRANSITION_STARTED("6");
                    NOTIFY_STATE_EXITED("ROOT.state_14.state_15.retour_A");
                    NOTIFY_STATE_ENTERED("ROOT.state_14.state_15.A");
                    pushNullTransition();
                    state_15_subState = A;
                    state_15_active = A;
                    NOTIFY_TRANSITION_TERMINATED("6");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State retour_B
        case retour_B:
        {
            if(IS_EVENT_TYPE_OF(evMIB__DESIGN_id))
                {
                    NOTIFY_TRANSITION_STARTED("9");
                    NOTIFY_STATE_EXITED("ROOT.state_14.state_15.retour_B");
                    NOTIFY_STATE_ENTERED("ROOT.state_14.state_15.B");
                    state_15_subState = B;
                    state_15_active = B;
                    NOTIFY_TRANSITION_TERMINATED("9");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State state_30
        case state_30:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 28 
                    if(choix==1)
                        {
                            NOTIFY_TRANSITION_STARTED("28");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.state_14.state_15.state_30");
                            NOTIFY_STATE_ENTERED("ROOT.state_14.state_15.B");
                            state_15_subState = B;
                            state_15_active = B;
                            NOTIFY_TRANSITION_TERMINATED("28");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedGriffe::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("choix", x2String(myReal->choix));
    aomsAttributes->addAttribute("RunB", x2String(myReal->RunB));
    aomsAttributes->addAttribute("RunA", x2String(myReal->RunA));
}

void OMAnimatedGriffe::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    if(myReal->rootState_subState == Griffe::state_14)
        {
            state_14_serializeStates(aomsState);
        }
}

void OMAnimatedGriffe::state_14_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_14");
    state_15_serializeStates(aomsState);
    state_16_serializeStates(aomsState);
    state_25_serializeStates(aomsState);
}

void OMAnimatedGriffe::state_25_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_14.state_25");
    if(myReal->state_25_subState == Griffe::LESRUN)
        {
            LESRUN_serializeStates(aomsState);
        }
}

void OMAnimatedGriffe::LESRUN_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_14.state_25.LESRUN");
}

void OMAnimatedGriffe::state_16_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_14.state_16");
    switch (myReal->state_16_subState) {
        case Griffe::state_17:
        {
            state_17_serializeStates(aomsState);
        }
        break;
        case Griffe::Permission:
        {
            Permission_serializeStates(aomsState);
        }
        break;
        case Griffe::state_16_B:
        {
            state_16_B_serializeStates(aomsState);
        }
        break;
        case Griffe::BversA:
        {
            BversA_serializeStates(aomsState);
        }
        break;
        case Griffe::AversB:
        {
            AversB_serializeStates(aomsState);
        }
        break;
        case Griffe::state_16_A:
        {
            state_16_A_serializeStates(aomsState);
        }
        break;
        case Griffe::deAversB:
        {
            deAversB_serializeStates(aomsState);
        }
        break;
        case Griffe::deBversA:
        {
            deBversA_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedGriffe::state_17_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_14.state_16.state_17");
}

void OMAnimatedGriffe::Permission_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_14.state_16.Permission");
}

void OMAnimatedGriffe::deBversA_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_14.state_16.deBversA");
}

void OMAnimatedGriffe::deAversB_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_14.state_16.deAversB");
}

void OMAnimatedGriffe::BversA_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_14.state_16.BversA");
}

void OMAnimatedGriffe::state_16_B_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_14.state_16.B");
}

void OMAnimatedGriffe::AversB_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_14.state_16.AversB");
}

void OMAnimatedGriffe::state_16_A_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_14.state_16.A");
}

void OMAnimatedGriffe::state_15_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_14.state_15");
    switch (myReal->state_15_subState) {
        case Griffe::versA:
        {
            versA_serializeStates(aomsState);
        }
        break;
        case Griffe::A:
        {
            A_serializeStates(aomsState);
        }
        break;
        case Griffe::versB:
        {
            versB_serializeStates(aomsState);
        }
        break;
        case Griffe::B:
        {
            B_serializeStates(aomsState);
        }
        break;
        case Griffe::retour_A:
        {
            retour_A_serializeStates(aomsState);
        }
        break;
        case Griffe::retour_B:
        {
            retour_B_serializeStates(aomsState);
        }
        break;
        case Griffe::state_30:
        {
            state_30_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedGriffe::versB_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_14.state_15.versB");
}

void OMAnimatedGriffe::versA_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_14.state_15.versA");
}

void OMAnimatedGriffe::state_30_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_14.state_15.state_30");
}

void OMAnimatedGriffe::retour_B_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_14.state_15.retour_B");
}

void OMAnimatedGriffe::retour_A_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_14.state_15.retour_A");
}

void OMAnimatedGriffe::B_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_14.state_15.B");
}

void OMAnimatedGriffe::A_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_14.state_15.A");
}
//#]

IMPLEMENT_REACTIVE_META_P(Griffe, _DESIGN, _DESIGN, false, OMAnimatedGriffe)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: CodesGeneres\AnimationConfig\Griffe.cpp
*********************************************************************/
