/********************************************************************
	Rhapsody	: 9.0.2 
	Login		: kumarass
	Component	: CodesGeneres 
	Configuration 	: AnimationConfig
	Model Element	: TapisB
//!	Generated Date	: Tue, 27, Jan 2026  
	File Path	: CodesGeneres\AnimationConfig\TapisB.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "TapisB.h"
//#[ ignore
#define _DESIGN_TapisB_TapisB_SERIALIZE OM_NO_OP

#define _DESIGN_TapisB_EnvoisRun_SERIALIZE OM_NO_OP
//#]

//## package _DESIGN

//## class TapisB
//#[ ignore
TapisB::fromMaquetteTapis_C::fromMaquetteTapis_C() : _p_(0) {
}

TapisB::fromMaquetteTapis_C::~fromMaquetteTapis_C() {
}

void TapisB::fromMaquetteTapis_C::connectTapisB(TapisB* part) {
    InBound.setItsDefaultProvidedInterface(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}

TapisB::fromA_C::fromA_C() : _p_(0) {
}

TapisB::fromA_C::~fromA_C() {
}

void TapisB::fromA_C::connectTapisB(TapisB* part) {
    InBound.setItsDefaultProvidedInterface(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}

TapisB::toG_C::toG_C() : _p_(0) {
}

TapisB::toG_C::~toG_C() {
}

void TapisB::toG_C::connectTapisB(TapisB* part) {
    InBound.setItsDefaultProvidedInterface(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}

TapisB::toA_C::toA_C() : _p_(0) {
}

TapisB::toA_C::~toA_C() {
}

void TapisB::toA_C::connectTapisB(TapisB* part) {
    InBound.setItsDefaultProvidedInterface(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}

TapisB::p_Commandes_C::p_Commandes_C() : _p_(0) {
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

TapisB::p_Commandes_C::~p_Commandes_C() {
    cleanUpRelations();
}

void TapisB::p_Commandes_C::arreterA() {
    
    if (itsVoid_arreterA_ProxyOperationInterface != NULL) {
        itsVoid_arreterA_ProxyOperationInterface->arreterA();
    }
    
}

void TapisB::p_Commandes_C::arreterB() {
    
    if (itsVoid_arreterB_ProxyOperationInterface != NULL) {
        itsVoid_arreterB_ProxyOperationInterface->arreterB();
    }
    
}

void TapisB::p_Commandes_C::arreterC() {
    
    if (itsVoid_arreterC_ProxyOperationInterface != NULL) {
        itsVoid_arreterC_ProxyOperationInterface->arreterC();
    }
    
}

void TapisB::p_Commandes_C::avancerA() {
    
    if (itsVoid_avancerA_ProxyOperationInterface != NULL) {
        itsVoid_avancerA_ProxyOperationInterface->avancerA();
    }
    
}

void TapisB::p_Commandes_C::avancerB() {
    
    if (itsVoid_avancerB_ProxyOperationInterface != NULL) {
        itsVoid_avancerB_ProxyOperationInterface->avancerB();
    }
    
}

void TapisB::p_Commandes_C::avancerC() {
    
    if (itsVoid_avancerC_ProxyOperationInterface != NULL) {
        itsVoid_avancerC_ProxyOperationInterface->avancerC();
    }
    
}

void_arreterA_ProxyOperationInterface* TapisB::p_Commandes_C::getItsVoid_arreterA_ProxyOperationInterface() {
    return this;
}

void_arreterB_ProxyOperationInterface* TapisB::p_Commandes_C::getItsVoid_arreterB_ProxyOperationInterface() {
    return this;
}

void_arreterC_ProxyOperationInterface* TapisB::p_Commandes_C::getItsVoid_arreterC_ProxyOperationInterface() {
    return this;
}

void_avancerA_ProxyOperationInterface* TapisB::p_Commandes_C::getItsVoid_avancerA_ProxyOperationInterface() {
    return this;
}

void_avancerB_ProxyOperationInterface* TapisB::p_Commandes_C::getItsVoid_avancerB_ProxyOperationInterface() {
    return this;
}

void_avancerC_ProxyOperationInterface* TapisB::p_Commandes_C::getItsVoid_avancerC_ProxyOperationInterface() {
    return this;
}

void_griffeA_ProxyOperationInterface* TapisB::p_Commandes_C::getItsVoid_griffeA_ProxyOperationInterface() {
    return this;
}

void_griffeB_ProxyOperationInterface* TapisB::p_Commandes_C::getItsVoid_griffeB_ProxyOperationInterface() {
    return this;
}

void_reculerA_ProxyOperationInterface* TapisB::p_Commandes_C::getItsVoid_reculerA_ProxyOperationInterface() {
    return this;
}

void_reculerB_ProxyOperationInterface* TapisB::p_Commandes_C::getItsVoid_reculerB_ProxyOperationInterface() {
    return this;
}

void_reculerC_ProxyOperationInterface* TapisB::p_Commandes_C::getItsVoid_reculerC_ProxyOperationInterface() {
    return this;
}

TapisB::p_Commandes_C* TapisB::p_Commandes_C::getOutBound() {
    return this;
}

void TapisB::p_Commandes_C::griffeA() {
    
    if (itsVoid_griffeA_ProxyOperationInterface != NULL) {
        itsVoid_griffeA_ProxyOperationInterface->griffeA();
    }
    
}

void TapisB::p_Commandes_C::griffeB() {
    
    if (itsVoid_griffeB_ProxyOperationInterface != NULL) {
        itsVoid_griffeB_ProxyOperationInterface->griffeB();
    }
    
}

void TapisB::p_Commandes_C::reculerA() {
    
    if (itsVoid_reculerA_ProxyOperationInterface != NULL) {
        itsVoid_reculerA_ProxyOperationInterface->reculerA();
    }
    
}

void TapisB::p_Commandes_C::reculerB() {
    
    if (itsVoid_reculerB_ProxyOperationInterface != NULL) {
        itsVoid_reculerB_ProxyOperationInterface->reculerB();
    }
    
}

void TapisB::p_Commandes_C::reculerC() {
    
    if (itsVoid_reculerC_ProxyOperationInterface != NULL) {
        itsVoid_reculerC_ProxyOperationInterface->reculerC();
    }
    
}

void TapisB::p_Commandes_C::setItsVoid_arreterA_ProxyOperationInterface(void_arreterA_ProxyOperationInterface* p_void_arreterA_ProxyOperationInterface) {
    itsVoid_arreterA_ProxyOperationInterface = p_void_arreterA_ProxyOperationInterface;
}

void TapisB::p_Commandes_C::setItsVoid_arreterB_ProxyOperationInterface(void_arreterB_ProxyOperationInterface* p_void_arreterB_ProxyOperationInterface) {
    itsVoid_arreterB_ProxyOperationInterface = p_void_arreterB_ProxyOperationInterface;
}

void TapisB::p_Commandes_C::setItsVoid_arreterC_ProxyOperationInterface(void_arreterC_ProxyOperationInterface* p_void_arreterC_ProxyOperationInterface) {
    itsVoid_arreterC_ProxyOperationInterface = p_void_arreterC_ProxyOperationInterface;
}

void TapisB::p_Commandes_C::setItsVoid_avancerA_ProxyOperationInterface(void_avancerA_ProxyOperationInterface* p_void_avancerA_ProxyOperationInterface) {
    itsVoid_avancerA_ProxyOperationInterface = p_void_avancerA_ProxyOperationInterface;
}

void TapisB::p_Commandes_C::setItsVoid_avancerB_ProxyOperationInterface(void_avancerB_ProxyOperationInterface* p_void_avancerB_ProxyOperationInterface) {
    itsVoid_avancerB_ProxyOperationInterface = p_void_avancerB_ProxyOperationInterface;
}

void TapisB::p_Commandes_C::setItsVoid_avancerC_ProxyOperationInterface(void_avancerC_ProxyOperationInterface* p_void_avancerC_ProxyOperationInterface) {
    itsVoid_avancerC_ProxyOperationInterface = p_void_avancerC_ProxyOperationInterface;
}

void TapisB::p_Commandes_C::setItsVoid_griffeA_ProxyOperationInterface(void_griffeA_ProxyOperationInterface* p_void_griffeA_ProxyOperationInterface) {
    itsVoid_griffeA_ProxyOperationInterface = p_void_griffeA_ProxyOperationInterface;
}

void TapisB::p_Commandes_C::setItsVoid_griffeB_ProxyOperationInterface(void_griffeB_ProxyOperationInterface* p_void_griffeB_ProxyOperationInterface) {
    itsVoid_griffeB_ProxyOperationInterface = p_void_griffeB_ProxyOperationInterface;
}

void TapisB::p_Commandes_C::setItsVoid_reculerA_ProxyOperationInterface(void_reculerA_ProxyOperationInterface* p_void_reculerA_ProxyOperationInterface) {
    itsVoid_reculerA_ProxyOperationInterface = p_void_reculerA_ProxyOperationInterface;
}

void TapisB::p_Commandes_C::setItsVoid_reculerB_ProxyOperationInterface(void_reculerB_ProxyOperationInterface* p_void_reculerB_ProxyOperationInterface) {
    itsVoid_reculerB_ProxyOperationInterface = p_void_reculerB_ProxyOperationInterface;
}

void TapisB::p_Commandes_C::setItsVoid_reculerC_ProxyOperationInterface(void_reculerC_ProxyOperationInterface* p_void_reculerC_ProxyOperationInterface) {
    itsVoid_reculerC_ProxyOperationInterface = p_void_reculerC_ProxyOperationInterface;
}

void TapisB::p_Commandes_C::cleanUpRelations() {
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

TapisB::TapisB(IOxfActive* theActiveContext) : RunA(false), RunB(false), choix(2) {
    NOTIFY_REACTIVE_CONSTRUCTOR(TapisB, TapisB(), 0, _DESIGN_TapisB_TapisB_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

TapisB::~TapisB() {
    NOTIFY_DESTRUCTOR(~TapisB, true);
    cancelTimeouts();
}

void TapisB::EnvoisRun() {
    NOTIFY_OPERATION(EnvoisRun, EnvoisRun(), 0, _DESIGN_TapisB_EnvoisRun_SERIALIZE);
    //#[ operation EnvoisRun()
    
    
    if(RunB){
    OUT_PORT(toG)->GEN(evRUNB);
    OUT_PORT(toA)->GEN(evRUNB);
    }
    
    if(!RunB){
    OUT_PORT(toG)->GEN(evNONRUNB);
    OUT_PORT(toA)->GEN(evNONRUNB);
    }
    //#]
}

TapisB::fromMaquetteTapis_C* TapisB::getFromMaquetteTapis() const {
    return (TapisB::fromMaquetteTapis_C*) &fromMaquetteTapis;
}

TapisB::fromMaquetteTapis_C* TapisB::get_fromMaquetteTapis() const {
    return (TapisB::fromMaquetteTapis_C*) &fromMaquetteTapis;
}

TapisB::fromA_C* TapisB::getFromA() const {
    return (TapisB::fromA_C*) &fromA;
}

TapisB::fromA_C* TapisB::get_fromA() const {
    return (TapisB::fromA_C*) &fromA;
}

TapisB::toG_C* TapisB::getToG() const {
    return (TapisB::toG_C*) &toG;
}

TapisB::toG_C* TapisB::get_toG() const {
    return (TapisB::toG_C*) &toG;
}

TapisB::toA_C* TapisB::getToA() const {
    return (TapisB::toA_C*) &toA;
}

TapisB::toA_C* TapisB::get_toA() const {
    return (TapisB::toA_C*) &toA;
}

TapisB::p_Commandes_C* TapisB::getP_Commandes() const {
    return (TapisB::p_Commandes_C*) &p_Commandes;
}

TapisB::p_Commandes_C* TapisB::get_p_Commandes() const {
    return (TapisB::p_Commandes_C*) &p_Commandes;
}

bool TapisB::getRunA() const {
    return RunA;
}

void TapisB::setRunA(bool p_RunA) {
    RunA = p_RunA;
}

bool TapisB::getRunB() const {
    return RunB;
}

void TapisB::setRunB(bool p_RunB) {
    RunB = p_RunB;
}

int TapisB::getChoix() const {
    return choix;
}

void TapisB::setChoix(int p_choix) {
    choix = p_choix;
}

bool TapisB::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void TapisB::initRelations() {
    if (get_fromMaquetteTapis() != NULL) {
        get_fromMaquetteTapis()->connectTapisB(this);
    }
    if (get_fromA() != NULL) {
        get_fromA()->connectTapisB(this);
    }
    if (get_toG() != NULL) {
        get_toG()->connectTapisB(this);
    }
    if (get_toA() != NULL) {
        get_toA()->connectTapisB(this);
    }
}

void TapisB::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    state_26_subState = OMNonState;
    state_26_active = OMNonState;
    state_26_timeout = NULL;
    state_25_subState = OMNonState;
    state_25_active = OMNonState;
    state_12_subState = OMNonState;
    state_12_active = OMNonState;
    state_11_subState = OMNonState;
    state_11_active = OMNonState;
}

void TapisB::cancelTimeouts() {
    cancel(state_26_timeout);
}

bool TapisB::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(state_26_timeout == arg)
        {
            state_26_timeout = NULL;
            res = true;
        }
    return res;
}

void TapisB::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        rootStateEntDef();
    }
}

void TapisB::rootStateEntDef() {
    NOTIFY_TRANSITION_STARTED("12");
    state_9_entDef();
    NOTIFY_TRANSITION_TERMINATED("12");
}

IOxfReactive::TakeEventStatus TapisB::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State state_9
    if(rootState_active == state_9)
        {
            res = state_9_processEvent();
        }
    return res;
}

void TapisB::state_9_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.state_9");
    rootState_subState = state_9;
    rootState_active = state_9;
    state_11_entDef();
    state_12_entDef();
    state_25_entDef();
    state_26_entDef();
}

void TapisB::state_9_exit() {
    state_11_exit();
    state_12_exit();
    state_25_exit();
    state_26_exit();
    
    NOTIFY_STATE_EXITED("ROOT.state_9");
}

IOxfReactive::TakeEventStatus TapisB::state_9TakeevReset() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    NOTIFY_TRANSITION_STARTED("8");
    state_9_exit();
    state_9_entDef();
    NOTIFY_TRANSITION_TERMINATED("8");
    res = eventConsumed;
    return res;
}

IOxfReactive::TakeEventStatus TapisB::state_9_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State state_11
    if(state_11_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(state_9))
                {
                    return res;
                }
        }
    // State state_12
    if(state_12_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(state_9))
                {
                    return res;
                }
        }
    // State state_25
    if(state_25_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(state_9))
                {
                    return res;
                }
        }
    // State state_26
    if(state_26_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(state_9))
                {
                    return res;
                }
        }
    if(res == eventNotConsumed)
        {
            res = state_9_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus TapisB::state_9_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evReset__DESIGN_id))
        {
            res = state_9TakeevReset();
        }
    
    return res;
}

void TapisB::state_26_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.state_9.state_26");
    NOTIFY_TRANSITION_STARTED("28");
    NOTIFY_STATE_ENTERED("ROOT.state_9.state_26.ENVOISLESRUN");
    state_26_subState = ENVOISLESRUN;
    state_26_active = ENVOISLESRUN;
    state_26_timeout = scheduleTimeout(500, "ROOT.state_9.state_26.ENVOISLESRUN");
    NOTIFY_TRANSITION_TERMINATED("28");
}

void TapisB::state_26_exit() {
    // State ENVOISLESRUN
    if(state_26_subState == ENVOISLESRUN)
        {
            cancel(state_26_timeout);
            NOTIFY_STATE_EXITED("ROOT.state_9.state_26.ENVOISLESRUN");
        }
    state_26_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.state_9.state_26");
}

IOxfReactive::TakeEventStatus TapisB::state_26_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State ENVOISLESRUN
    if(state_26_active == ENVOISLESRUN)
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == state_26_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("29");
                            cancel(state_26_timeout);
                            NOTIFY_STATE_EXITED("ROOT.state_9.state_26.ENVOISLESRUN");
                            //#[ transition 29 
                            EnvoisRun();
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.state_9.state_26.ENVOISLESRUN");
                            state_26_subState = ENVOISLESRUN;
                            state_26_active = ENVOISLESRUN;
                            state_26_timeout = scheduleTimeout(500, "ROOT.state_9.state_26.ENVOISLESRUN");
                            NOTIFY_TRANSITION_TERMINATED("29");
                            res = eventConsumed;
                        }
                }
            
            
        }
    return res;
}

void TapisB::state_25_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.state_9.state_25");
    NOTIFY_TRANSITION_STARTED("27");
    NOTIFY_STATE_ENTERED("ROOT.state_9.state_25.LESRUN");
    state_25_subState = LESRUN;
    state_25_active = LESRUN;
    NOTIFY_TRANSITION_TERMINATED("27");
}

void TapisB::state_25_exit() {
    // State LESRUN
    if(state_25_subState == LESRUN)
        {
            NOTIFY_STATE_EXITED("ROOT.state_9.state_25.LESRUN");
        }
    state_25_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.state_9.state_25");
}

IOxfReactive::TakeEventStatus TapisB::state_25_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State LESRUN
    if(state_25_active == LESRUN)
        {
            if(IS_EVENT_TYPE_OF(evNONRUNA__DESIGN_id))
                {
                    NOTIFY_TRANSITION_STARTED("26");
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_25.LESRUN");
                    //#[ transition 26 
                    RunA=false;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_9.state_25.LESRUN");
                    state_25_subState = LESRUN;
                    state_25_active = LESRUN;
                    NOTIFY_TRANSITION_TERMINATED("26");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evRUNA__DESIGN_id))
                {
                    NOTIFY_TRANSITION_STARTED("25");
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_25.LESRUN");
                    //#[ transition 25 
                    RunA=true;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_9.state_25.LESRUN");
                    state_25_subState = LESRUN;
                    state_25_active = LESRUN;
                    NOTIFY_TRANSITION_TERMINATED("25");
                    res = eventConsumed;
                }
            
            
        }
    return res;
}

void TapisB::state_12_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.state_9.state_12");
    NOTIFY_TRANSITION_STARTED("14");
    NOTIFY_STATE_ENTERED("ROOT.state_9.state_12.Debut");
    pushNullTransition();
    state_12_subState = Debut;
    state_12_active = Debut;
    NOTIFY_TRANSITION_TERMINATED("14");
}

void TapisB::state_12_exit() {
    switch (state_12_subState) {
        // State Debut
        case Debut:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_9.state_12.Debut");
        }
        break;
        // State init2
        case init2:
        {
            NOTIFY_STATE_EXITED("ROOT.state_9.state_12.init2");
        }
        break;
        // State DebutB
        case DebutB:
        {
            NOTIFY_STATE_EXITED("ROOT.state_9.state_12.DebutB");
        }
        break;
        // State AvancerB
        case AvancerB:
        {
            NOTIFY_STATE_EXITED("ROOT.state_9.state_12.AvancerB");
        }
        break;
        // State ArreterB
        case ArreterB:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_9.state_12.ArreterB");
        }
        break;
        // State choixB
        case choixB:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_9.state_12.choixB");
        }
        break;
        // State AttenteGriffe
        case AttenteGriffe:
        {
            NOTIFY_STATE_EXITED("ROOT.state_9.state_12.AttenteGriffe");
        }
        break;
        // State BversGriffe
        case BversGriffe:
        {
            NOTIFY_STATE_EXITED("ROOT.state_9.state_12.BversGriffe");
        }
        break;
        // State BsurC
        case BsurC:
        {
            NOTIFY_STATE_EXITED("ROOT.state_9.state_12.BsurC");
        }
        break;
        // State BretourC
        case BretourC:
        {
            NOTIFY_STATE_EXITED("ROOT.state_9.state_12.BretourC");
        }
        break;
        // State retourB
        case retourB:
        {
            NOTIFY_STATE_EXITED("ROOT.state_9.state_12.retourB");
        }
        break;
        default:
            break;
    }
    state_12_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.state_9.state_12");
}

IOxfReactive::TakeEventStatus TapisB::state_12_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_12_active) {
        // State Debut
        case Debut:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 13 
                    if(choix==2)
                        {
                            NOTIFY_TRANSITION_STARTED("13");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.state_9.state_12.Debut");
                            //#[ transition 13 
                            RunB = false;
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.state_9.state_12.init2");
                            state_12_subState = init2;
                            state_12_active = init2;
                            NOTIFY_TRANSITION_TERMINATED("13");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State init2
        case init2:
        {
            if(IS_EVENT_TYPE_OF(evDCB__DESIGN_id))
                {
                    NOTIFY_TRANSITION_STARTED("15");
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_12.init2");
                    NOTIFY_STATE_ENTERED("ROOT.state_9.state_12.DebutB");
                    state_12_subState = DebutB;
                    state_12_active = DebutB;
                    NOTIFY_TRANSITION_TERMINATED("15");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State DebutB
        case DebutB:
        {
            if(IS_EVENT_TYPE_OF(evDEBB__DESIGN_id))
                {
                    NOTIFY_TRANSITION_STARTED("16");
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_12.DebutB");
                    //#[ transition 16 
                    p_Commandes.avancerB();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_9.state_12.AvancerB");
                    state_12_subState = AvancerB;
                    state_12_active = AvancerB;
                    NOTIFY_TRANSITION_TERMINATED("16");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State AvancerB
        case AvancerB:
        {
            if(IS_EVENT_TYPE_OF(evMIB__DESIGN_id))
                {
                    NOTIFY_TRANSITION_STARTED("17");
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_12.AvancerB");
                    //#[ transition 17 
                    p_Commandes.arreterB();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_9.state_12.ArreterB");
                    pushNullTransition();
                    state_12_subState = ArreterB;
                    state_12_active = ArreterB;
                    NOTIFY_TRANSITION_TERMINATED("17");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State ArreterB
        case ArreterB:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 18 
                    if(!RunA)
                        {
                            NOTIFY_TRANSITION_STARTED("18");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.state_9.state_12.ArreterB");
                            NOTIFY_STATE_ENTERED("ROOT.state_9.state_12.choixB");
                            pushNullTransition();
                            state_12_subState = choixB;
                            state_12_active = choixB;
                            //#[ state state_9.state_12.choixB.(Entry) 
                            RunB=true;
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("18");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State choixB
        case choixB:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 19 
                    if(RunB==true)
                        {
                            NOTIFY_TRANSITION_STARTED("19");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.state_9.state_12.choixB");
                            NOTIFY_STATE_ENTERED("ROOT.state_9.state_12.AttenteGriffe");
                            state_12_subState = AttenteGriffe;
                            state_12_active = AttenteGriffe;
                            NOTIFY_TRANSITION_TERMINATED("19");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State AttenteGriffe
        case AttenteGriffe:
        {
            if(IS_EVENT_TYPE_OF(evVERSB__DESIGN_id))
                {
                    NOTIFY_TRANSITION_STARTED("20");
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_12.AttenteGriffe");
                    //#[ transition 20 
                    p_Commandes.avancerB();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_9.state_12.BversGriffe");
                    state_12_subState = BversGriffe;
                    state_12_active = BversGriffe;
                    NOTIFY_TRANSITION_TERMINATED("20");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State BversGriffe
        case BversGriffe:
        {
            if(IS_EVENT_TYPE_OF(evFINB__DESIGN_id))
                {
                    NOTIFY_TRANSITION_STARTED("21");
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_12.BversGriffe");
                    //#[ transition 21 
                    p_Commandes.arreterB();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_9.state_12.BsurC");
                    state_12_subState = BsurC;
                    state_12_active = BsurC;
                    NOTIFY_TRANSITION_TERMINATED("21");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State BsurC
        case BsurC:
        {
            if(IS_EVENT_TYPE_OF(evFINC__DESIGN_id))
                {
                    NOTIFY_TRANSITION_STARTED("22");
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_12.BsurC");
                    NOTIFY_STATE_ENTERED("ROOT.state_9.state_12.BretourC");
                    state_12_subState = BretourC;
                    state_12_active = BretourC;
                    NOTIFY_TRANSITION_TERMINATED("22");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State BretourC
        case BretourC:
        {
            if(IS_EVENT_TYPE_OF(evVERSB__DESIGN_id))
                {
                    NOTIFY_TRANSITION_STARTED("23");
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_12.BretourC");
                    //#[ transition 23 
                    p_Commandes.reculerB();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_9.state_12.retourB");
                    state_12_subState = retourB;
                    state_12_active = retourB;
                    NOTIFY_TRANSITION_TERMINATED("23");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State retourB
        case retourB:
        {
            if(IS_EVENT_TYPE_OF(evDEBB__DESIGN_id))
                {
                    NOTIFY_TRANSITION_STARTED("24");
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_12.retourB");
                    //#[ transition 24 
                    p_Commandes.arreterB();
                    RunB = false;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_9.state_12.init2");
                    state_12_subState = init2;
                    state_12_active = init2;
                    NOTIFY_TRANSITION_TERMINATED("24");
                    res = eventConsumed;
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

void TapisB::state_11_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.state_9.state_11");
    NOTIFY_TRANSITION_STARTED("11");
    NOTIFY_STATE_ENTERED("ROOT.state_9.state_11.init");
    pushNullTransition();
    state_11_subState = init;
    state_11_active = init;
    NOTIFY_TRANSITION_TERMINATED("11");
}

void TapisB::state_11_exit() {
    switch (state_11_subState) {
        // State Initialisation
        case Initialisation:
        {
            NOTIFY_STATE_EXITED("ROOT.state_9.state_11.Initialisation");
        }
        break;
        // State Debut_B
        case Debut_B:
        {
            NOTIFY_STATE_EXITED("ROOT.state_9.state_11.Debut_B");
        }
        break;
        // State Avancer_B
        case Avancer_B:
        {
            NOTIFY_STATE_EXITED("ROOT.state_9.state_11.Avancer_B");
        }
        break;
        // State Arreter_B
        case Arreter_B:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_9.state_11.Arreter_B");
        }
        break;
        // State Avancer_B_apres_griffe
        case Avancer_B_apres_griffe:
        {
            NOTIFY_STATE_EXITED("ROOT.state_9.state_11.Avancer_B_apres_griffe");
        }
        break;
        // State Rien_B
        case Rien_B:
        {
            NOTIFY_STATE_EXITED("ROOT.state_9.state_11.Rien_B");
        }
        break;
        // State Benne_B
        case Benne_B:
        {
            NOTIFY_STATE_EXITED("ROOT.state_9.state_11.Benne_B");
        }
        break;
        // State Retour_B
        case Retour_B:
        {
            NOTIFY_STATE_EXITED("ROOT.state_9.state_11.Retour_B");
        }
        break;
        // State init
        case init:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_9.state_11.init");
        }
        break;
        default:
            break;
    }
    state_11_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.state_9.state_11");
}

IOxfReactive::TakeEventStatus TapisB::state_11_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_11_active) {
        // State Initialisation
        case Initialisation:
        {
            if(IS_EVENT_TYPE_OF(evDCB__DESIGN_id))
                {
                    NOTIFY_TRANSITION_STARTED("0");
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_11.Initialisation");
                    NOTIFY_STATE_ENTERED("ROOT.state_9.state_11.Debut_B");
                    state_11_subState = Debut_B;
                    state_11_active = Debut_B;
                    NOTIFY_TRANSITION_TERMINATED("0");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State Debut_B
        case Debut_B:
        {
            if(IS_EVENT_TYPE_OF(evDEBB__DESIGN_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_11.Debut_B");
                    //#[ transition 1 
                    p_Commandes.avancerB();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_9.state_11.Avancer_B");
                    state_11_subState = Avancer_B;
                    state_11_active = Avancer_B;
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State Avancer_B
        case Avancer_B:
        {
            if(IS_EVENT_TYPE_OF(evMIB__DESIGN_id))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_11.Avancer_B");
                    //#[ transition 2 
                    p_Commandes.arreterB();
                    RunB = true;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_9.state_11.Arreter_B");
                    pushNullTransition();
                    state_11_subState = Arreter_B;
                    state_11_active = Arreter_B;
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State Arreter_B
        case Arreter_B:
        {
            if(IS_EVENT_TYPE_OF(evVERSB__DESIGN_id))
                {
                    //## transition 3 
                    if(!RunA)
                        {
                            NOTIFY_TRANSITION_STARTED("3");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.state_9.state_11.Arreter_B");
                            //#[ transition 3 
                            p_Commandes.avancerB();
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.state_9.state_11.Avancer_B_apres_griffe");
                            state_11_subState = Avancer_B_apres_griffe;
                            state_11_active = Avancer_B_apres_griffe;
                            NOTIFY_TRANSITION_TERMINATED("3");
                            res = eventConsumed;
                        }
                }
            else if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 9 
                    if(RunA)
                        {
                            NOTIFY_TRANSITION_STARTED("9");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.state_9.state_11.Arreter_B");
                            //#[ transition 9 
                            p_Commandes.arreterB();
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.state_9.state_11.Arreter_B");
                            pushNullTransition();
                            state_11_subState = Arreter_B;
                            state_11_active = Arreter_B;
                            NOTIFY_TRANSITION_TERMINATED("9");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State Avancer_B_apres_griffe
        case Avancer_B_apres_griffe:
        {
            if(IS_EVENT_TYPE_OF(evFINB__DESIGN_id))
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_11.Avancer_B_apres_griffe");
                    //#[ transition 4 
                    p_Commandes.arreterB();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_9.state_11.Rien_B");
                    state_11_subState = Rien_B;
                    state_11_active = Rien_B;
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State Rien_B
        case Rien_B:
        {
            if(IS_EVENT_TYPE_OF(evFINC__DESIGN_id))
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_11.Rien_B");
                    NOTIFY_STATE_ENTERED("ROOT.state_9.state_11.Benne_B");
                    state_11_subState = Benne_B;
                    state_11_active = Benne_B;
                    NOTIFY_TRANSITION_TERMINATED("5");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State Benne_B
        case Benne_B:
        {
            if(IS_EVENT_TYPE_OF(evVERSB__DESIGN_id))
                {
                    NOTIFY_TRANSITION_STARTED("6");
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_11.Benne_B");
                    //#[ transition 6 
                    p_Commandes.reculerB();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_9.state_11.Retour_B");
                    state_11_subState = Retour_B;
                    state_11_active = Retour_B;
                    NOTIFY_TRANSITION_TERMINATED("6");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State Retour_B
        case Retour_B:
        {
            if(IS_EVENT_TYPE_OF(evDEBB__DESIGN_id))
                {
                    NOTIFY_TRANSITION_STARTED("7");
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_11.Retour_B");
                    //#[ transition 7 
                    p_Commandes.arreterB();
                    RunB = false;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_9.state_11.Debut_B");
                    state_11_subState = Debut_B;
                    state_11_active = Debut_B;
                    NOTIFY_TRANSITION_TERMINATED("7");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State init
        case init:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 10 
                    if(choix==1)
                        {
                            NOTIFY_TRANSITION_STARTED("10");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.state_9.state_11.init");
                            NOTIFY_STATE_ENTERED("ROOT.state_9.state_11.Initialisation");
                            state_11_subState = Initialisation;
                            state_11_active = Initialisation;
                            NOTIFY_TRANSITION_TERMINATED("10");
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
void OMAnimatedTapisB::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("RunB", x2String(myReal->RunB));
    aomsAttributes->addAttribute("choix", x2String(myReal->choix));
    aomsAttributes->addAttribute("RunA", x2String(myReal->RunA));
}

void OMAnimatedTapisB::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    if(myReal->rootState_subState == TapisB::state_9)
        {
            state_9_serializeStates(aomsState);
        }
}

void OMAnimatedTapisB::state_9_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9");
    state_11_serializeStates(aomsState);
    state_12_serializeStates(aomsState);
    state_25_serializeStates(aomsState);
    state_26_serializeStates(aomsState);
}

void OMAnimatedTapisB::state_26_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_26");
    if(myReal->state_26_subState == TapisB::ENVOISLESRUN)
        {
            ENVOISLESRUN_serializeStates(aomsState);
        }
}

void OMAnimatedTapisB::ENVOISLESRUN_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_26.ENVOISLESRUN");
}

void OMAnimatedTapisB::state_25_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_25");
    if(myReal->state_25_subState == TapisB::LESRUN)
        {
            LESRUN_serializeStates(aomsState);
        }
}

void OMAnimatedTapisB::LESRUN_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_25.LESRUN");
}

void OMAnimatedTapisB::state_12_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_12");
    switch (myReal->state_12_subState) {
        case TapisB::Debut:
        {
            Debut_serializeStates(aomsState);
        }
        break;
        case TapisB::init2:
        {
            init2_serializeStates(aomsState);
        }
        break;
        case TapisB::DebutB:
        {
            DebutB_serializeStates(aomsState);
        }
        break;
        case TapisB::AvancerB:
        {
            AvancerB_serializeStates(aomsState);
        }
        break;
        case TapisB::ArreterB:
        {
            ArreterB_serializeStates(aomsState);
        }
        break;
        case TapisB::choixB:
        {
            choixB_serializeStates(aomsState);
        }
        break;
        case TapisB::AttenteGriffe:
        {
            AttenteGriffe_serializeStates(aomsState);
        }
        break;
        case TapisB::BversGriffe:
        {
            BversGriffe_serializeStates(aomsState);
        }
        break;
        case TapisB::BsurC:
        {
            BsurC_serializeStates(aomsState);
        }
        break;
        case TapisB::BretourC:
        {
            BretourC_serializeStates(aomsState);
        }
        break;
        case TapisB::retourB:
        {
            retourB_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedTapisB::retourB_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_12.retourB");
}

void OMAnimatedTapisB::init2_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_12.init2");
}

void OMAnimatedTapisB::DebutB_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_12.DebutB");
}

void OMAnimatedTapisB::Debut_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_12.Debut");
}

void OMAnimatedTapisB::choixB_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_12.choixB");
}

void OMAnimatedTapisB::BversGriffe_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_12.BversGriffe");
}

void OMAnimatedTapisB::BsurC_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_12.BsurC");
}

void OMAnimatedTapisB::BretourC_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_12.BretourC");
}

void OMAnimatedTapisB::AvancerB_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_12.AvancerB");
}

void OMAnimatedTapisB::AttenteGriffe_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_12.AttenteGriffe");
}

void OMAnimatedTapisB::ArreterB_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_12.ArreterB");
}

void OMAnimatedTapisB::state_11_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_11");
    switch (myReal->state_11_subState) {
        case TapisB::Initialisation:
        {
            Initialisation_serializeStates(aomsState);
        }
        break;
        case TapisB::Debut_B:
        {
            Debut_B_serializeStates(aomsState);
        }
        break;
        case TapisB::Avancer_B:
        {
            Avancer_B_serializeStates(aomsState);
        }
        break;
        case TapisB::Arreter_B:
        {
            Arreter_B_serializeStates(aomsState);
        }
        break;
        case TapisB::Avancer_B_apres_griffe:
        {
            Avancer_B_apres_griffe_serializeStates(aomsState);
        }
        break;
        case TapisB::Rien_B:
        {
            Rien_B_serializeStates(aomsState);
        }
        break;
        case TapisB::Benne_B:
        {
            Benne_B_serializeStates(aomsState);
        }
        break;
        case TapisB::Retour_B:
        {
            Retour_B_serializeStates(aomsState);
        }
        break;
        case TapisB::init:
        {
            init_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedTapisB::Rien_B_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_11.Rien_B");
}

void OMAnimatedTapisB::Retour_B_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_11.Retour_B");
}

void OMAnimatedTapisB::Initialisation_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_11.Initialisation");
}

void OMAnimatedTapisB::init_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_11.init");
}

void OMAnimatedTapisB::Debut_B_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_11.Debut_B");
}

void OMAnimatedTapisB::Benne_B_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_11.Benne_B");
}

void OMAnimatedTapisB::Avancer_B_apres_griffe_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_11.Avancer_B_apres_griffe");
}

void OMAnimatedTapisB::Avancer_B_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_11.Avancer_B");
}

void OMAnimatedTapisB::Arreter_B_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_11.Arreter_B");
}
//#]

IMPLEMENT_REACTIVE_META_P(TapisB, _DESIGN, _DESIGN, false, OMAnimatedTapisB)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: CodesGeneres\AnimationConfig\TapisB.cpp
*********************************************************************/
