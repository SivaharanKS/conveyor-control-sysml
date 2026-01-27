/********************************************************************
	Rhapsody	: 9.0.2 
	Login		: kumarass
	Component	: CodesGeneres 
	Configuration 	: AnimationConfig
	Model Element	: TapisA
//!	Generated Date	: Tue, 27, Jan 2026  
	File Path	: CodesGeneres\AnimationConfig\TapisA.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "TapisA.h"
//#[ ignore
#define _DESIGN_TapisA_TapisA_SERIALIZE OM_NO_OP

#define _DESIGN_TapisA_EnvoisRun_SERIALIZE OM_NO_OP
//#]

//## package _DESIGN

//## class TapisA
//#[ ignore
TapisA::fromMaquetteTapis_C::fromMaquetteTapis_C() : _p_(0) {
}

TapisA::fromMaquetteTapis_C::~fromMaquetteTapis_C() {
}

void TapisA::fromMaquetteTapis_C::connectTapisA(TapisA* part) {
    InBound.setItsDefaultProvidedInterface(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}

TapisA::toB_C::toB_C() : _p_(0) {
}

TapisA::toB_C::~toB_C() {
}

void TapisA::toB_C::connectTapisA(TapisA* part) {
    InBound.setItsDefaultProvidedInterface(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}

TapisA::toG_C::toG_C() : _p_(0) {
}

TapisA::toG_C::~toG_C() {
}

void TapisA::toG_C::connectTapisA(TapisA* part) {
    InBound.setItsDefaultProvidedInterface(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}

TapisA::fromB_C::fromB_C() : _p_(0) {
}

TapisA::fromB_C::~fromB_C() {
}

void TapisA::fromB_C::connectTapisA(TapisA* part) {
    InBound.setItsDefaultProvidedInterface(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}

TapisA::p_Commandes_C::p_Commandes_C() : _p_(0) {
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

TapisA::p_Commandes_C::~p_Commandes_C() {
    cleanUpRelations();
}

void TapisA::p_Commandes_C::arreterA() {
    
    if (itsVoid_arreterA_ProxyOperationInterface != NULL) {
        itsVoid_arreterA_ProxyOperationInterface->arreterA();
    }
    
}

void TapisA::p_Commandes_C::arreterB() {
    
    if (itsVoid_arreterB_ProxyOperationInterface != NULL) {
        itsVoid_arreterB_ProxyOperationInterface->arreterB();
    }
    
}

void TapisA::p_Commandes_C::arreterC() {
    
    if (itsVoid_arreterC_ProxyOperationInterface != NULL) {
        itsVoid_arreterC_ProxyOperationInterface->arreterC();
    }
    
}

void TapisA::p_Commandes_C::avancerA() {
    
    if (itsVoid_avancerA_ProxyOperationInterface != NULL) {
        itsVoid_avancerA_ProxyOperationInterface->avancerA();
    }
    
}

void TapisA::p_Commandes_C::avancerB() {
    
    if (itsVoid_avancerB_ProxyOperationInterface != NULL) {
        itsVoid_avancerB_ProxyOperationInterface->avancerB();
    }
    
}

void TapisA::p_Commandes_C::avancerC() {
    
    if (itsVoid_avancerC_ProxyOperationInterface != NULL) {
        itsVoid_avancerC_ProxyOperationInterface->avancerC();
    }
    
}

void_arreterA_ProxyOperationInterface* TapisA::p_Commandes_C::getItsVoid_arreterA_ProxyOperationInterface() {
    return this;
}

void_arreterB_ProxyOperationInterface* TapisA::p_Commandes_C::getItsVoid_arreterB_ProxyOperationInterface() {
    return this;
}

void_arreterC_ProxyOperationInterface* TapisA::p_Commandes_C::getItsVoid_arreterC_ProxyOperationInterface() {
    return this;
}

void_avancerA_ProxyOperationInterface* TapisA::p_Commandes_C::getItsVoid_avancerA_ProxyOperationInterface() {
    return this;
}

void_avancerB_ProxyOperationInterface* TapisA::p_Commandes_C::getItsVoid_avancerB_ProxyOperationInterface() {
    return this;
}

void_avancerC_ProxyOperationInterface* TapisA::p_Commandes_C::getItsVoid_avancerC_ProxyOperationInterface() {
    return this;
}

void_griffeA_ProxyOperationInterface* TapisA::p_Commandes_C::getItsVoid_griffeA_ProxyOperationInterface() {
    return this;
}

void_griffeB_ProxyOperationInterface* TapisA::p_Commandes_C::getItsVoid_griffeB_ProxyOperationInterface() {
    return this;
}

void_reculerA_ProxyOperationInterface* TapisA::p_Commandes_C::getItsVoid_reculerA_ProxyOperationInterface() {
    return this;
}

void_reculerB_ProxyOperationInterface* TapisA::p_Commandes_C::getItsVoid_reculerB_ProxyOperationInterface() {
    return this;
}

void_reculerC_ProxyOperationInterface* TapisA::p_Commandes_C::getItsVoid_reculerC_ProxyOperationInterface() {
    return this;
}

TapisA::p_Commandes_C* TapisA::p_Commandes_C::getOutBound() {
    return this;
}

void TapisA::p_Commandes_C::griffeA() {
    
    if (itsVoid_griffeA_ProxyOperationInterface != NULL) {
        itsVoid_griffeA_ProxyOperationInterface->griffeA();
    }
    
}

void TapisA::p_Commandes_C::griffeB() {
    
    if (itsVoid_griffeB_ProxyOperationInterface != NULL) {
        itsVoid_griffeB_ProxyOperationInterface->griffeB();
    }
    
}

void TapisA::p_Commandes_C::reculerA() {
    
    if (itsVoid_reculerA_ProxyOperationInterface != NULL) {
        itsVoid_reculerA_ProxyOperationInterface->reculerA();
    }
    
}

void TapisA::p_Commandes_C::reculerB() {
    
    if (itsVoid_reculerB_ProxyOperationInterface != NULL) {
        itsVoid_reculerB_ProxyOperationInterface->reculerB();
    }
    
}

void TapisA::p_Commandes_C::reculerC() {
    
    if (itsVoid_reculerC_ProxyOperationInterface != NULL) {
        itsVoid_reculerC_ProxyOperationInterface->reculerC();
    }
    
}

void TapisA::p_Commandes_C::setItsVoid_arreterA_ProxyOperationInterface(void_arreterA_ProxyOperationInterface* p_void_arreterA_ProxyOperationInterface) {
    itsVoid_arreterA_ProxyOperationInterface = p_void_arreterA_ProxyOperationInterface;
}

void TapisA::p_Commandes_C::setItsVoid_arreterB_ProxyOperationInterface(void_arreterB_ProxyOperationInterface* p_void_arreterB_ProxyOperationInterface) {
    itsVoid_arreterB_ProxyOperationInterface = p_void_arreterB_ProxyOperationInterface;
}

void TapisA::p_Commandes_C::setItsVoid_arreterC_ProxyOperationInterface(void_arreterC_ProxyOperationInterface* p_void_arreterC_ProxyOperationInterface) {
    itsVoid_arreterC_ProxyOperationInterface = p_void_arreterC_ProxyOperationInterface;
}

void TapisA::p_Commandes_C::setItsVoid_avancerA_ProxyOperationInterface(void_avancerA_ProxyOperationInterface* p_void_avancerA_ProxyOperationInterface) {
    itsVoid_avancerA_ProxyOperationInterface = p_void_avancerA_ProxyOperationInterface;
}

void TapisA::p_Commandes_C::setItsVoid_avancerB_ProxyOperationInterface(void_avancerB_ProxyOperationInterface* p_void_avancerB_ProxyOperationInterface) {
    itsVoid_avancerB_ProxyOperationInterface = p_void_avancerB_ProxyOperationInterface;
}

void TapisA::p_Commandes_C::setItsVoid_avancerC_ProxyOperationInterface(void_avancerC_ProxyOperationInterface* p_void_avancerC_ProxyOperationInterface) {
    itsVoid_avancerC_ProxyOperationInterface = p_void_avancerC_ProxyOperationInterface;
}

void TapisA::p_Commandes_C::setItsVoid_griffeA_ProxyOperationInterface(void_griffeA_ProxyOperationInterface* p_void_griffeA_ProxyOperationInterface) {
    itsVoid_griffeA_ProxyOperationInterface = p_void_griffeA_ProxyOperationInterface;
}

void TapisA::p_Commandes_C::setItsVoid_griffeB_ProxyOperationInterface(void_griffeB_ProxyOperationInterface* p_void_griffeB_ProxyOperationInterface) {
    itsVoid_griffeB_ProxyOperationInterface = p_void_griffeB_ProxyOperationInterface;
}

void TapisA::p_Commandes_C::setItsVoid_reculerA_ProxyOperationInterface(void_reculerA_ProxyOperationInterface* p_void_reculerA_ProxyOperationInterface) {
    itsVoid_reculerA_ProxyOperationInterface = p_void_reculerA_ProxyOperationInterface;
}

void TapisA::p_Commandes_C::setItsVoid_reculerB_ProxyOperationInterface(void_reculerB_ProxyOperationInterface* p_void_reculerB_ProxyOperationInterface) {
    itsVoid_reculerB_ProxyOperationInterface = p_void_reculerB_ProxyOperationInterface;
}

void TapisA::p_Commandes_C::setItsVoid_reculerC_ProxyOperationInterface(void_reculerC_ProxyOperationInterface* p_void_reculerC_ProxyOperationInterface) {
    itsVoid_reculerC_ProxyOperationInterface = p_void_reculerC_ProxyOperationInterface;
}

void TapisA::p_Commandes_C::cleanUpRelations() {
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

TapisA::TapisA(IOxfActive* theActiveContext) : RunA(false), RunB(false), choix(2) {
    NOTIFY_REACTIVE_CONSTRUCTOR(TapisA, TapisA(), 0, _DESIGN_TapisA_TapisA_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

TapisA::~TapisA() {
    NOTIFY_DESTRUCTOR(~TapisA, true);
    cancelTimeouts();
}

void TapisA::EnvoisRun() {
    NOTIFY_OPERATION(EnvoisRun, EnvoisRun(), 0, _DESIGN_TapisA_EnvoisRun_SERIALIZE);
    //#[ operation EnvoisRun()
    if(RunA){
    OUT_PORT(toG)->GEN(evRUNA);
    OUT_PORT(toB)->GEN(evRUNA);
    }
    
    if(!RunA){
    OUT_PORT(toG)->GEN(evNONRUNA);
    OUT_PORT(toB)->GEN(evNONRUNA);
    }
    
    
    //#]
}

TapisA::fromMaquetteTapis_C* TapisA::getFromMaquetteTapis() const {
    return (TapisA::fromMaquetteTapis_C*) &fromMaquetteTapis;
}

TapisA::fromMaquetteTapis_C* TapisA::get_fromMaquetteTapis() const {
    return (TapisA::fromMaquetteTapis_C*) &fromMaquetteTapis;
}

TapisA::toB_C* TapisA::getToB() const {
    return (TapisA::toB_C*) &toB;
}

TapisA::toB_C* TapisA::get_toB() const {
    return (TapisA::toB_C*) &toB;
}

TapisA::toG_C* TapisA::getToG() const {
    return (TapisA::toG_C*) &toG;
}

TapisA::toG_C* TapisA::get_toG() const {
    return (TapisA::toG_C*) &toG;
}

TapisA::fromB_C* TapisA::getFromB() const {
    return (TapisA::fromB_C*) &fromB;
}

TapisA::fromB_C* TapisA::get_fromB() const {
    return (TapisA::fromB_C*) &fromB;
}

TapisA::p_Commandes_C* TapisA::getP_Commandes() const {
    return (TapisA::p_Commandes_C*) &p_Commandes;
}

TapisA::p_Commandes_C* TapisA::get_p_Commandes() const {
    return (TapisA::p_Commandes_C*) &p_Commandes;
}

bool TapisA::getRunA() const {
    return RunA;
}

void TapisA::setRunA(bool p_RunA) {
    RunA = p_RunA;
}

bool TapisA::getRunB() const {
    return RunB;
}

void TapisA::setRunB(bool p_RunB) {
    RunB = p_RunB;
}

int TapisA::getChoix() const {
    return choix;
}

void TapisA::setChoix(int p_choix) {
    choix = p_choix;
}

bool TapisA::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void TapisA::initRelations() {
    if (get_fromMaquetteTapis() != NULL) {
        get_fromMaquetteTapis()->connectTapisA(this);
    }
    if (get_toB() != NULL) {
        get_toB()->connectTapisA(this);
    }
    if (get_toG() != NULL) {
        get_toG()->connectTapisA(this);
    }
    if (get_fromB() != NULL) {
        get_fromB()->connectTapisA(this);
    }
}

void TapisA::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    state_34_subState = OMNonState;
    state_34_active = OMNonState;
    state_34_timeout = NULL;
    state_30_subState = OMNonState;
    state_30_active = OMNonState;
    state_17_subState = OMNonState;
    state_17_active = OMNonState;
    state_16_subState = OMNonState;
    state_16_active = OMNonState;
}

void TapisA::cancelTimeouts() {
    cancel(state_34_timeout);
}

bool TapisA::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(state_34_timeout == arg)
        {
            state_34_timeout = NULL;
            res = true;
        }
    return res;
}

void TapisA::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        rootStateEntDef();
    }
}

void TapisA::rootStateEntDef() {
    NOTIFY_TRANSITION_STARTED("24");
    state_15_entDef();
    NOTIFY_TRANSITION_TERMINATED("24");
}

IOxfReactive::TakeEventStatus TapisA::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State state_15
    if(rootState_active == state_15)
        {
            res = state_15_processEvent();
        }
    return res;
}

void TapisA::state_15_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.state_15");
    rootState_subState = state_15;
    rootState_active = state_15;
    state_16_entDef();
    state_17_entDef();
    state_30_entDef();
    state_34_entDef();
}

void TapisA::state_15_exit() {
    state_16_exit();
    state_17_exit();
    state_30_exit();
    state_34_exit();
    
    NOTIFY_STATE_EXITED("ROOT.state_15");
}

IOxfReactive::TakeEventStatus TapisA::state_15TakeevReset() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    NOTIFY_TRANSITION_STARTED("8");
    state_15_exit();
    state_15_entDef();
    NOTIFY_TRANSITION_TERMINATED("8");
    res = eventConsumed;
    return res;
}

IOxfReactive::TakeEventStatus TapisA::state_15_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State state_16
    if(state_16_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(state_15))
                {
                    return res;
                }
        }
    // State state_17
    if(state_17_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(state_15))
                {
                    return res;
                }
        }
    // State state_30
    if(state_30_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(state_15))
                {
                    return res;
                }
        }
    // State state_34
    if(state_34_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(state_15))
                {
                    return res;
                }
        }
    if(res == eventNotConsumed)
        {
            res = state_15_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus TapisA::state_15_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evReset__DESIGN_id))
        {
            res = state_15TakeevReset();
        }
    
    return res;
}

void TapisA::state_34_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.state_15.state_34");
    NOTIFY_TRANSITION_STARTED("28");
    NOTIFY_STATE_ENTERED("ROOT.state_15.state_34.ENVOISLESRUN");
    state_34_subState = ENVOISLESRUN;
    state_34_active = ENVOISLESRUN;
    state_34_timeout = scheduleTimeout(500, "ROOT.state_15.state_34.ENVOISLESRUN");
    NOTIFY_TRANSITION_TERMINATED("28");
}

void TapisA::state_34_exit() {
    // State ENVOISLESRUN
    if(state_34_subState == ENVOISLESRUN)
        {
            cancel(state_34_timeout);
            NOTIFY_STATE_EXITED("ROOT.state_15.state_34.ENVOISLESRUN");
        }
    state_34_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.state_15.state_34");
}

IOxfReactive::TakeEventStatus TapisA::state_34_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State ENVOISLESRUN
    if(state_34_active == ENVOISLESRUN)
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == state_34_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("29");
                            cancel(state_34_timeout);
                            NOTIFY_STATE_EXITED("ROOT.state_15.state_34.ENVOISLESRUN");
                            //#[ transition 29 
                            EnvoisRun();
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.state_15.state_34.ENVOISLESRUN");
                            state_34_subState = ENVOISLESRUN;
                            state_34_active = ENVOISLESRUN;
                            state_34_timeout = scheduleTimeout(500, "ROOT.state_15.state_34.ENVOISLESRUN");
                            NOTIFY_TRANSITION_TERMINATED("29");
                            res = eventConsumed;
                        }
                }
            
            
        }
    return res;
}

void TapisA::state_30_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.state_15.state_30");
    NOTIFY_TRANSITION_STARTED("25");
    NOTIFY_STATE_ENTERED("ROOT.state_15.state_30.LESRUN");
    state_30_subState = LESRUN;
    state_30_active = LESRUN;
    NOTIFY_TRANSITION_TERMINATED("25");
}

void TapisA::state_30_exit() {
    // State LESRUN
    if(state_30_subState == LESRUN)
        {
            NOTIFY_STATE_EXITED("ROOT.state_15.state_30.LESRUN");
        }
    state_30_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.state_15.state_30");
}

IOxfReactive::TakeEventStatus TapisA::state_30_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State LESRUN
    if(state_30_active == LESRUN)
        {
            if(IS_EVENT_TYPE_OF(evNONRUNB__DESIGN_id))
                {
                    NOTIFY_TRANSITION_STARTED("26");
                    NOTIFY_STATE_EXITED("ROOT.state_15.state_30.LESRUN");
                    //#[ transition 26 
                    RunB=false;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_15.state_30.LESRUN");
                    state_30_subState = LESRUN;
                    state_30_active = LESRUN;
                    NOTIFY_TRANSITION_TERMINATED("26");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evRUNB__DESIGN_id))
                {
                    NOTIFY_TRANSITION_STARTED("27");
                    NOTIFY_STATE_EXITED("ROOT.state_15.state_30.LESRUN");
                    //#[ transition 27 
                    RunB=true;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_15.state_30.LESRUN");
                    state_30_subState = LESRUN;
                    state_30_active = LESRUN;
                    NOTIFY_TRANSITION_TERMINATED("27");
                    res = eventConsumed;
                }
            
            
        }
    return res;
}

void TapisA::state_17_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.state_15.state_17");
    NOTIFY_TRANSITION_STARTED("12");
    NOTIFY_STATE_ENTERED("ROOT.state_15.state_17.Debut");
    pushNullTransition();
    state_17_subState = Debut;
    state_17_active = Debut;
    NOTIFY_TRANSITION_TERMINATED("12");
}

void TapisA::state_17_exit() {
    switch (state_17_subState) {
        // State Debut
        case Debut:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_15.state_17.Debut");
        }
        break;
        // State init2
        case init2:
        {
            NOTIFY_STATE_EXITED("ROOT.state_15.state_17.init2");
        }
        break;
        // State DebutA
        case DebutA:
        {
            NOTIFY_STATE_EXITED("ROOT.state_15.state_17.DebutA");
        }
        break;
        // State AvancerA
        case AvancerA:
        {
            NOTIFY_STATE_EXITED("ROOT.state_15.state_17.AvancerA");
        }
        break;
        // State ArreterA
        case ArreterA:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_15.state_17.ArreterA");
        }
        break;
        // State choixA
        case choixA:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_15.state_17.choixA");
        }
        break;
        // State AttenteGriffe
        case AttenteGriffe:
        {
            NOTIFY_STATE_EXITED("ROOT.state_15.state_17.AttenteGriffe");
        }
        break;
        // State AversGriffe
        case AversGriffe:
        {
            NOTIFY_STATE_EXITED("ROOT.state_15.state_17.AversGriffe");
        }
        break;
        // State AsurC
        case AsurC:
        {
            NOTIFY_STATE_EXITED("ROOT.state_15.state_17.AsurC");
        }
        break;
        // State AretourC
        case AretourC:
        {
            NOTIFY_STATE_EXITED("ROOT.state_15.state_17.AretourC");
        }
        break;
        // State Aretour
        case Aretour:
        {
            NOTIFY_STATE_EXITED("ROOT.state_15.state_17.Aretour");
        }
        break;
        default:
            break;
    }
    state_17_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.state_15.state_17");
}

IOxfReactive::TakeEventStatus TapisA::state_17_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_17_active) {
        // State Debut
        case Debut:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 16 
                    if(choix==2)
                        {
                            NOTIFY_TRANSITION_STARTED("16");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.state_15.state_17.Debut");
                            //#[ transition 16 
                            RunA=false;
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.state_15.state_17.init2");
                            state_17_subState = init2;
                            state_17_active = init2;
                            NOTIFY_TRANSITION_TERMINATED("16");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State init2
        case init2:
        {
            if(IS_EVENT_TYPE_OF(evDCA__DESIGN_id))
                {
                    NOTIFY_TRANSITION_STARTED("13");
                    NOTIFY_STATE_EXITED("ROOT.state_15.state_17.init2");
                    //#[ transition 13 
                    RunA=true;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_15.state_17.DebutA");
                    state_17_subState = DebutA;
                    state_17_active = DebutA;
                    NOTIFY_TRANSITION_TERMINATED("13");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State DebutA
        case DebutA:
        {
            if(IS_EVENT_TYPE_OF(evDEBA__DESIGN_id))
                {
                    NOTIFY_TRANSITION_STARTED("14");
                    NOTIFY_STATE_EXITED("ROOT.state_15.state_17.DebutA");
                    //#[ transition 14 
                     p_Commandes.avancerA();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_15.state_17.AvancerA");
                    state_17_subState = AvancerA;
                    state_17_active = AvancerA;
                    NOTIFY_TRANSITION_TERMINATED("14");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State AvancerA
        case AvancerA:
        {
            if(IS_EVENT_TYPE_OF(evMIA__DESIGN_id))
                {
                    NOTIFY_TRANSITION_STARTED("15");
                    NOTIFY_STATE_EXITED("ROOT.state_15.state_17.AvancerA");
                    //#[ transition 15 
                    p_Commandes.arreterA();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_15.state_17.ArreterA");
                    pushNullTransition();
                    state_17_subState = ArreterA;
                    state_17_active = ArreterA;
                    NOTIFY_TRANSITION_TERMINATED("15");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State ArreterA
        case ArreterA:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 17 
                    if(!RunB)
                        {
                            NOTIFY_TRANSITION_STARTED("17");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.state_15.state_17.ArreterA");
                            NOTIFY_STATE_ENTERED("ROOT.state_15.state_17.choixA");
                            pushNullTransition();
                            state_17_subState = choixA;
                            state_17_active = choixA;
                            NOTIFY_TRANSITION_TERMINATED("17");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State choixA
        case choixA:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 18 
                    if(RunA==true)
                        {
                            NOTIFY_TRANSITION_STARTED("18");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.state_15.state_17.choixA");
                            NOTIFY_STATE_ENTERED("ROOT.state_15.state_17.AttenteGriffe");
                            state_17_subState = AttenteGriffe;
                            state_17_active = AttenteGriffe;
                            NOTIFY_TRANSITION_TERMINATED("18");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State AttenteGriffe
        case AttenteGriffe:
        {
            if(IS_EVENT_TYPE_OF(evVERSA__DESIGN_id))
                {
                    NOTIFY_TRANSITION_STARTED("19");
                    NOTIFY_STATE_EXITED("ROOT.state_15.state_17.AttenteGriffe");
                    //#[ transition 19 
                    p_Commandes.avancerA();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_15.state_17.AversGriffe");
                    state_17_subState = AversGriffe;
                    state_17_active = AversGriffe;
                    NOTIFY_TRANSITION_TERMINATED("19");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State AversGriffe
        case AversGriffe:
        {
            if(IS_EVENT_TYPE_OF(evFINA__DESIGN_id))
                {
                    NOTIFY_TRANSITION_STARTED("20");
                    NOTIFY_STATE_EXITED("ROOT.state_15.state_17.AversGriffe");
                    //#[ transition 20 
                    p_Commandes.arreterA();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_15.state_17.AsurC");
                    state_17_subState = AsurC;
                    state_17_active = AsurC;
                    NOTIFY_TRANSITION_TERMINATED("20");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State AsurC
        case AsurC:
        {
            if(IS_EVENT_TYPE_OF(evFINC__DESIGN_id))
                {
                    NOTIFY_TRANSITION_STARTED("21");
                    NOTIFY_STATE_EXITED("ROOT.state_15.state_17.AsurC");
                    NOTIFY_STATE_ENTERED("ROOT.state_15.state_17.AretourC");
                    state_17_subState = AretourC;
                    state_17_active = AretourC;
                    NOTIFY_TRANSITION_TERMINATED("21");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State AretourC
        case AretourC:
        {
            if(IS_EVENT_TYPE_OF(evVERSA__DESIGN_id))
                {
                    NOTIFY_TRANSITION_STARTED("22");
                    NOTIFY_STATE_EXITED("ROOT.state_15.state_17.AretourC");
                    //#[ transition 22 
                    p_Commandes.reculerA();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_15.state_17.Aretour");
                    state_17_subState = Aretour;
                    state_17_active = Aretour;
                    NOTIFY_TRANSITION_TERMINATED("22");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State Aretour
        case Aretour:
        {
            if(IS_EVENT_TYPE_OF(evDEBA__DESIGN_id))
                {
                    NOTIFY_TRANSITION_STARTED("23");
                    NOTIFY_STATE_EXITED("ROOT.state_15.state_17.Aretour");
                    //#[ transition 23 
                    p_Commandes.arreterA();
                    RunA=false;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_15.state_17.init2");
                    state_17_subState = init2;
                    state_17_active = init2;
                    NOTIFY_TRANSITION_TERMINATED("23");
                    res = eventConsumed;
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

void TapisA::state_16_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.state_15.state_16");
    NOTIFY_TRANSITION_STARTED("11");
    NOTIFY_STATE_ENTERED("ROOT.state_15.state_16.state_18");
    pushNullTransition();
    state_16_subState = state_18;
    state_16_active = state_18;
    NOTIFY_TRANSITION_TERMINATED("11");
}

void TapisA::state_16_exit() {
    switch (state_16_subState) {
        // State Debut_A
        case Debut_A:
        {
            NOTIFY_STATE_EXITED("ROOT.state_15.state_16.Debut_A");
        }
        break;
        // State Avancer_A
        case Avancer_A:
        {
            NOTIFY_STATE_EXITED("ROOT.state_15.state_16.Avancer_A");
        }
        break;
        // State Arreter_A
        case Arreter_A:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_15.state_16.Arreter_A");
        }
        break;
        // State Avancer_A_apres_griffe
        case Avancer_A_apres_griffe:
        {
            NOTIFY_STATE_EXITED("ROOT.state_15.state_16.Avancer_A_apres_griffe");
        }
        break;
        // State Rien_A
        case Rien_A:
        {
            NOTIFY_STATE_EXITED("ROOT.state_15.state_16.Rien_A");
        }
        break;
        // State Retour_A
        case Retour_A:
        {
            NOTIFY_STATE_EXITED("ROOT.state_15.state_16.Retour_A");
        }
        break;
        // State Benne_A
        case Benne_A:
        {
            NOTIFY_STATE_EXITED("ROOT.state_15.state_16.Benne_A");
        }
        break;
        // State initialisation
        case initialisation:
        {
            NOTIFY_STATE_EXITED("ROOT.state_15.state_16.initialisation");
        }
        break;
        // State state_18
        case state_18:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_15.state_16.state_18");
        }
        break;
        default:
            break;
    }
    state_16_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.state_15.state_16");
}

IOxfReactive::TakeEventStatus TapisA::state_16_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_16_active) {
        // State Debut_A
        case Debut_A:
        {
            if(IS_EVENT_TYPE_OF(evDEBA__DESIGN_id))
                {
                    NOTIFY_TRANSITION_STARTED("0");
                    NOTIFY_STATE_EXITED("ROOT.state_15.state_16.Debut_A");
                    //#[ transition 0 
                     p_Commandes.avancerA();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_15.state_16.Avancer_A");
                    state_16_subState = Avancer_A;
                    state_16_active = Avancer_A;
                    NOTIFY_TRANSITION_TERMINATED("0");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State Avancer_A
        case Avancer_A:
        {
            if(IS_EVENT_TYPE_OF(evMIA__DESIGN_id))
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    NOTIFY_STATE_EXITED("ROOT.state_15.state_16.Avancer_A");
                    //#[ transition 3 
                    p_Commandes.arreterA();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_15.state_16.Arreter_A");
                    pushNullTransition();
                    state_16_subState = Arreter_A;
                    state_16_active = Arreter_A;
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State Arreter_A
        case Arreter_A:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 9 
                    if(RunB)
                        {
                            NOTIFY_TRANSITION_STARTED("9");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.state_15.state_16.Arreter_A");
                            //#[ transition 9 
                            p_Commandes.arreterA();
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.state_15.state_16.Arreter_A");
                            pushNullTransition();
                            state_16_subState = Arreter_A;
                            state_16_active = Arreter_A;
                            NOTIFY_TRANSITION_TERMINATED("9");
                            res = eventConsumed;
                        }
                }
            else if(IS_EVENT_TYPE_OF(evVERSA__DESIGN_id))
                {
                    //## transition 1 
                    if(RunB)
                        {
                            NOTIFY_TRANSITION_STARTED("1");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.state_15.state_16.Arreter_A");
                            //#[ transition 1 
                            p_Commandes.avancerA();
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.state_15.state_16.Avancer_A_apres_griffe");
                            state_16_subState = Avancer_A_apres_griffe;
                            state_16_active = Avancer_A_apres_griffe;
                            NOTIFY_TRANSITION_TERMINATED("1");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State Avancer_A_apres_griffe
        case Avancer_A_apres_griffe:
        {
            if(IS_EVENT_TYPE_OF(evFINA__DESIGN_id))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.state_15.state_16.Avancer_A_apres_griffe");
                    //#[ transition 2 
                    p_Commandes.arreterA();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_15.state_16.Rien_A");
                    state_16_subState = Rien_A;
                    state_16_active = Rien_A;
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State Rien_A
        case Rien_A:
        {
            if(IS_EVENT_TYPE_OF(evFINC__DESIGN_id))
                {
                    NOTIFY_TRANSITION_STARTED("6");
                    NOTIFY_STATE_EXITED("ROOT.state_15.state_16.Rien_A");
                    NOTIFY_STATE_ENTERED("ROOT.state_15.state_16.Benne_A");
                    state_16_subState = Benne_A;
                    state_16_active = Benne_A;
                    NOTIFY_TRANSITION_TERMINATED("6");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State Retour_A
        case Retour_A:
        {
            if(IS_EVENT_TYPE_OF(evDEBA__DESIGN_id))
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    NOTIFY_STATE_EXITED("ROOT.state_15.state_16.Retour_A");
                    //#[ transition 5 
                    p_Commandes.arreterA();
                    RunA=false;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_15.state_16.Debut_A");
                    state_16_subState = Debut_A;
                    state_16_active = Debut_A;
                    NOTIFY_TRANSITION_TERMINATED("5");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State Benne_A
        case Benne_A:
        {
            if(IS_EVENT_TYPE_OF(evVERSA__DESIGN_id))
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    NOTIFY_STATE_EXITED("ROOT.state_15.state_16.Benne_A");
                    //#[ transition 4 
                    p_Commandes.reculerA();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_15.state_16.Retour_A");
                    state_16_subState = Retour_A;
                    state_16_active = Retour_A;
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State initialisation
        case initialisation:
        {
            if(IS_EVENT_TYPE_OF(evDCA__DESIGN_id))
                {
                    NOTIFY_TRANSITION_STARTED("7");
                    NOTIFY_STATE_EXITED("ROOT.state_15.state_16.initialisation");
                    //#[ transition 7 
                    RunA=true;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_15.state_16.Debut_A");
                    state_16_subState = Debut_A;
                    state_16_active = Debut_A;
                    NOTIFY_TRANSITION_TERMINATED("7");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State state_18
        case state_18:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 10 
                    if(choix==1)
                        {
                            NOTIFY_TRANSITION_STARTED("10");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.state_15.state_16.state_18");
                            NOTIFY_STATE_ENTERED("ROOT.state_15.state_16.initialisation");
                            state_16_subState = initialisation;
                            state_16_active = initialisation;
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
void OMAnimatedTapisA::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("RunA", x2String(myReal->RunA));
    aomsAttributes->addAttribute("choix", x2String(myReal->choix));
    aomsAttributes->addAttribute("RunB", x2String(myReal->RunB));
}

void OMAnimatedTapisA::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    if(myReal->rootState_subState == TapisA::state_15)
        {
            state_15_serializeStates(aomsState);
        }
}

void OMAnimatedTapisA::state_15_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_15");
    state_16_serializeStates(aomsState);
    state_17_serializeStates(aomsState);
    state_30_serializeStates(aomsState);
    state_34_serializeStates(aomsState);
}

void OMAnimatedTapisA::state_34_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_15.state_34");
    if(myReal->state_34_subState == TapisA::ENVOISLESRUN)
        {
            ENVOISLESRUN_serializeStates(aomsState);
        }
}

void OMAnimatedTapisA::ENVOISLESRUN_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_15.state_34.ENVOISLESRUN");
}

void OMAnimatedTapisA::state_30_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_15.state_30");
    if(myReal->state_30_subState == TapisA::LESRUN)
        {
            LESRUN_serializeStates(aomsState);
        }
}

void OMAnimatedTapisA::LESRUN_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_15.state_30.LESRUN");
}

void OMAnimatedTapisA::state_17_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_15.state_17");
    switch (myReal->state_17_subState) {
        case TapisA::Debut:
        {
            Debut_serializeStates(aomsState);
        }
        break;
        case TapisA::init2:
        {
            init2_serializeStates(aomsState);
        }
        break;
        case TapisA::DebutA:
        {
            DebutA_serializeStates(aomsState);
        }
        break;
        case TapisA::AvancerA:
        {
            AvancerA_serializeStates(aomsState);
        }
        break;
        case TapisA::ArreterA:
        {
            ArreterA_serializeStates(aomsState);
        }
        break;
        case TapisA::choixA:
        {
            choixA_serializeStates(aomsState);
        }
        break;
        case TapisA::AttenteGriffe:
        {
            AttenteGriffe_serializeStates(aomsState);
        }
        break;
        case TapisA::AversGriffe:
        {
            AversGriffe_serializeStates(aomsState);
        }
        break;
        case TapisA::AsurC:
        {
            AsurC_serializeStates(aomsState);
        }
        break;
        case TapisA::AretourC:
        {
            AretourC_serializeStates(aomsState);
        }
        break;
        case TapisA::Aretour:
        {
            Aretour_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedTapisA::init2_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_15.state_17.init2");
}

void OMAnimatedTapisA::DebutA_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_15.state_17.DebutA");
}

void OMAnimatedTapisA::Debut_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_15.state_17.Debut");
}

void OMAnimatedTapisA::choixA_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_15.state_17.choixA");
}

void OMAnimatedTapisA::AversGriffe_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_15.state_17.AversGriffe");
}

void OMAnimatedTapisA::AvancerA_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_15.state_17.AvancerA");
}

void OMAnimatedTapisA::AttenteGriffe_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_15.state_17.AttenteGriffe");
}

void OMAnimatedTapisA::AsurC_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_15.state_17.AsurC");
}

void OMAnimatedTapisA::ArreterA_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_15.state_17.ArreterA");
}

void OMAnimatedTapisA::AretourC_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_15.state_17.AretourC");
}

void OMAnimatedTapisA::Aretour_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_15.state_17.Aretour");
}

void OMAnimatedTapisA::state_16_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_15.state_16");
    switch (myReal->state_16_subState) {
        case TapisA::Debut_A:
        {
            Debut_A_serializeStates(aomsState);
        }
        break;
        case TapisA::Avancer_A:
        {
            Avancer_A_serializeStates(aomsState);
        }
        break;
        case TapisA::Arreter_A:
        {
            Arreter_A_serializeStates(aomsState);
        }
        break;
        case TapisA::Avancer_A_apres_griffe:
        {
            Avancer_A_apres_griffe_serializeStates(aomsState);
        }
        break;
        case TapisA::Rien_A:
        {
            Rien_A_serializeStates(aomsState);
        }
        break;
        case TapisA::Retour_A:
        {
            Retour_A_serializeStates(aomsState);
        }
        break;
        case TapisA::Benne_A:
        {
            Benne_A_serializeStates(aomsState);
        }
        break;
        case TapisA::initialisation:
        {
            initialisation_serializeStates(aomsState);
        }
        break;
        case TapisA::state_18:
        {
            state_18_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedTapisA::state_18_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_15.state_16.state_18");
}

void OMAnimatedTapisA::Rien_A_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_15.state_16.Rien_A");
}

void OMAnimatedTapisA::Retour_A_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_15.state_16.Retour_A");
}

void OMAnimatedTapisA::initialisation_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_15.state_16.initialisation");
}

void OMAnimatedTapisA::Debut_A_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_15.state_16.Debut_A");
}

void OMAnimatedTapisA::Benne_A_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_15.state_16.Benne_A");
}

void OMAnimatedTapisA::Avancer_A_apres_griffe_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_15.state_16.Avancer_A_apres_griffe");
}

void OMAnimatedTapisA::Avancer_A_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_15.state_16.Avancer_A");
}

void OMAnimatedTapisA::Arreter_A_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_15.state_16.Arreter_A");
}
//#]

IMPLEMENT_REACTIVE_META_P(TapisA, _DESIGN, _DESIGN, false, OMAnimatedTapisA)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: CodesGeneres\AnimationConfig\TapisA.cpp
*********************************************************************/
