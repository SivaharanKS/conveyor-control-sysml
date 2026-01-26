/********************************************************************
	Rhapsody	: 9.0.2 
	Login		: kumarass
	Component	: CodesGeneres 
	Configuration 	: AnimationConfig
	Model Element	: MaquetteTapis
//!	Generated Date	: Mon, 26, Jan 2026  
	File Path	: CodesGeneres\AnimationConfig\MaquetteTapis.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "MaquetteTapis.h"
//#[ ignore
#define _DESIGN_MaquetteTapis_MaquetteTapis_SERIALIZE OM_NO_OP

#define _DESIGN_MaquetteTapis_arreterA_SERIALIZE OM_NO_OP

#define _DESIGN_MaquetteTapis_arreterB_SERIALIZE OM_NO_OP

#define _DESIGN_MaquetteTapis_arreterC_SERIALIZE OM_NO_OP

#define _DESIGN_MaquetteTapis_avancerA_SERIALIZE OM_NO_OP

#define _DESIGN_MaquetteTapis_avancerB_SERIALIZE OM_NO_OP

#define _DESIGN_MaquetteTapis_avancerC_SERIALIZE OM_NO_OP

#define _DESIGN_MaquetteTapis_griffeA_SERIALIZE OM_NO_OP

#define _DESIGN_MaquetteTapis_griffeB_SERIALIZE OM_NO_OP

#define _DESIGN_MaquetteTapis_reculerA_SERIALIZE OM_NO_OP

#define _DESIGN_MaquetteTapis_reculerB_SERIALIZE OM_NO_OP

#define _DESIGN_MaquetteTapis_reculerC_SERIALIZE OM_NO_OP

#define _DESIGN_MaquetteTapis_reset_commandes_SERIALIZE OM_NO_OP

#define OMAnim__DESIGN_MaquetteTapis_setMode_reel_bool_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_mode_reel)

#define OMAnim__DESIGN_MaquetteTapis_setMode_reel_bool_SERIALIZE_RET_VAL

#define OMAnim__DESIGN_MaquetteTapis_setMode_simulation_bool_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_mode_simulation)

#define OMAnim__DESIGN_MaquetteTapis_setMode_simulation_bool_SERIALIZE_RET_VAL
//#]

//## package _DESIGN

//## class MaquetteTapis
//#[ ignore
MaquetteTapis::toTapis_C::toTapis_C() : _p_(0) {
}

MaquetteTapis::toTapis_C::~toTapis_C() {
}

void MaquetteTapis::toTapis_C::connectMaquetteTapis(MaquetteTapis* part) {
    InBound.addItsDefaultProvidedInterface(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}

MaquetteTapis::p_maq_sim_C::p_maq_sim_C() : _p_(0) {
    itsBool_send_commandes_TrameCommandes_ProxyOperationInterface = NULL;
    itsInt_connect_to_maq_ProxyOperationInterface = NULL;
    itsTrameCapteurs_read_capteurs_ProxyOperationInterface = NULL;
    itsVoid_disconnect_ProxyOperationInterface = NULL;
}

MaquetteTapis::p_maq_sim_C::~p_maq_sim_C() {
    cleanUpRelations();
}

int MaquetteTapis::p_maq_sim_C::connect_to_maq() {
    int res = 0;
    if (itsInt_connect_to_maq_ProxyOperationInterface != NULL) {
        res = itsInt_connect_to_maq_ProxyOperationInterface->connect_to_maq();
    }
    return res;
}

void MaquetteTapis::p_maq_sim_C::disconnect() {
    
    if (itsVoid_disconnect_ProxyOperationInterface != NULL) {
        itsVoid_disconnect_ProxyOperationInterface->disconnect();
    }
    
}

bool_send_commandes_TrameCommandes_ProxyOperationInterface* MaquetteTapis::p_maq_sim_C::getItsBool_send_commandes_TrameCommandes_ProxyOperationInterface() {
    return this;
}

int_connect_to_maq_ProxyOperationInterface* MaquetteTapis::p_maq_sim_C::getItsInt_connect_to_maq_ProxyOperationInterface() {
    return this;
}

TrameCapteurs_read_capteurs_ProxyOperationInterface* MaquetteTapis::p_maq_sim_C::getItsTrameCapteurs_read_capteurs_ProxyOperationInterface() {
    return this;
}

void_disconnect_ProxyOperationInterface* MaquetteTapis::p_maq_sim_C::getItsVoid_disconnect_ProxyOperationInterface() {
    return this;
}

MaquetteTapis::p_maq_sim_C* MaquetteTapis::p_maq_sim_C::getOutBound() {
    return this;
}

TrameCapteurs MaquetteTapis::p_maq_sim_C::read_capteurs() {
    TrameCapteurs res;
    if (itsTrameCapteurs_read_capteurs_ProxyOperationInterface != NULL) {
        res = itsTrameCapteurs_read_capteurs_ProxyOperationInterface->read_capteurs();
    }
    return res;
}

bool MaquetteTapis::p_maq_sim_C::send_commandes(TrameCommandes commandes) {
    bool res = false;
    if (itsBool_send_commandes_TrameCommandes_ProxyOperationInterface != NULL) {
        res = itsBool_send_commandes_TrameCommandes_ProxyOperationInterface->send_commandes(commandes);
    }
    return res;
}

void MaquetteTapis::p_maq_sim_C::setItsBool_send_commandes_TrameCommandes_ProxyOperationInterface(bool_send_commandes_TrameCommandes_ProxyOperationInterface* p_bool_send_commandes_TrameCommandes_ProxyOperationInterface) {
    itsBool_send_commandes_TrameCommandes_ProxyOperationInterface = p_bool_send_commandes_TrameCommandes_ProxyOperationInterface;
}

void MaquetteTapis::p_maq_sim_C::setItsInt_connect_to_maq_ProxyOperationInterface(int_connect_to_maq_ProxyOperationInterface* p_int_connect_to_maq_ProxyOperationInterface) {
    itsInt_connect_to_maq_ProxyOperationInterface = p_int_connect_to_maq_ProxyOperationInterface;
}

void MaquetteTapis::p_maq_sim_C::setItsTrameCapteurs_read_capteurs_ProxyOperationInterface(TrameCapteurs_read_capteurs_ProxyOperationInterface* p_TrameCapteurs_read_capteurs_ProxyOperationInterface) {
    itsTrameCapteurs_read_capteurs_ProxyOperationInterface = p_TrameCapteurs_read_capteurs_ProxyOperationInterface;
}

void MaquetteTapis::p_maq_sim_C::setItsVoid_disconnect_ProxyOperationInterface(void_disconnect_ProxyOperationInterface* p_void_disconnect_ProxyOperationInterface) {
    itsVoid_disconnect_ProxyOperationInterface = p_void_disconnect_ProxyOperationInterface;
}

void MaquetteTapis::p_maq_sim_C::cleanUpRelations() {
    if(itsBool_send_commandes_TrameCommandes_ProxyOperationInterface != NULL)
        {
            itsBool_send_commandes_TrameCommandes_ProxyOperationInterface = NULL;
        }
    if(itsInt_connect_to_maq_ProxyOperationInterface != NULL)
        {
            itsInt_connect_to_maq_ProxyOperationInterface = NULL;
        }
    if(itsTrameCapteurs_read_capteurs_ProxyOperationInterface != NULL)
        {
            itsTrameCapteurs_read_capteurs_ProxyOperationInterface = NULL;
        }
    if(itsVoid_disconnect_ProxyOperationInterface != NULL)
        {
            itsVoid_disconnect_ProxyOperationInterface = NULL;
        }
}

MaquetteTapis::p_Commandes_C::p_Commandes_C() : _p_(0) {
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

MaquetteTapis::p_Commandes_C::~p_Commandes_C() {
    cleanUpRelations();
}

void MaquetteTapis::p_Commandes_C::arreterA() {
    
    if (itsVoid_arreterA_ProxyOperationInterface != NULL) {
        itsVoid_arreterA_ProxyOperationInterface->arreterA();
    }
    
}

void MaquetteTapis::p_Commandes_C::arreterB() {
    
    if (itsVoid_arreterB_ProxyOperationInterface != NULL) {
        itsVoid_arreterB_ProxyOperationInterface->arreterB();
    }
    
}

void MaquetteTapis::p_Commandes_C::arreterC() {
    
    if (itsVoid_arreterC_ProxyOperationInterface != NULL) {
        itsVoid_arreterC_ProxyOperationInterface->arreterC();
    }
    
}

void MaquetteTapis::p_Commandes_C::avancerA() {
    
    if (itsVoid_avancerA_ProxyOperationInterface != NULL) {
        itsVoid_avancerA_ProxyOperationInterface->avancerA();
    }
    
}

void MaquetteTapis::p_Commandes_C::avancerB() {
    
    if (itsVoid_avancerB_ProxyOperationInterface != NULL) {
        itsVoid_avancerB_ProxyOperationInterface->avancerB();
    }
    
}

void MaquetteTapis::p_Commandes_C::avancerC() {
    
    if (itsVoid_avancerC_ProxyOperationInterface != NULL) {
        itsVoid_avancerC_ProxyOperationInterface->avancerC();
    }
    
}

void MaquetteTapis::p_Commandes_C::connectMaquetteTapis(MaquetteTapis* part) {
    setItsVoid_avancerA_ProxyOperationInterface(part);
    setItsVoid_arreterA_ProxyOperationInterface(part);
    setItsVoid_reculerA_ProxyOperationInterface(part);
    setItsVoid_avancerC_ProxyOperationInterface(part);
    setItsVoid_arreterC_ProxyOperationInterface(part);
    setItsVoid_reculerC_ProxyOperationInterface(part);
    setItsVoid_griffeA_ProxyOperationInterface(part);
    setItsVoid_griffeB_ProxyOperationInterface(part);
    setItsVoid_avancerB_ProxyOperationInterface(part);
    setItsVoid_arreterB_ProxyOperationInterface(part);
    setItsVoid_reculerB_ProxyOperationInterface(part);
    
}

void_arreterA_ProxyOperationInterface* MaquetteTapis::p_Commandes_C::getItsVoid_arreterA_ProxyOperationInterface() {
    return this;
}

void_arreterB_ProxyOperationInterface* MaquetteTapis::p_Commandes_C::getItsVoid_arreterB_ProxyOperationInterface() {
    return this;
}

void_arreterC_ProxyOperationInterface* MaquetteTapis::p_Commandes_C::getItsVoid_arreterC_ProxyOperationInterface() {
    return this;
}

void_avancerA_ProxyOperationInterface* MaquetteTapis::p_Commandes_C::getItsVoid_avancerA_ProxyOperationInterface() {
    return this;
}

void_avancerB_ProxyOperationInterface* MaquetteTapis::p_Commandes_C::getItsVoid_avancerB_ProxyOperationInterface() {
    return this;
}

void_avancerC_ProxyOperationInterface* MaquetteTapis::p_Commandes_C::getItsVoid_avancerC_ProxyOperationInterface() {
    return this;
}

void_griffeA_ProxyOperationInterface* MaquetteTapis::p_Commandes_C::getItsVoid_griffeA_ProxyOperationInterface() {
    return this;
}

void_griffeB_ProxyOperationInterface* MaquetteTapis::p_Commandes_C::getItsVoid_griffeB_ProxyOperationInterface() {
    return this;
}

void_reculerA_ProxyOperationInterface* MaquetteTapis::p_Commandes_C::getItsVoid_reculerA_ProxyOperationInterface() {
    return this;
}

void_reculerB_ProxyOperationInterface* MaquetteTapis::p_Commandes_C::getItsVoid_reculerB_ProxyOperationInterface() {
    return this;
}

void_reculerC_ProxyOperationInterface* MaquetteTapis::p_Commandes_C::getItsVoid_reculerC_ProxyOperationInterface() {
    return this;
}

void MaquetteTapis::p_Commandes_C::griffeA() {
    
    if (itsVoid_griffeA_ProxyOperationInterface != NULL) {
        itsVoid_griffeA_ProxyOperationInterface->griffeA();
    }
    
}

void MaquetteTapis::p_Commandes_C::griffeB() {
    
    if (itsVoid_griffeB_ProxyOperationInterface != NULL) {
        itsVoid_griffeB_ProxyOperationInterface->griffeB();
    }
    
}

void MaquetteTapis::p_Commandes_C::reculerA() {
    
    if (itsVoid_reculerA_ProxyOperationInterface != NULL) {
        itsVoid_reculerA_ProxyOperationInterface->reculerA();
    }
    
}

void MaquetteTapis::p_Commandes_C::reculerB() {
    
    if (itsVoid_reculerB_ProxyOperationInterface != NULL) {
        itsVoid_reculerB_ProxyOperationInterface->reculerB();
    }
    
}

void MaquetteTapis::p_Commandes_C::reculerC() {
    
    if (itsVoid_reculerC_ProxyOperationInterface != NULL) {
        itsVoid_reculerC_ProxyOperationInterface->reculerC();
    }
    
}

void MaquetteTapis::p_Commandes_C::setItsVoid_arreterA_ProxyOperationInterface(void_arreterA_ProxyOperationInterface* p_void_arreterA_ProxyOperationInterface) {
    itsVoid_arreterA_ProxyOperationInterface = p_void_arreterA_ProxyOperationInterface;
}

void MaquetteTapis::p_Commandes_C::setItsVoid_arreterB_ProxyOperationInterface(void_arreterB_ProxyOperationInterface* p_void_arreterB_ProxyOperationInterface) {
    itsVoid_arreterB_ProxyOperationInterface = p_void_arreterB_ProxyOperationInterface;
}

void MaquetteTapis::p_Commandes_C::setItsVoid_arreterC_ProxyOperationInterface(void_arreterC_ProxyOperationInterface* p_void_arreterC_ProxyOperationInterface) {
    itsVoid_arreterC_ProxyOperationInterface = p_void_arreterC_ProxyOperationInterface;
}

void MaquetteTapis::p_Commandes_C::setItsVoid_avancerA_ProxyOperationInterface(void_avancerA_ProxyOperationInterface* p_void_avancerA_ProxyOperationInterface) {
    itsVoid_avancerA_ProxyOperationInterface = p_void_avancerA_ProxyOperationInterface;
}

void MaquetteTapis::p_Commandes_C::setItsVoid_avancerB_ProxyOperationInterface(void_avancerB_ProxyOperationInterface* p_void_avancerB_ProxyOperationInterface) {
    itsVoid_avancerB_ProxyOperationInterface = p_void_avancerB_ProxyOperationInterface;
}

void MaquetteTapis::p_Commandes_C::setItsVoid_avancerC_ProxyOperationInterface(void_avancerC_ProxyOperationInterface* p_void_avancerC_ProxyOperationInterface) {
    itsVoid_avancerC_ProxyOperationInterface = p_void_avancerC_ProxyOperationInterface;
}

void MaquetteTapis::p_Commandes_C::setItsVoid_griffeA_ProxyOperationInterface(void_griffeA_ProxyOperationInterface* p_void_griffeA_ProxyOperationInterface) {
    itsVoid_griffeA_ProxyOperationInterface = p_void_griffeA_ProxyOperationInterface;
}

void MaquetteTapis::p_Commandes_C::setItsVoid_griffeB_ProxyOperationInterface(void_griffeB_ProxyOperationInterface* p_void_griffeB_ProxyOperationInterface) {
    itsVoid_griffeB_ProxyOperationInterface = p_void_griffeB_ProxyOperationInterface;
}

void MaquetteTapis::p_Commandes_C::setItsVoid_reculerA_ProxyOperationInterface(void_reculerA_ProxyOperationInterface* p_void_reculerA_ProxyOperationInterface) {
    itsVoid_reculerA_ProxyOperationInterface = p_void_reculerA_ProxyOperationInterface;
}

void MaquetteTapis::p_Commandes_C::setItsVoid_reculerB_ProxyOperationInterface(void_reculerB_ProxyOperationInterface* p_void_reculerB_ProxyOperationInterface) {
    itsVoid_reculerB_ProxyOperationInterface = p_void_reculerB_ProxyOperationInterface;
}

void MaquetteTapis::p_Commandes_C::setItsVoid_reculerC_ProxyOperationInterface(void_reculerC_ProxyOperationInterface* p_void_reculerC_ProxyOperationInterface) {
    itsVoid_reculerC_ProxyOperationInterface = p_void_reculerC_ProxyOperationInterface;
}

void MaquetteTapis::p_Commandes_C::cleanUpRelations() {
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

MaquetteTapis::p_MaqTapisReelIO_C::p_MaqTapisReelIO_C() : _p_(0) {
    itsBool_send_commandes_TrameCommandes_ProxyOperationInterface = NULL;
    itsInt_connect_to_maq_ProxyOperationInterface = NULL;
    itsTrameCapteurs_read_capteurs_ProxyOperationInterface = NULL;
    itsVoid_disconnect_ProxyOperationInterface = NULL;
}

MaquetteTapis::p_MaqTapisReelIO_C::~p_MaqTapisReelIO_C() {
    cleanUpRelations();
}

int MaquetteTapis::p_MaqTapisReelIO_C::connect_to_maq() {
    int res = 0;
    if (itsInt_connect_to_maq_ProxyOperationInterface != NULL) {
        res = itsInt_connect_to_maq_ProxyOperationInterface->connect_to_maq();
    }
    return res;
}

void MaquetteTapis::p_MaqTapisReelIO_C::disconnect() {
    
    if (itsVoid_disconnect_ProxyOperationInterface != NULL) {
        itsVoid_disconnect_ProxyOperationInterface->disconnect();
    }
    
}

bool_send_commandes_TrameCommandes_ProxyOperationInterface* MaquetteTapis::p_MaqTapisReelIO_C::getItsBool_send_commandes_TrameCommandes_ProxyOperationInterface() {
    return this;
}

int_connect_to_maq_ProxyOperationInterface* MaquetteTapis::p_MaqTapisReelIO_C::getItsInt_connect_to_maq_ProxyOperationInterface() {
    return this;
}

TrameCapteurs_read_capteurs_ProxyOperationInterface* MaquetteTapis::p_MaqTapisReelIO_C::getItsTrameCapteurs_read_capteurs_ProxyOperationInterface() {
    return this;
}

void_disconnect_ProxyOperationInterface* MaquetteTapis::p_MaqTapisReelIO_C::getItsVoid_disconnect_ProxyOperationInterface() {
    return this;
}

MaquetteTapis::p_MaqTapisReelIO_C* MaquetteTapis::p_MaqTapisReelIO_C::getOutBound() {
    return this;
}

TrameCapteurs MaquetteTapis::p_MaqTapisReelIO_C::read_capteurs() {
    TrameCapteurs res;
    if (itsTrameCapteurs_read_capteurs_ProxyOperationInterface != NULL) {
        res = itsTrameCapteurs_read_capteurs_ProxyOperationInterface->read_capteurs();
    }
    return res;
}

bool MaquetteTapis::p_MaqTapisReelIO_C::send_commandes(TrameCommandes commandes) {
    bool res = false;
    if (itsBool_send_commandes_TrameCommandes_ProxyOperationInterface != NULL) {
        res = itsBool_send_commandes_TrameCommandes_ProxyOperationInterface->send_commandes(commandes);
    }
    return res;
}

void MaquetteTapis::p_MaqTapisReelIO_C::setItsBool_send_commandes_TrameCommandes_ProxyOperationInterface(bool_send_commandes_TrameCommandes_ProxyOperationInterface* p_bool_send_commandes_TrameCommandes_ProxyOperationInterface) {
    itsBool_send_commandes_TrameCommandes_ProxyOperationInterface = p_bool_send_commandes_TrameCommandes_ProxyOperationInterface;
}

void MaquetteTapis::p_MaqTapisReelIO_C::setItsInt_connect_to_maq_ProxyOperationInterface(int_connect_to_maq_ProxyOperationInterface* p_int_connect_to_maq_ProxyOperationInterface) {
    itsInt_connect_to_maq_ProxyOperationInterface = p_int_connect_to_maq_ProxyOperationInterface;
}

void MaquetteTapis::p_MaqTapisReelIO_C::setItsTrameCapteurs_read_capteurs_ProxyOperationInterface(TrameCapteurs_read_capteurs_ProxyOperationInterface* p_TrameCapteurs_read_capteurs_ProxyOperationInterface) {
    itsTrameCapteurs_read_capteurs_ProxyOperationInterface = p_TrameCapteurs_read_capteurs_ProxyOperationInterface;
}

void MaquetteTapis::p_MaqTapisReelIO_C::setItsVoid_disconnect_ProxyOperationInterface(void_disconnect_ProxyOperationInterface* p_void_disconnect_ProxyOperationInterface) {
    itsVoid_disconnect_ProxyOperationInterface = p_void_disconnect_ProxyOperationInterface;
}

void MaquetteTapis::p_MaqTapisReelIO_C::cleanUpRelations() {
    if(itsBool_send_commandes_TrameCommandes_ProxyOperationInterface != NULL)
        {
            itsBool_send_commandes_TrameCommandes_ProxyOperationInterface = NULL;
        }
    if(itsInt_connect_to_maq_ProxyOperationInterface != NULL)
        {
            itsInt_connect_to_maq_ProxyOperationInterface = NULL;
        }
    if(itsTrameCapteurs_read_capteurs_ProxyOperationInterface != NULL)
        {
            itsTrameCapteurs_read_capteurs_ProxyOperationInterface = NULL;
        }
    if(itsVoid_disconnect_ProxyOperationInterface != NULL)
        {
            itsVoid_disconnect_ProxyOperationInterface = NULL;
        }
}
//#]

MaquetteTapis::MaquetteTapis(IOxfActive* theActiveContext) : mode_reel(false), mode_simulation(false), reel_connected(false), sim_connected(false) {
    NOTIFY_REACTIVE_CONSTRUCTOR(MaquetteTapis, MaquetteTapis(), 0, _DESIGN_MaquetteTapis_MaquetteTapis_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

MaquetteTapis::~MaquetteTapis() {
    NOTIFY_DESTRUCTOR(~MaquetteTapis, true);
    cancelTimeouts();
}

void MaquetteTapis::arreterA() {
    NOTIFY_OPERATION(arreterA, arreterA(), 0, _DESIGN_MaquetteTapis_arreterA_SERIALIZE);
    //#[ operation arreterA()
    commandes.mava = 0; 
    commandes.mara = 0;
    //#]
}

void MaquetteTapis::arreterB() {
    NOTIFY_OPERATION(arreterB, arreterB(), 0, _DESIGN_MaquetteTapis_arreterB_SERIALIZE);
    //#[ operation arreterB()
    commandes.mavb = 0;
    commandes.marb = 0;
    //#]
}

void MaquetteTapis::arreterC() {
    NOTIFY_OPERATION(arreterC, arreterC(), 0, _DESIGN_MaquetteTapis_arreterC_SERIALIZE);
    //#[ operation arreterC()
    commandes.mavc = 0;
    commandes.marc = 0;
    //#]
}

void MaquetteTapis::avancerA() {
    NOTIFY_OPERATION(avancerA, avancerA(), 0, _DESIGN_MaquetteTapis_avancerA_SERIALIZE);
    //#[ operation avancerA()
    commandes.mava = 1; 
    commandes.mara = 0; 
    //#]
}

void MaquetteTapis::avancerB() {
    NOTIFY_OPERATION(avancerB, avancerB(), 0, _DESIGN_MaquetteTapis_avancerB_SERIALIZE);
    //#[ operation avancerB()
    commandes.mavb = 1;
    commandes.marb = 0;
    //#]
}

void MaquetteTapis::avancerC() {
    NOTIFY_OPERATION(avancerC, avancerC(), 0, _DESIGN_MaquetteTapis_avancerC_SERIALIZE);
    //#[ operation avancerC()
    commandes.mavc = 1;
    commandes.marc = 0;
    //#]
}

void MaquetteTapis::griffeA() {
    NOTIFY_OPERATION(griffeA, griffeA(), 0, _DESIGN_MaquetteTapis_griffeA_SERIALIZE);
    //#[ operation griffeA()
    commandes.ev = 1;
    //#]
}

void MaquetteTapis::griffeB() {
    NOTIFY_OPERATION(griffeB, griffeB(), 0, _DESIGN_MaquetteTapis_griffeB_SERIALIZE);
    //#[ operation griffeB()
    commandes.ev = 0;
    //#]
}

void MaquetteTapis::reculerA() {
    NOTIFY_OPERATION(reculerA, reculerA(), 0, _DESIGN_MaquetteTapis_reculerA_SERIALIZE);
    //#[ operation reculerA()
    commandes.mava = 0; 
    commandes.mara = 1;
    //#]
}

void MaquetteTapis::reculerB() {
    NOTIFY_OPERATION(reculerB, reculerB(), 0, _DESIGN_MaquetteTapis_reculerB_SERIALIZE);
    //#[ operation reculerB()
    commandes.mavb = 0;
    commandes.marb = 1;
    //#]
}

void MaquetteTapis::reculerC() {
    NOTIFY_OPERATION(reculerC, reculerC(), 0, _DESIGN_MaquetteTapis_reculerC_SERIALIZE);
    //#[ operation reculerC()
    commandes.mavc = 0;
    commandes.marc = 1;
    //#]
}

void MaquetteTapis::reset_commandes() {
    NOTIFY_OPERATION(reset_commandes, reset_commandes(), 0, _DESIGN_MaquetteTapis_reset_commandes_SERIALIZE);
    //#[ operation reset_commandes()
    //printf ("MAQ_TAPIS : reset donnees de la commande...\n");
    
    	commandes.mava = 0; 
    	commandes.mara = 0; 
    
    	commandes.mavb = 0; 
    	commandes.marb = 0; 
    	
    	commandes.mavc = 0; 
    	commandes.marc = 0; 
    
        commandes.ev = 0; 
        
        
    
    
    //#]
}

MaquetteTapis::toTapis_C* MaquetteTapis::getToTapis() const {
    return (MaquetteTapis::toTapis_C*) &toTapis;
}

MaquetteTapis::toTapis_C* MaquetteTapis::get_toTapis() const {
    return (MaquetteTapis::toTapis_C*) &toTapis;
}

MaquetteTapis::p_maq_sim_C* MaquetteTapis::getP_maq_sim() const {
    return (MaquetteTapis::p_maq_sim_C*) &p_maq_sim;
}

MaquetteTapis::p_maq_sim_C* MaquetteTapis::get_p_maq_sim() const {
    return (MaquetteTapis::p_maq_sim_C*) &p_maq_sim;
}

MaquetteTapis::p_Commandes_C* MaquetteTapis::getP_Commandes() const {
    return (MaquetteTapis::p_Commandes_C*) &p_Commandes;
}

MaquetteTapis::p_Commandes_C* MaquetteTapis::get_p_Commandes() const {
    return (MaquetteTapis::p_Commandes_C*) &p_Commandes;
}

MaquetteTapis::p_MaqTapisReelIO_C* MaquetteTapis::getP_MaqTapisReelIO() const {
    return (MaquetteTapis::p_MaqTapisReelIO_C*) &p_MaqTapisReelIO;
}

MaquetteTapis::p_MaqTapisReelIO_C* MaquetteTapis::get_p_MaqTapisReelIO() const {
    return (MaquetteTapis::p_MaqTapisReelIO_C*) &p_MaqTapisReelIO;
}

TrameCapteurs MaquetteTapis::getCapteurs() const {
    return capteurs;
}

void MaquetteTapis::setCapteurs(TrameCapteurs p_capteurs) {
    capteurs = p_capteurs;
}

TrameCommandes MaquetteTapis::getCommandes() const {
    return commandes;
}

void MaquetteTapis::setCommandes(TrameCommandes p_commandes) {
    commandes = p_commandes;
}

bool MaquetteTapis::getMode_reel() const {
    return mode_reel;
}

void MaquetteTapis::setMode_reel(bool p_mode_reel) {
    mode_reel = p_mode_reel;
    NOTIFY_SET_OPERATION;
}

bool MaquetteTapis::getMode_simulation() const {
    return mode_simulation;
}

void MaquetteTapis::setMode_simulation(bool p_mode_simulation) {
    mode_simulation = p_mode_simulation;
    NOTIFY_SET_OPERATION;
}

bool MaquetteTapis::getReel_connected() const {
    return reel_connected;
}

void MaquetteTapis::setReel_connected(bool p_reel_connected) {
    reel_connected = p_reel_connected;
}

bool MaquetteTapis::getSim_connected() const {
    return sim_connected;
}

void MaquetteTapis::setSim_connected(bool p_sim_connected) {
    sim_connected = p_sim_connected;
}

bool MaquetteTapis::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void MaquetteTapis::initRelations() {
    if (get_toTapis() != NULL) {
        get_toTapis()->connectMaquetteTapis(this);
    }
    if (get_p_Commandes() != NULL) {
        get_p_Commandes()->connectMaquetteTapis(this);
    }
}

void MaquetteTapis::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
}

void MaquetteTapis::cancelTimeouts() {
    cancel(rootState_timeout);
}

bool MaquetteTapis::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

void MaquetteTapis::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.idle");
        pushNullTransition();
        rootState_subState = idle;
        rootState_active = idle;
        //#[ state idle.(Entry) 
        reset_commandes();
        //#]
        rootState_timeout = scheduleTimeout(500, "ROOT.idle");
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus MaquetteTapis::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State idle
        case idle:
        {
            res = idle_handleEvent();
        }
        break;
        // State sim_dialog
        case sim_dialog:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("2");
                            popNullTransition();
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.sim_dialog");
                            //#[ transition 2 
                            p_maq_sim.send_commandes(commandes);
                            capteurs = p_maq_sim.read_capteurs();
                            
                            //Tapis A
                            if(capteurs.deba == 1) MULTICAST_GEN(toTapis,evDEBA);
                            if(capteurs.mia == 1) MULTICAST_GEN(toTapis,evMIA);
                            if(capteurs.fina == 1) MULTICAST_GEN(toTapis,evFINA);
                            if(capteurs.dca == 1) MULTICAST_GEN(toTapis,evDCA);
                            
                            //Tapis b
                            if(capteurs.debb == 1) MULTICAST_GEN(toTapis,evDEBB);
                            if(capteurs.mib == 1) MULTICAST_GEN(toTapis,evMIB);
                            if(capteurs.finb == 1) MULTICAST_GEN(toTapis,evFINB);
                            if(capteurs.dcb == 1) MULTICAST_GEN(toTapis,evDCB);
                            
                            //Griffe
                            if(capteurs.versa == 1) MULTICAST_GEN(toTapis,evVERSA);
                            if(capteurs.versb == 1) MULTICAST_GEN(toTapis,evVERSB);
                            
                            //TapisC
                            if(capteurs.debc == 1) MULTICAST_GEN(toTapis,evDEBC);
                            if(capteurs.finc == 1) MULTICAST_GEN(toTapis,evFINC);
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.sim_dialog");
                            pushNullTransition();
                            rootState_subState = sim_dialog;
                            rootState_active = sim_dialog;
                            rootState_timeout = scheduleTimeout(100, "ROOT.sim_dialog");
                            NOTIFY_TRANSITION_TERMINATED("2");
                            res = eventConsumed;
                        }
                }
            else if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 6 
                    if(!mode_simulation)
                        {
                            NOTIFY_TRANSITION_STARTED("6");
                            popNullTransition();
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.sim_dialog");
                            //#[ transition 6 
                            p_maq_sim.disconnect();
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.idle");
                            pushNullTransition();
                            rootState_subState = idle;
                            rootState_active = idle;
                            //#[ state idle.(Entry) 
                            reset_commandes();
                            //#]
                            rootState_timeout = scheduleTimeout(500, "ROOT.idle");
                            NOTIFY_TRANSITION_TERMINATED("6");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State sim_connecting
        case sim_connecting:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("4");
                            popNullTransition();
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.sim_connecting");
                            NOTIFY_STATE_ENTERED("ROOT.idle");
                            pushNullTransition();
                            rootState_subState = idle;
                            rootState_active = idle;
                            //#[ state idle.(Entry) 
                            reset_commandes();
                            //#]
                            rootState_timeout = scheduleTimeout(500, "ROOT.idle");
                            NOTIFY_TRANSITION_TERMINATED("4");
                            res = eventConsumed;
                        }
                }
            else if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 3 
                    if(sim_connected)
                        {
                            NOTIFY_TRANSITION_STARTED("3");
                            popNullTransition();
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.sim_connecting");
                            NOTIFY_STATE_ENTERED("ROOT.sim_dialog");
                            pushNullTransition();
                            rootState_subState = sim_dialog;
                            rootState_active = sim_dialog;
                            rootState_timeout = scheduleTimeout(100, "ROOT.sim_dialog");
                            NOTIFY_TRANSITION_TERMINATED("3");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State reel_connecting
        case reel_connecting:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("9");
                            popNullTransition();
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.reel_connecting");
                            NOTIFY_STATE_ENTERED("ROOT.idle");
                            pushNullTransition();
                            rootState_subState = idle;
                            rootState_active = idle;
                            //#[ state idle.(Entry) 
                            reset_commandes();
                            //#]
                            rootState_timeout = scheduleTimeout(500, "ROOT.idle");
                            NOTIFY_TRANSITION_TERMINATED("9");
                            res = eventConsumed;
                        }
                }
            else if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 8 
                    if(reel_connected)
                        {
                            NOTIFY_TRANSITION_STARTED("8");
                            popNullTransition();
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.reel_connecting");
                            NOTIFY_STATE_ENTERED("ROOT.reel_dialog");
                            pushNullTransition();
                            rootState_subState = reel_dialog;
                            rootState_active = reel_dialog;
                            rootState_timeout = scheduleTimeout(100, "ROOT.reel_dialog");
                            NOTIFY_TRANSITION_TERMINATED("8");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State reel_dialog
        case reel_dialog:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("11");
                            popNullTransition();
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.reel_dialog");
                            //#[ transition 11 
                            p_MaqTapisReelIO.send_commandes(commandes);
                            capteurs = p_MaqTapisReelIO.read_capteurs();
                            
                            //Tapis A
                            if(capteurs.deba == 1) MULTICAST_GEN(toTapis,evDEBA);
                            if(capteurs.mia == 1) MULTICAST_GEN(toTapis,evMIA);
                            if(capteurs.fina == 1) MULTICAST_GEN(toTapis,evFINA);
                            if(capteurs.dca == 1) MULTICAST_GEN(toTapis,evDCA);
                            
                            //Tapis b
                            if(capteurs.debb == 1) MULTICAST_GEN(toTapis,evDEBB);
                            if(capteurs.mib == 1) MULTICAST_GEN(toTapis,evMIB);
                            if(capteurs.finb == 1) MULTICAST_GEN(toTapis,evFINB);
                            if(capteurs.dcb == 1) MULTICAST_GEN(toTapis,evDCB);
                            
                            //Griffe
                            if(capteurs.versa == 1) MULTICAST_GEN(toTapis,evVERSA);
                            if(capteurs.versb == 1) MULTICAST_GEN(toTapis,evVERSB);
                            
                            //TapisC
                            if(capteurs.debc == 1) MULTICAST_GEN(toTapis,evDEBC);
                            if(capteurs.finc == 1) MULTICAST_GEN(toTapis,evFINC);
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.reel_dialog");
                            pushNullTransition();
                            rootState_subState = reel_dialog;
                            rootState_active = reel_dialog;
                            rootState_timeout = scheduleTimeout(100, "ROOT.reel_dialog");
                            NOTIFY_TRANSITION_TERMINATED("11");
                            res = eventConsumed;
                        }
                }
            else if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 10 
                    if(!mode_reel)
                        {
                            NOTIFY_TRANSITION_STARTED("10");
                            popNullTransition();
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.reel_dialog");
                            //#[ transition 10 
                            p_MaqTapisReelIO.disconnect();
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.idle");
                            pushNullTransition();
                            rootState_subState = idle;
                            rootState_active = idle;
                            //#[ state idle.(Entry) 
                            reset_commandes();
                            //#]
                            rootState_timeout = scheduleTimeout(500, "ROOT.idle");
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

IOxfReactive::TakeEventStatus MaquetteTapis::idle_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
        {
            if(getCurrentEvent() == rootState_timeout)
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    popNullTransition();
                    cancel(rootState_timeout);
                    NOTIFY_STATE_EXITED("ROOT.idle");
                    NOTIFY_STATE_ENTERED("ROOT.idle");
                    pushNullTransition();
                    rootState_subState = idle;
                    rootState_active = idle;
                    //#[ state idle.(Entry) 
                    reset_commandes();
                    //#]
                    rootState_timeout = scheduleTimeout(500, "ROOT.idle");
                    NOTIFY_TRANSITION_TERMINATED("5");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 1 
            if(mode_simulation)
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    popNullTransition();
                    cancel(rootState_timeout);
                    NOTIFY_STATE_EXITED("ROOT.idle");
                    //#[ transition 1 
                    sim_connected = p_maq_sim.connect_to_maq();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.sim_connecting");
                    pushNullTransition();
                    rootState_subState = sim_connecting;
                    rootState_active = sim_connecting;
                    rootState_timeout = scheduleTimeout(1000, "ROOT.sim_connecting");
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            else
                {
                    //## transition 7 
                    if(mode_reel)
                        {
                            NOTIFY_TRANSITION_STARTED("7");
                            popNullTransition();
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.idle");
                            //#[ transition 7 
                            reel_connected = p_MaqTapisReelIO.connect_to_maq();
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.reel_connecting");
                            pushNullTransition();
                            rootState_subState = reel_connecting;
                            rootState_active = reel_connecting;
                            rootState_timeout = scheduleTimeout(1000, "ROOT.reel_connecting");
                            NOTIFY_TRANSITION_TERMINATED("7");
                            res = eventConsumed;
                        }
                }
        }
    
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedMaquetteTapis::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("capteurs", UNKNOWN2STRING(myReal->capteurs));
    aomsAttributes->addAttribute("commandes", UNKNOWN2STRING(myReal->commandes));
    aomsAttributes->addAttribute("mode_simulation", x2String(myReal->mode_simulation));
    aomsAttributes->addAttribute("sim_connected", x2String(myReal->sim_connected));
    aomsAttributes->addAttribute("mode_reel", x2String(myReal->mode_reel));
    aomsAttributes->addAttribute("reel_connected", x2String(myReal->reel_connected));
}

void OMAnimatedMaquetteTapis::serializeRelations(AOMSRelations* aomsRelations) const {
}

void OMAnimatedMaquetteTapis::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case MaquetteTapis::idle:
        {
            idle_serializeStates(aomsState);
        }
        break;
        case MaquetteTapis::sim_dialog:
        {
            sim_dialog_serializeStates(aomsState);
        }
        break;
        case MaquetteTapis::sim_connecting:
        {
            sim_connecting_serializeStates(aomsState);
        }
        break;
        case MaquetteTapis::reel_connecting:
        {
            reel_connecting_serializeStates(aomsState);
        }
        break;
        case MaquetteTapis::reel_dialog:
        {
            reel_dialog_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedMaquetteTapis::sim_dialog_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sim_dialog");
}

void OMAnimatedMaquetteTapis::sim_connecting_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sim_connecting");
}

void OMAnimatedMaquetteTapis::reel_dialog_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.reel_dialog");
}

void OMAnimatedMaquetteTapis::reel_connecting_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.reel_connecting");
}

void OMAnimatedMaquetteTapis::idle_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.idle");
}
//#]

IMPLEMENT_REACTIVE_META_P(MaquetteTapis, _DESIGN, _DESIGN, false, OMAnimatedMaquetteTapis)

IMPLEMENT_META_OP(OMAnimatedMaquetteTapis, _DESIGN_MaquetteTapis_setMode_reel_bool, "setMode_reel", FALSE, "setMode_reel(bool)", 1)

IMPLEMENT_OP_CALL(_DESIGN_MaquetteTapis_setMode_reel_bool, MaquetteTapis, setMode_reel(p_mode_reel), NO_OP())

IMPLEMENT_META_OP(OMAnimatedMaquetteTapis, _DESIGN_MaquetteTapis_setMode_simulation_bool, "setMode_simulation", FALSE, "setMode_simulation(bool)", 1)

IMPLEMENT_OP_CALL(_DESIGN_MaquetteTapis_setMode_simulation_bool, MaquetteTapis, setMode_simulation(p_mode_simulation), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: CodesGeneres\AnimationConfig\MaquetteTapis.cpp
*********************************************************************/
