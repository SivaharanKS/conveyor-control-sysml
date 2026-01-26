/********************************************************************
	Rhapsody	: 9.0.2 
	Login		: kumarass
	Component	: CodesGeneres 
	Configuration 	: AnimationConfig
	Model Element	: TapisC
//!	Generated Date	: Mon, 26, Jan 2026  
	File Path	: CodesGeneres\AnimationConfig\TapisC.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "TapisC.h"
//#[ ignore
#define _DESIGN_TapisC_TapisC_SERIALIZE OM_NO_OP
//#]

//## package _DESIGN

//## class TapisC
//#[ ignore
TapisC::fromMaquetteTapis_C::fromMaquetteTapis_C() : _p_(0) {
}

TapisC::fromMaquetteTapis_C::~fromMaquetteTapis_C() {
}

void TapisC::fromMaquetteTapis_C::connectTapisC(TapisC* part) {
    InBound.setItsDefaultProvidedInterface(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}

TapisC::p_Commandes_C::p_Commandes_C() : _p_(0) {
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

TapisC::p_Commandes_C::~p_Commandes_C() {
    cleanUpRelations();
}

void TapisC::p_Commandes_C::arreterA() {
    
    if (itsVoid_arreterA_ProxyOperationInterface != NULL) {
        itsVoid_arreterA_ProxyOperationInterface->arreterA();
    }
    
}

void TapisC::p_Commandes_C::arreterB() {
    
    if (itsVoid_arreterB_ProxyOperationInterface != NULL) {
        itsVoid_arreterB_ProxyOperationInterface->arreterB();
    }
    
}

void TapisC::p_Commandes_C::arreterC() {
    
    if (itsVoid_arreterC_ProxyOperationInterface != NULL) {
        itsVoid_arreterC_ProxyOperationInterface->arreterC();
    }
    
}

void TapisC::p_Commandes_C::avancerA() {
    
    if (itsVoid_avancerA_ProxyOperationInterface != NULL) {
        itsVoid_avancerA_ProxyOperationInterface->avancerA();
    }
    
}

void TapisC::p_Commandes_C::avancerB() {
    
    if (itsVoid_avancerB_ProxyOperationInterface != NULL) {
        itsVoid_avancerB_ProxyOperationInterface->avancerB();
    }
    
}

void TapisC::p_Commandes_C::avancerC() {
    
    if (itsVoid_avancerC_ProxyOperationInterface != NULL) {
        itsVoid_avancerC_ProxyOperationInterface->avancerC();
    }
    
}

void_arreterA_ProxyOperationInterface* TapisC::p_Commandes_C::getItsVoid_arreterA_ProxyOperationInterface() {
    return this;
}

void_arreterB_ProxyOperationInterface* TapisC::p_Commandes_C::getItsVoid_arreterB_ProxyOperationInterface() {
    return this;
}

void_arreterC_ProxyOperationInterface* TapisC::p_Commandes_C::getItsVoid_arreterC_ProxyOperationInterface() {
    return this;
}

void_avancerA_ProxyOperationInterface* TapisC::p_Commandes_C::getItsVoid_avancerA_ProxyOperationInterface() {
    return this;
}

void_avancerB_ProxyOperationInterface* TapisC::p_Commandes_C::getItsVoid_avancerB_ProxyOperationInterface() {
    return this;
}

void_avancerC_ProxyOperationInterface* TapisC::p_Commandes_C::getItsVoid_avancerC_ProxyOperationInterface() {
    return this;
}

void_griffeA_ProxyOperationInterface* TapisC::p_Commandes_C::getItsVoid_griffeA_ProxyOperationInterface() {
    return this;
}

void_griffeB_ProxyOperationInterface* TapisC::p_Commandes_C::getItsVoid_griffeB_ProxyOperationInterface() {
    return this;
}

void_reculerA_ProxyOperationInterface* TapisC::p_Commandes_C::getItsVoid_reculerA_ProxyOperationInterface() {
    return this;
}

void_reculerB_ProxyOperationInterface* TapisC::p_Commandes_C::getItsVoid_reculerB_ProxyOperationInterface() {
    return this;
}

void_reculerC_ProxyOperationInterface* TapisC::p_Commandes_C::getItsVoid_reculerC_ProxyOperationInterface() {
    return this;
}

TapisC::p_Commandes_C* TapisC::p_Commandes_C::getOutBound() {
    return this;
}

void TapisC::p_Commandes_C::griffeA() {
    
    if (itsVoid_griffeA_ProxyOperationInterface != NULL) {
        itsVoid_griffeA_ProxyOperationInterface->griffeA();
    }
    
}

void TapisC::p_Commandes_C::griffeB() {
    
    if (itsVoid_griffeB_ProxyOperationInterface != NULL) {
        itsVoid_griffeB_ProxyOperationInterface->griffeB();
    }
    
}

void TapisC::p_Commandes_C::reculerA() {
    
    if (itsVoid_reculerA_ProxyOperationInterface != NULL) {
        itsVoid_reculerA_ProxyOperationInterface->reculerA();
    }
    
}

void TapisC::p_Commandes_C::reculerB() {
    
    if (itsVoid_reculerB_ProxyOperationInterface != NULL) {
        itsVoid_reculerB_ProxyOperationInterface->reculerB();
    }
    
}

void TapisC::p_Commandes_C::reculerC() {
    
    if (itsVoid_reculerC_ProxyOperationInterface != NULL) {
        itsVoid_reculerC_ProxyOperationInterface->reculerC();
    }
    
}

void TapisC::p_Commandes_C::setItsVoid_arreterA_ProxyOperationInterface(void_arreterA_ProxyOperationInterface* p_void_arreterA_ProxyOperationInterface) {
    itsVoid_arreterA_ProxyOperationInterface = p_void_arreterA_ProxyOperationInterface;
}

void TapisC::p_Commandes_C::setItsVoid_arreterB_ProxyOperationInterface(void_arreterB_ProxyOperationInterface* p_void_arreterB_ProxyOperationInterface) {
    itsVoid_arreterB_ProxyOperationInterface = p_void_arreterB_ProxyOperationInterface;
}

void TapisC::p_Commandes_C::setItsVoid_arreterC_ProxyOperationInterface(void_arreterC_ProxyOperationInterface* p_void_arreterC_ProxyOperationInterface) {
    itsVoid_arreterC_ProxyOperationInterface = p_void_arreterC_ProxyOperationInterface;
}

void TapisC::p_Commandes_C::setItsVoid_avancerA_ProxyOperationInterface(void_avancerA_ProxyOperationInterface* p_void_avancerA_ProxyOperationInterface) {
    itsVoid_avancerA_ProxyOperationInterface = p_void_avancerA_ProxyOperationInterface;
}

void TapisC::p_Commandes_C::setItsVoid_avancerB_ProxyOperationInterface(void_avancerB_ProxyOperationInterface* p_void_avancerB_ProxyOperationInterface) {
    itsVoid_avancerB_ProxyOperationInterface = p_void_avancerB_ProxyOperationInterface;
}

void TapisC::p_Commandes_C::setItsVoid_avancerC_ProxyOperationInterface(void_avancerC_ProxyOperationInterface* p_void_avancerC_ProxyOperationInterface) {
    itsVoid_avancerC_ProxyOperationInterface = p_void_avancerC_ProxyOperationInterface;
}

void TapisC::p_Commandes_C::setItsVoid_griffeA_ProxyOperationInterface(void_griffeA_ProxyOperationInterface* p_void_griffeA_ProxyOperationInterface) {
    itsVoid_griffeA_ProxyOperationInterface = p_void_griffeA_ProxyOperationInterface;
}

void TapisC::p_Commandes_C::setItsVoid_griffeB_ProxyOperationInterface(void_griffeB_ProxyOperationInterface* p_void_griffeB_ProxyOperationInterface) {
    itsVoid_griffeB_ProxyOperationInterface = p_void_griffeB_ProxyOperationInterface;
}

void TapisC::p_Commandes_C::setItsVoid_reculerA_ProxyOperationInterface(void_reculerA_ProxyOperationInterface* p_void_reculerA_ProxyOperationInterface) {
    itsVoid_reculerA_ProxyOperationInterface = p_void_reculerA_ProxyOperationInterface;
}

void TapisC::p_Commandes_C::setItsVoid_reculerB_ProxyOperationInterface(void_reculerB_ProxyOperationInterface* p_void_reculerB_ProxyOperationInterface) {
    itsVoid_reculerB_ProxyOperationInterface = p_void_reculerB_ProxyOperationInterface;
}

void TapisC::p_Commandes_C::setItsVoid_reculerC_ProxyOperationInterface(void_reculerC_ProxyOperationInterface* p_void_reculerC_ProxyOperationInterface) {
    itsVoid_reculerC_ProxyOperationInterface = p_void_reculerC_ProxyOperationInterface;
}

void TapisC::p_Commandes_C::cleanUpRelations() {
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

TapisC::TapisC(IOxfActive* theActiveContext) : RunA(false), RunB(false), choix(2) {
    NOTIFY_REACTIVE_CONSTRUCTOR(TapisC, TapisC(), 0, _DESIGN_TapisC_TapisC_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

TapisC::~TapisC() {
    NOTIFY_DESTRUCTOR(~TapisC, true);
}

TapisC::fromMaquetteTapis_C* TapisC::getFromMaquetteTapis() const {
    return (TapisC::fromMaquetteTapis_C*) &fromMaquetteTapis;
}

TapisC::fromMaquetteTapis_C* TapisC::get_fromMaquetteTapis() const {
    return (TapisC::fromMaquetteTapis_C*) &fromMaquetteTapis;
}

TapisC::p_Commandes_C* TapisC::getP_Commandes() const {
    return (TapisC::p_Commandes_C*) &p_Commandes;
}

TapisC::p_Commandes_C* TapisC::get_p_Commandes() const {
    return (TapisC::p_Commandes_C*) &p_Commandes;
}

bool TapisC::getRunA() const {
    return RunA;
}

void TapisC::setRunA(bool p_RunA) {
    RunA = p_RunA;
}

bool TapisC::getRunB() const {
    return RunB;
}

void TapisC::setRunB(bool p_RunB) {
    RunB = p_RunB;
}

int TapisC::getChoix() const {
    return choix;
}

void TapisC::setChoix(int p_choix) {
    choix = p_choix;
}

bool TapisC::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void TapisC::initRelations() {
    if (get_fromMaquetteTapis() != NULL) {
        get_fromMaquetteTapis()->connectTapisC(this);
    }
}

void TapisC::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    state_14_subState = OMNonState;
}

void TapisC::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("11");
        state_14_entDef();
        NOTIFY_TRANSITION_TERMINATED("11");
    }
}

IOxfReactive::TakeEventStatus TapisC::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Debut_C
        case Debut_C:
        {
            res = Debut_C_handleEvent();
        }
        break;
        // State From_A
        case From_A:
        {
            res = From_A_handleEvent();
        }
        break;
        // State FinC_FromA
        case FinC_FromA:
        {
            res = FinC_FromA_handleEvent();
        }
        break;
        // State C_to_A
        case C_to_A:
        {
            res = C_to_A_handleEvent();
        }
        break;
        // State From_B
        case From_B:
        {
            res = From_B_handleEvent();
        }
        break;
        // State FinC_FromB
        case FinC_FromB:
        {
            res = FinC_FromB_handleEvent();
        }
        break;
        // State C_to_B
        case C_to_B:
        {
            res = C_to_B_handleEvent();
        }
        break;
        // State state_15
        case state_15:
        {
            res = state_15_handleEvent();
        }
        break;
        default:
            break;
    }
    return res;
}

void TapisC::state_14_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.state_14");
    rootState_subState = state_14;
    NOTIFY_TRANSITION_STARTED("9");
    NOTIFY_STATE_ENTERED("ROOT.state_14.state_15");
    pushNullTransition();
    state_14_subState = state_15;
    rootState_active = state_15;
    NOTIFY_TRANSITION_TERMINATED("9");
}

void TapisC::state_14_exit() {
    switch (state_14_subState) {
        // State Debut_C
        case Debut_C:
        {
            NOTIFY_STATE_EXITED("ROOT.state_14.Debut_C");
        }
        break;
        // State From_A
        case From_A:
        {
            NOTIFY_STATE_EXITED("ROOT.state_14.From_A");
        }
        break;
        // State FinC_FromA
        case FinC_FromA:
        {
            NOTIFY_STATE_EXITED("ROOT.state_14.FinC_FromA");
        }
        break;
        // State C_to_A
        case C_to_A:
        {
            NOTIFY_STATE_EXITED("ROOT.state_14.C_to_A");
        }
        break;
        // State From_B
        case From_B:
        {
            NOTIFY_STATE_EXITED("ROOT.state_14.From_B");
        }
        break;
        // State FinC_FromB
        case FinC_FromB:
        {
            NOTIFY_STATE_EXITED("ROOT.state_14.FinC_FromB");
        }
        break;
        // State C_to_B
        case C_to_B:
        {
            NOTIFY_STATE_EXITED("ROOT.state_14.C_to_B");
        }
        break;
        // State state_15
        case state_15:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_14.state_15");
        }
        break;
        default:
            break;
    }
    state_14_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.state_14");
}

IOxfReactive::TakeEventStatus TapisC::state_14_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evReset__DESIGN_id))
        {
            NOTIFY_TRANSITION_STARTED("8");
            state_14_exit();
            state_14_entDef();
            NOTIFY_TRANSITION_TERMINATED("8");
            res = eventConsumed;
        }
    
    return res;
}

IOxfReactive::TakeEventStatus TapisC::state_15_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 10 
            if(choix==2)
                {
                    NOTIFY_TRANSITION_STARTED("10");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.state_14.state_15");
                    NOTIFY_STATE_ENTERED("ROOT.state_14.Debut_C");
                    state_14_subState = Debut_C;
                    rootState_active = Debut_C;
                    NOTIFY_TRANSITION_TERMINATED("10");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = state_14_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus TapisC::From_B_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evVERSA__DESIGN_id))
        {
            NOTIFY_TRANSITION_STARTED("5");
            NOTIFY_STATE_EXITED("ROOT.state_14.From_B");
            //#[ transition 5 
            p_Commandes.avancerC();
            //#]
            NOTIFY_STATE_ENTERED("ROOT.state_14.FinC_FromB");
            state_14_subState = FinC_FromB;
            rootState_active = FinC_FromB;
            NOTIFY_TRANSITION_TERMINATED("5");
            res = eventConsumed;
        }
    
    if(res == eventNotConsumed)
        {
            res = state_14_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus TapisC::From_A_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evVERSB__DESIGN_id))
        {
            NOTIFY_TRANSITION_STARTED("1");
            NOTIFY_STATE_EXITED("ROOT.state_14.From_A");
            //#[ transition 1 
            p_Commandes.avancerC();
            //#]
            NOTIFY_STATE_ENTERED("ROOT.state_14.FinC_FromA");
            state_14_subState = FinC_FromA;
            rootState_active = FinC_FromA;
            NOTIFY_TRANSITION_TERMINATED("1");
            res = eventConsumed;
        }
    
    if(res == eventNotConsumed)
        {
            res = state_14_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus TapisC::FinC_FromB_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evFINC__DESIGN_id))
        {
            NOTIFY_TRANSITION_STARTED("6");
            NOTIFY_STATE_EXITED("ROOT.state_14.FinC_FromB");
            //#[ transition 6 
            p_Commandes.reculerC();
            //#]
            NOTIFY_STATE_ENTERED("ROOT.state_14.C_to_B");
            state_14_subState = C_to_B;
            rootState_active = C_to_B;
            NOTIFY_TRANSITION_TERMINATED("6");
            res = eventConsumed;
        }
    
    if(res == eventNotConsumed)
        {
            res = state_14_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus TapisC::FinC_FromA_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evFINC__DESIGN_id))
        {
            NOTIFY_TRANSITION_STARTED("2");
            NOTIFY_STATE_EXITED("ROOT.state_14.FinC_FromA");
            //#[ transition 2 
            p_Commandes.reculerC();
            //#]
            NOTIFY_STATE_ENTERED("ROOT.state_14.C_to_A");
            state_14_subState = C_to_A;
            rootState_active = C_to_A;
            NOTIFY_TRANSITION_TERMINATED("2");
            res = eventConsumed;
        }
    
    if(res == eventNotConsumed)
        {
            res = state_14_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus TapisC::Debut_C_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evFINA__DESIGN_id))
        {
            NOTIFY_TRANSITION_STARTED("0");
            NOTIFY_STATE_EXITED("ROOT.state_14.Debut_C");
            NOTIFY_STATE_ENTERED("ROOT.state_14.From_A");
            state_14_subState = From_A;
            rootState_active = From_A;
            NOTIFY_TRANSITION_TERMINATED("0");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(evFINB__DESIGN_id))
        {
            NOTIFY_TRANSITION_STARTED("4");
            NOTIFY_STATE_EXITED("ROOT.state_14.Debut_C");
            NOTIFY_STATE_ENTERED("ROOT.state_14.From_B");
            state_14_subState = From_B;
            rootState_active = From_B;
            NOTIFY_TRANSITION_TERMINATED("4");
            res = eventConsumed;
        }
    
    if(res == eventNotConsumed)
        {
            res = state_14_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus TapisC::C_to_B_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evDEBC__DESIGN_id))
        {
            NOTIFY_TRANSITION_STARTED("7");
            NOTIFY_STATE_EXITED("ROOT.state_14.C_to_B");
            //#[ transition 7 
            p_Commandes.arreterC();
            //#]
            NOTIFY_STATE_ENTERED("ROOT.state_14.Debut_C");
            state_14_subState = Debut_C;
            rootState_active = Debut_C;
            NOTIFY_TRANSITION_TERMINATED("7");
            res = eventConsumed;
        }
    
    if(res == eventNotConsumed)
        {
            res = state_14_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus TapisC::C_to_A_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evDEBC__DESIGN_id))
        {
            NOTIFY_TRANSITION_STARTED("3");
            NOTIFY_STATE_EXITED("ROOT.state_14.C_to_A");
            //#[ transition 3 
            p_Commandes.arreterC();
            //#]
            NOTIFY_STATE_ENTERED("ROOT.state_14.Debut_C");
            state_14_subState = Debut_C;
            rootState_active = Debut_C;
            NOTIFY_TRANSITION_TERMINATED("3");
            res = eventConsumed;
        }
    
    if(res == eventNotConsumed)
        {
            res = state_14_handleEvent();
        }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedTapisC::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("choix", x2String(myReal->choix));
    aomsAttributes->addAttribute("RunB", x2String(myReal->RunB));
    aomsAttributes->addAttribute("RunA", x2String(myReal->RunA));
}

void OMAnimatedTapisC::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    if(myReal->rootState_subState == TapisC::state_14)
        {
            state_14_serializeStates(aomsState);
        }
}

void OMAnimatedTapisC::state_14_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_14");
    switch (myReal->state_14_subState) {
        case TapisC::Debut_C:
        {
            Debut_C_serializeStates(aomsState);
        }
        break;
        case TapisC::From_A:
        {
            From_A_serializeStates(aomsState);
        }
        break;
        case TapisC::FinC_FromA:
        {
            FinC_FromA_serializeStates(aomsState);
        }
        break;
        case TapisC::C_to_A:
        {
            C_to_A_serializeStates(aomsState);
        }
        break;
        case TapisC::From_B:
        {
            From_B_serializeStates(aomsState);
        }
        break;
        case TapisC::FinC_FromB:
        {
            FinC_FromB_serializeStates(aomsState);
        }
        break;
        case TapisC::C_to_B:
        {
            C_to_B_serializeStates(aomsState);
        }
        break;
        case TapisC::state_15:
        {
            state_15_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedTapisC::state_15_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_14.state_15");
}

void OMAnimatedTapisC::From_B_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_14.From_B");
}

void OMAnimatedTapisC::From_A_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_14.From_A");
}

void OMAnimatedTapisC::FinC_FromB_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_14.FinC_FromB");
}

void OMAnimatedTapisC::FinC_FromA_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_14.FinC_FromA");
}

void OMAnimatedTapisC::Debut_C_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_14.Debut_C");
}

void OMAnimatedTapisC::C_to_B_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_14.C_to_B");
}

void OMAnimatedTapisC::C_to_A_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_14.C_to_A");
}
//#]

IMPLEMENT_REACTIVE_META_P(TapisC, _DESIGN, _DESIGN, false, OMAnimatedTapisC)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: CodesGeneres\AnimationConfig\TapisC.cpp
*********************************************************************/
