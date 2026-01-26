/********************************************************************
	Rhapsody	: 9.0.2 
	Login		: kumarass
	Component	: CodesGeneres 
	Configuration 	: AnimationConfig
	Model Element	: MAIN_SysConvoyage
//!	Generated Date	: Mon, 26, Jan 2026  
	File Path	: CodesGeneres\AnimationConfig\MAIN_SysConvoyage.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "MAIN_SysConvoyage.h"
//#[ ignore
#define _DESIGN_MAIN_SysConvoyage_MAIN_SysConvoyage_SERIALIZE OM_NO_OP
//#]

//## package _DESIGN

//## class MAIN_SysConvoyage
MAIN_SysConvoyage::MAIN_SysConvoyage(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(MAIN_SysConvoyage, MAIN_SysConvoyage(), 0, _DESIGN_MAIN_SysConvoyage_MAIN_SysConvoyage_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            itsMaqTapisReelIO.setShouldDelete(false);
        }
        {
            itsMaqTapisSimIO.setShouldDelete(false);
        }
        {
            itsMaquetteTapis.setShouldDelete(false);
        }
        {
            itsTapisA.setShouldDelete(false);
        }
        {
            itsTapisC.setShouldDelete(false);
        }
        {
            itsGriffe.setShouldDelete(false);
        }
        {
            itsTapisB.setShouldDelete(false);
        }
    }
    initRelations();
}

MAIN_SysConvoyage::~MAIN_SysConvoyage() {
    NOTIFY_DESTRUCTOR(~MAIN_SysConvoyage, true);
}

Griffe* MAIN_SysConvoyage::getItsGriffe() const {
    return (Griffe*) &itsGriffe;
}

MaqTapisReelIO* MAIN_SysConvoyage::getItsMaqTapisReelIO() const {
    return (MaqTapisReelIO*) &itsMaqTapisReelIO;
}

MaqTapisSimIO* MAIN_SysConvoyage::getItsMaqTapisSimIO() const {
    return (MaqTapisSimIO*) &itsMaqTapisSimIO;
}

MaquetteTapis* MAIN_SysConvoyage::getItsMaquetteTapis() const {
    return (MaquetteTapis*) &itsMaquetteTapis;
}

TapisA* MAIN_SysConvoyage::getItsTapisA() const {
    return (TapisA*) &itsTapisA;
}

TapisB* MAIN_SysConvoyage::getItsTapisB() const {
    return (TapisB*) &itsTapisB;
}

TapisC* MAIN_SysConvoyage::getItsTapisC() const {
    return (TapisC*) &itsTapisC;
}

bool MAIN_SysConvoyage::startBehavior() {
    bool done = true;
    done &= itsGriffe.startBehavior();
    done &= itsMaqTapisReelIO.startBehavior();
    done &= itsMaqTapisSimIO.startBehavior();
    done &= itsMaquetteTapis.startBehavior();
    done &= itsTapisA.startBehavior();
    done &= itsTapisB.startBehavior();
    done &= itsTapisC.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void MAIN_SysConvoyage::initRelations() {
    {
        
        itsTapisA.get_fromMaquetteTapis()->setItsDefaultRequiredInterface(itsMaquetteTapis.get_toTapis()->getItsDefaultProvidedInterface());
        
    }{
        
        itsMaquetteTapis.get_toTapis()->addItsDefaultRequiredInterface(itsTapisA.get_fromMaquetteTapis()->getItsDefaultProvidedInterface());
        
    }
    {
        
        itsGriffe.get_fromMaquetteTapis()->setItsDefaultRequiredInterface(itsMaquetteTapis.get_toTapis()->getItsDefaultProvidedInterface());
        
    }{
        
        itsMaquetteTapis.get_toTapis()->addItsDefaultRequiredInterface(itsGriffe.get_fromMaquetteTapis()->getItsDefaultProvidedInterface());
        
    }
    {
        
        itsTapisC.get_fromMaquetteTapis()->setItsDefaultRequiredInterface(itsMaquetteTapis.get_toTapis()->getItsDefaultProvidedInterface());
        
    }{
        
        itsMaquetteTapis.get_toTapis()->addItsDefaultRequiredInterface(itsTapisC.get_fromMaquetteTapis()->getItsDefaultProvidedInterface());
        
    }
    {
        
        itsMaquetteTapis.get_toTapis()->addItsDefaultRequiredInterface(itsTapisB.get_fromMaquetteTapis()->getItsDefaultProvidedInterface());
        
    }{
        
        itsTapisB.get_fromMaquetteTapis()->setItsDefaultRequiredInterface(itsMaquetteTapis.get_toTapis()->getItsDefaultProvidedInterface());
        
    }
    {
        
        itsTapisA.get_toB()->setItsDefaultRequiredInterface(itsTapisB.get_fromA()->getItsDefaultProvidedInterface());
        
    }{
        
        itsTapisB.get_fromA()->setItsDefaultRequiredInterface(itsTapisA.get_toB()->getItsDefaultProvidedInterface());
        
    }
    {
        
        itsTapisB.get_toG()->setItsDefaultRequiredInterface(itsGriffe.get_fromB()->getItsDefaultProvidedInterface());
        
    }{
        
        itsGriffe.get_fromB()->setItsDefaultRequiredInterface(itsTapisB.get_toG()->getItsDefaultProvidedInterface());
        
    }
    {
        
        itsTapisA.get_fromB()->setItsDefaultRequiredInterface(itsTapisB.get_toA()->getItsDefaultProvidedInterface());
        
    }{
        
        itsTapisB.get_toA()->setItsDefaultRequiredInterface(itsTapisA.get_fromB()->getItsDefaultProvidedInterface());
        
    }
    {
        
        itsTapisA.get_toG()->setItsDefaultRequiredInterface(itsGriffe.get_fromA()->getItsDefaultProvidedInterface());
        
    }{
        
        itsGriffe.get_fromA()->setItsDefaultRequiredInterface(itsTapisA.get_toG()->getItsDefaultProvidedInterface());
        
    }
    {
        
        itsMaquetteTapis.get_p_maq_sim()->setItsBool_send_commandes_TrameCommandes_ProxyOperationInterface(itsMaqTapisSimIO.get_p_maq_sim()->getItsBool_send_commandes_TrameCommandes_ProxyOperationInterface());
        
        itsMaquetteTapis.get_p_maq_sim()->setItsTrameCapteurs_read_capteurs_ProxyOperationInterface(itsMaqTapisSimIO.get_p_maq_sim()->getItsTrameCapteurs_read_capteurs_ProxyOperationInterface());
        
        itsMaquetteTapis.get_p_maq_sim()->setItsInt_connect_to_maq_ProxyOperationInterface(itsMaqTapisSimIO.get_p_maq_sim()->getItsInt_connect_to_maq_ProxyOperationInterface());
        
        itsMaquetteTapis.get_p_maq_sim()->setItsVoid_disconnect_ProxyOperationInterface(itsMaqTapisSimIO.get_p_maq_sim()->getItsVoid_disconnect_ProxyOperationInterface());
        
    }
    {
        
        itsMaquetteTapis.get_p_MaqTapisReelIO()->setItsTrameCapteurs_read_capteurs_ProxyOperationInterface(itsMaqTapisReelIO.get_p_MaqTapisReelIO()->getItsTrameCapteurs_read_capteurs_ProxyOperationInterface());
        
        itsMaquetteTapis.get_p_MaqTapisReelIO()->setItsVoid_disconnect_ProxyOperationInterface(itsMaqTapisReelIO.get_p_MaqTapisReelIO()->getItsVoid_disconnect_ProxyOperationInterface());
        
        itsMaquetteTapis.get_p_MaqTapisReelIO()->setItsInt_connect_to_maq_ProxyOperationInterface(itsMaqTapisReelIO.get_p_MaqTapisReelIO()->getItsInt_connect_to_maq_ProxyOperationInterface());
        
        itsMaquetteTapis.get_p_MaqTapisReelIO()->setItsBool_send_commandes_TrameCommandes_ProxyOperationInterface(itsMaqTapisReelIO.get_p_MaqTapisReelIO()->getItsBool_send_commandes_TrameCommandes_ProxyOperationInterface());
        
    }
    {
        
        itsTapisA.get_p_Commandes()->setItsVoid_avancerA_ProxyOperationInterface(itsMaquetteTapis.get_p_Commandes()->getItsVoid_avancerA_ProxyOperationInterface());
        
        itsTapisA.get_p_Commandes()->setItsVoid_arreterA_ProxyOperationInterface(itsMaquetteTapis.get_p_Commandes()->getItsVoid_arreterA_ProxyOperationInterface());
        
        itsTapisA.get_p_Commandes()->setItsVoid_reculerA_ProxyOperationInterface(itsMaquetteTapis.get_p_Commandes()->getItsVoid_reculerA_ProxyOperationInterface());
        
        itsTapisA.get_p_Commandes()->setItsVoid_avancerC_ProxyOperationInterface(itsMaquetteTapis.get_p_Commandes()->getItsVoid_avancerC_ProxyOperationInterface());
        
        itsTapisA.get_p_Commandes()->setItsVoid_arreterC_ProxyOperationInterface(itsMaquetteTapis.get_p_Commandes()->getItsVoid_arreterC_ProxyOperationInterface());
        
        itsTapisA.get_p_Commandes()->setItsVoid_reculerC_ProxyOperationInterface(itsMaquetteTapis.get_p_Commandes()->getItsVoid_reculerC_ProxyOperationInterface());
        
        itsTapisA.get_p_Commandes()->setItsVoid_griffeA_ProxyOperationInterface(itsMaquetteTapis.get_p_Commandes()->getItsVoid_griffeA_ProxyOperationInterface());
        
        itsTapisA.get_p_Commandes()->setItsVoid_griffeB_ProxyOperationInterface(itsMaquetteTapis.get_p_Commandes()->getItsVoid_griffeB_ProxyOperationInterface());
        
        itsTapisA.get_p_Commandes()->setItsVoid_avancerB_ProxyOperationInterface(itsMaquetteTapis.get_p_Commandes()->getItsVoid_avancerB_ProxyOperationInterface());
        
        itsTapisA.get_p_Commandes()->setItsVoid_arreterB_ProxyOperationInterface(itsMaquetteTapis.get_p_Commandes()->getItsVoid_arreterB_ProxyOperationInterface());
        
        itsTapisA.get_p_Commandes()->setItsVoid_reculerB_ProxyOperationInterface(itsMaquetteTapis.get_p_Commandes()->getItsVoid_reculerB_ProxyOperationInterface());
        
    }
    {
        
        itsTapisC.get_p_Commandes()->setItsVoid_avancerA_ProxyOperationInterface(itsMaquetteTapis.get_p_Commandes()->getItsVoid_avancerA_ProxyOperationInterface());
        
        itsTapisC.get_p_Commandes()->setItsVoid_arreterA_ProxyOperationInterface(itsMaquetteTapis.get_p_Commandes()->getItsVoid_arreterA_ProxyOperationInterface());
        
        itsTapisC.get_p_Commandes()->setItsVoid_reculerA_ProxyOperationInterface(itsMaquetteTapis.get_p_Commandes()->getItsVoid_reculerA_ProxyOperationInterface());
        
        itsTapisC.get_p_Commandes()->setItsVoid_avancerC_ProxyOperationInterface(itsMaquetteTapis.get_p_Commandes()->getItsVoid_avancerC_ProxyOperationInterface());
        
        itsTapisC.get_p_Commandes()->setItsVoid_arreterC_ProxyOperationInterface(itsMaquetteTapis.get_p_Commandes()->getItsVoid_arreterC_ProxyOperationInterface());
        
        itsTapisC.get_p_Commandes()->setItsVoid_reculerC_ProxyOperationInterface(itsMaquetteTapis.get_p_Commandes()->getItsVoid_reculerC_ProxyOperationInterface());
        
        itsTapisC.get_p_Commandes()->setItsVoid_griffeA_ProxyOperationInterface(itsMaquetteTapis.get_p_Commandes()->getItsVoid_griffeA_ProxyOperationInterface());
        
        itsTapisC.get_p_Commandes()->setItsVoid_griffeB_ProxyOperationInterface(itsMaquetteTapis.get_p_Commandes()->getItsVoid_griffeB_ProxyOperationInterface());
        
        itsTapisC.get_p_Commandes()->setItsVoid_avancerB_ProxyOperationInterface(itsMaquetteTapis.get_p_Commandes()->getItsVoid_avancerB_ProxyOperationInterface());
        
        itsTapisC.get_p_Commandes()->setItsVoid_arreterB_ProxyOperationInterface(itsMaquetteTapis.get_p_Commandes()->getItsVoid_arreterB_ProxyOperationInterface());
        
        itsTapisC.get_p_Commandes()->setItsVoid_reculerB_ProxyOperationInterface(itsMaquetteTapis.get_p_Commandes()->getItsVoid_reculerB_ProxyOperationInterface());
        
    }
    {
        
        itsGriffe.get_p_Commandes()->setItsVoid_avancerA_ProxyOperationInterface(itsMaquetteTapis.get_p_Commandes()->getItsVoid_avancerA_ProxyOperationInterface());
        
        itsGriffe.get_p_Commandes()->setItsVoid_arreterA_ProxyOperationInterface(itsMaquetteTapis.get_p_Commandes()->getItsVoid_arreterA_ProxyOperationInterface());
        
        itsGriffe.get_p_Commandes()->setItsVoid_reculerA_ProxyOperationInterface(itsMaquetteTapis.get_p_Commandes()->getItsVoid_reculerA_ProxyOperationInterface());
        
        itsGriffe.get_p_Commandes()->setItsVoid_avancerC_ProxyOperationInterface(itsMaquetteTapis.get_p_Commandes()->getItsVoid_avancerC_ProxyOperationInterface());
        
        itsGriffe.get_p_Commandes()->setItsVoid_arreterC_ProxyOperationInterface(itsMaquetteTapis.get_p_Commandes()->getItsVoid_arreterC_ProxyOperationInterface());
        
        itsGriffe.get_p_Commandes()->setItsVoid_reculerC_ProxyOperationInterface(itsMaquetteTapis.get_p_Commandes()->getItsVoid_reculerC_ProxyOperationInterface());
        
        itsGriffe.get_p_Commandes()->setItsVoid_griffeA_ProxyOperationInterface(itsMaquetteTapis.get_p_Commandes()->getItsVoid_griffeA_ProxyOperationInterface());
        
        itsGriffe.get_p_Commandes()->setItsVoid_griffeB_ProxyOperationInterface(itsMaquetteTapis.get_p_Commandes()->getItsVoid_griffeB_ProxyOperationInterface());
        
        itsGriffe.get_p_Commandes()->setItsVoid_avancerB_ProxyOperationInterface(itsMaquetteTapis.get_p_Commandes()->getItsVoid_avancerB_ProxyOperationInterface());
        
        itsGriffe.get_p_Commandes()->setItsVoid_arreterB_ProxyOperationInterface(itsMaquetteTapis.get_p_Commandes()->getItsVoid_arreterB_ProxyOperationInterface());
        
        itsGriffe.get_p_Commandes()->setItsVoid_reculerB_ProxyOperationInterface(itsMaquetteTapis.get_p_Commandes()->getItsVoid_reculerB_ProxyOperationInterface());
        
    }
    {
        
        itsTapisB.get_p_Commandes()->setItsVoid_avancerA_ProxyOperationInterface(itsMaquetteTapis.get_p_Commandes()->getItsVoid_avancerA_ProxyOperationInterface());
        
        itsTapisB.get_p_Commandes()->setItsVoid_arreterA_ProxyOperationInterface(itsMaquetteTapis.get_p_Commandes()->getItsVoid_arreterA_ProxyOperationInterface());
        
        itsTapisB.get_p_Commandes()->setItsVoid_reculerA_ProxyOperationInterface(itsMaquetteTapis.get_p_Commandes()->getItsVoid_reculerA_ProxyOperationInterface());
        
        itsTapisB.get_p_Commandes()->setItsVoid_avancerC_ProxyOperationInterface(itsMaquetteTapis.get_p_Commandes()->getItsVoid_avancerC_ProxyOperationInterface());
        
        itsTapisB.get_p_Commandes()->setItsVoid_arreterC_ProxyOperationInterface(itsMaquetteTapis.get_p_Commandes()->getItsVoid_arreterC_ProxyOperationInterface());
        
        itsTapisB.get_p_Commandes()->setItsVoid_reculerC_ProxyOperationInterface(itsMaquetteTapis.get_p_Commandes()->getItsVoid_reculerC_ProxyOperationInterface());
        
        itsTapisB.get_p_Commandes()->setItsVoid_griffeA_ProxyOperationInterface(itsMaquetteTapis.get_p_Commandes()->getItsVoid_griffeA_ProxyOperationInterface());
        
        itsTapisB.get_p_Commandes()->setItsVoid_griffeB_ProxyOperationInterface(itsMaquetteTapis.get_p_Commandes()->getItsVoid_griffeB_ProxyOperationInterface());
        
        itsTapisB.get_p_Commandes()->setItsVoid_avancerB_ProxyOperationInterface(itsMaquetteTapis.get_p_Commandes()->getItsVoid_avancerB_ProxyOperationInterface());
        
        itsTapisB.get_p_Commandes()->setItsVoid_arreterB_ProxyOperationInterface(itsMaquetteTapis.get_p_Commandes()->getItsVoid_arreterB_ProxyOperationInterface());
        
        itsTapisB.get_p_Commandes()->setItsVoid_reculerB_ProxyOperationInterface(itsMaquetteTapis.get_p_Commandes()->getItsVoid_reculerB_ProxyOperationInterface());
        
    }
}

void MAIN_SysConvoyage::setActiveContext(IOxfActive* theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsMaquetteTapis.setActiveContext(theActiveContext, false);
        itsTapisA.setActiveContext(theActiveContext, false);
        itsTapisC.setActiveContext(theActiveContext, false);
        itsGriffe.setActiveContext(theActiveContext, false);
        itsTapisB.setActiveContext(theActiveContext, false);
    }
}

void MAIN_SysConvoyage::destroy() {
    itsGriffe.destroy();
    itsMaqTapisReelIO.destroy();
    itsMaqTapisSimIO.destroy();
    itsMaquetteTapis.destroy();
    itsTapisA.destroy();
    itsTapisB.destroy();
    itsTapisC.destroy();
    OMReactive::destroy();
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedMAIN_SysConvoyage::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsMaqTapisReelIO", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsMaqTapisReelIO);
    aomsRelations->addRelation("itsMaqTapisSimIO", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsMaqTapisSimIO);
    aomsRelations->addRelation("itsMaquetteTapis", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsMaquetteTapis);
    aomsRelations->addRelation("itsTapisA", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsTapisA);
    aomsRelations->addRelation("itsTapisC", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsTapisC);
    aomsRelations->addRelation("itsGriffe", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsGriffe);
    aomsRelations->addRelation("itsTapisB", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsTapisB);
}
//#]

IMPLEMENT_REACTIVE_META_SIMPLE_P(MAIN_SysConvoyage, _DESIGN, _DESIGN, false, OMAnimatedMAIN_SysConvoyage)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: CodesGeneres\AnimationConfig\MAIN_SysConvoyage.cpp
*********************************************************************/
