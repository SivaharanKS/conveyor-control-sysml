/********************************************************************
	Rhapsody	: 9.0.2 
	Login		: kumarass
	Component	: CodesGeneres 
	Configuration 	: AnimationConfig
	Model Element	: IHM
//!	Generated Date	: Tue, 23, Dec 2025  
	File Path	: CodesGeneres\AnimationConfig\IHM.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "IHM.h"
//#[ ignore
#define _ANALYSE_IHM_IHM_SERIALIZE OM_NO_OP
//#]

//## package _ANALYSE

//## actor IHM
IHM::IHM() {
    NOTIFY_CONSTRUCTOR(IHM, IHM(), 0, _ANALYSE_IHM_IHM_SERIALIZE);
}

IHM::~IHM() {
    NOTIFY_DESTRUCTOR(~IHM, true);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedIHM::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_META_P(IHM, _ANALYSE, _ANALYSE, false, OMAnimatedIHM)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: CodesGeneres\AnimationConfig\IHM.cpp
*********************************************************************/
