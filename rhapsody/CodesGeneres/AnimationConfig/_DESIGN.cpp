/********************************************************************
	Rhapsody	: 9.0.2 
	Login		: kumarass
	Component	: CodesGeneres 
	Configuration 	: AnimationConfig
	Model Element	: _DESIGN
//!	Generated Date	: Mon, 26, Jan 2026  
	File Path	: CodesGeneres\AnimationConfig\_DESIGN.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "_DESIGN.h"
//## auto_generated
#include "Griffe.h"
//## auto_generated
#include "MAIN_SysConvoyage.h"
//## auto_generated
#include "MaqTapisReelIO.h"
//## auto_generated
#include "MaqTapisSimIO.h"
//## auto_generated
#include "MaquetteIO.h"
//## auto_generated
#include "MaquetteTapis.h"
//## auto_generated
#include "TapisA.h"
//## auto_generated
#include "TapisB.h"
//## auto_generated
#include "TapisC.h"
//#[ ignore
#define evDisconnect_SERIALIZE OM_NO_OP

#define evDisconnect_UNSERIALIZE OM_NO_OP

#define evDisconnect_CONSTRUCTOR evDisconnect()

#define evDEBA_SERIALIZE OM_NO_OP

#define evDEBA_UNSERIALIZE OM_NO_OP

#define evDEBA_CONSTRUCTOR evDEBA()

#define evMIAS_SERIALIZE OM_NO_OP

#define evMIAS_UNSERIALIZE OM_NO_OP

#define evMIAS_CONSTRUCTOR evMIAS()

#define evMIA_SERIALIZE OM_NO_OP

#define evMIA_UNSERIALIZE OM_NO_OP

#define evMIA_CONSTRUCTOR evMIA()

#define evFINA_SERIALIZE OM_NO_OP

#define evFINA_UNSERIALIZE OM_NO_OP

#define evFINA_CONSTRUCTOR evFINA()

#define evVERSA_SERIALIZE OM_NO_OP

#define evVERSA_UNSERIALIZE OM_NO_OP

#define evVERSA_CONSTRUCTOR evVERSA()

#define evVERSB_SERIALIZE OM_NO_OP

#define evVERSB_UNSERIALIZE OM_NO_OP

#define evVERSB_CONSTRUCTOR evVERSB()

#define evDEBC_SERIALIZE OM_NO_OP

#define evDEBC_UNSERIALIZE OM_NO_OP

#define evDEBC_CONSTRUCTOR evDEBC()

#define evFINC_SERIALIZE OM_NO_OP

#define evFINC_UNSERIALIZE OM_NO_OP

#define evFINC_CONSTRUCTOR evFINC()

#define evVERSAS_SERIALIZE OM_NO_OP

#define evVERSAS_UNSERIALIZE OM_NO_OP

#define evVERSAS_CONSTRUCTOR evVERSAS()

#define evDCA_SERIALIZE OM_NO_OP

#define evDCA_UNSERIALIZE OM_NO_OP

#define evDCA_CONSTRUCTOR evDCA()

#define evDCB_SERIALIZE OM_NO_OP

#define evDCB_UNSERIALIZE OM_NO_OP

#define evDCB_CONSTRUCTOR evDCB()

#define evDEBB_SERIALIZE OM_NO_OP

#define evDEBB_UNSERIALIZE OM_NO_OP

#define evDEBB_CONSTRUCTOR evDEBB()

#define evMIB_SERIALIZE OM_NO_OP

#define evMIB_UNSERIALIZE OM_NO_OP

#define evMIB_CONSTRUCTOR evMIB()

#define evFINB_SERIALIZE OM_NO_OP

#define evFINB_UNSERIALIZE OM_NO_OP

#define evFINB_CONSTRUCTOR evFINB()

#define ev_SERIALIZE OM_NO_OP

#define ev_UNSERIALIZE OM_NO_OP

#define ev_CONSTRUCTOR ev()

#define evVERB_SERIALIZE OM_NO_OP

#define evVERB_UNSERIALIZE OM_NO_OP

#define evVERB_CONSTRUCTOR evVERB()

#define eventmessage_0_SERIALIZE OM_NO_OP

#define eventmessage_0_UNSERIALIZE OM_NO_OP

#define eventmessage_0_CONSTRUCTOR eventmessage_0()

#define evdebug_SERIALIZE OM_NO_OP

#define evdebug_UNSERIALIZE OM_NO_OP

#define evdebug_CONSTRUCTOR evdebug()

#define evReset_SERIALIZE OM_NO_OP

#define evReset_UNSERIALIZE OM_NO_OP

#define evReset_CONSTRUCTOR evReset()

#define evRUNA_SERIALIZE OM_NO_OP

#define evRUNA_UNSERIALIZE OM_NO_OP

#define evRUNA_CONSTRUCTOR evRUNA()

#define evNONRUNA_SERIALIZE OM_NO_OP

#define evNONRUNA_UNSERIALIZE OM_NO_OP

#define evNONRUNA_CONSTRUCTOR evNONRUNA()

#define evNONRUNB_SERIALIZE OM_NO_OP

#define evNONRUNB_UNSERIALIZE OM_NO_OP

#define evNONRUNB_CONSTRUCTOR evNONRUNB()

#define evRUNB_SERIALIZE OM_NO_OP

#define evRUNB_UNSERIALIZE OM_NO_OP

#define evRUNB_CONSTRUCTOR evRUNB()
//#]

//## package _DESIGN


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(_DESIGN, _DESIGN)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event evDisconnect()
evDisconnect::evDisconnect() {
    NOTIFY_EVENT_CONSTRUCTOR(evDisconnect)
    setId(evDisconnect__DESIGN_id);
}

bool evDisconnect::isTypeOf(const short id) const {
    return (evDisconnect__DESIGN_id==id);
}

IMPLEMENT_META_EVENT_P(evDisconnect, _DESIGN, _DESIGN, evDisconnect())

//## event evDEBA()
evDEBA::evDEBA() {
    NOTIFY_EVENT_CONSTRUCTOR(evDEBA)
    setId(evDEBA__DESIGN_id);
}

bool evDEBA::isTypeOf(const short id) const {
    return (evDEBA__DESIGN_id==id);
}

IMPLEMENT_META_EVENT_P(evDEBA, _DESIGN, _DESIGN, evDEBA())

//## event evMIAS()
evMIAS::evMIAS() {
    NOTIFY_EVENT_CONSTRUCTOR(evMIAS)
    setId(evMIAS__DESIGN_id);
}

bool evMIAS::isTypeOf(const short id) const {
    return (evMIAS__DESIGN_id==id);
}

IMPLEMENT_META_EVENT_P(evMIAS, _DESIGN, _DESIGN, evMIAS())

//## event evMIA()
evMIA::evMIA() {
    NOTIFY_EVENT_CONSTRUCTOR(evMIA)
    setId(evMIA__DESIGN_id);
}

bool evMIA::isTypeOf(const short id) const {
    return (evMIA__DESIGN_id==id);
}

IMPLEMENT_META_EVENT_P(evMIA, _DESIGN, _DESIGN, evMIA())

//## event evFINA()
evFINA::evFINA() {
    NOTIFY_EVENT_CONSTRUCTOR(evFINA)
    setId(evFINA__DESIGN_id);
}

bool evFINA::isTypeOf(const short id) const {
    return (evFINA__DESIGN_id==id);
}

IMPLEMENT_META_EVENT_P(evFINA, _DESIGN, _DESIGN, evFINA())

//## event evVERSA()
evVERSA::evVERSA() {
    NOTIFY_EVENT_CONSTRUCTOR(evVERSA)
    setId(evVERSA__DESIGN_id);
}

bool evVERSA::isTypeOf(const short id) const {
    return (evVERSA__DESIGN_id==id);
}

IMPLEMENT_META_EVENT_P(evVERSA, _DESIGN, _DESIGN, evVERSA())

//## event evVERSB()
evVERSB::evVERSB() {
    NOTIFY_EVENT_CONSTRUCTOR(evVERSB)
    setId(evVERSB__DESIGN_id);
}

bool evVERSB::isTypeOf(const short id) const {
    return (evVERSB__DESIGN_id==id);
}

IMPLEMENT_META_EVENT_P(evVERSB, _DESIGN, _DESIGN, evVERSB())

//## event evDEBC()
evDEBC::evDEBC() {
    NOTIFY_EVENT_CONSTRUCTOR(evDEBC)
    setId(evDEBC__DESIGN_id);
}

bool evDEBC::isTypeOf(const short id) const {
    return (evDEBC__DESIGN_id==id);
}

IMPLEMENT_META_EVENT_P(evDEBC, _DESIGN, _DESIGN, evDEBC())

//## event evFINC()
evFINC::evFINC() {
    NOTIFY_EVENT_CONSTRUCTOR(evFINC)
    setId(evFINC__DESIGN_id);
}

bool evFINC::isTypeOf(const short id) const {
    return (evFINC__DESIGN_id==id);
}

IMPLEMENT_META_EVENT_P(evFINC, _DESIGN, _DESIGN, evFINC())

//## event evVERSAS()
evVERSAS::evVERSAS() {
    NOTIFY_EVENT_CONSTRUCTOR(evVERSAS)
    setId(evVERSAS__DESIGN_id);
}

bool evVERSAS::isTypeOf(const short id) const {
    return (evVERSAS__DESIGN_id==id);
}

IMPLEMENT_META_EVENT_P(evVERSAS, _DESIGN, _DESIGN, evVERSAS())

//## event evDCA()
evDCA::evDCA() {
    NOTIFY_EVENT_CONSTRUCTOR(evDCA)
    setId(evDCA__DESIGN_id);
}

bool evDCA::isTypeOf(const short id) const {
    return (evDCA__DESIGN_id==id);
}

IMPLEMENT_META_EVENT_P(evDCA, _DESIGN, _DESIGN, evDCA())

//## event evDCB()
evDCB::evDCB() {
    NOTIFY_EVENT_CONSTRUCTOR(evDCB)
    setId(evDCB__DESIGN_id);
}

bool evDCB::isTypeOf(const short id) const {
    return (evDCB__DESIGN_id==id);
}

IMPLEMENT_META_EVENT_P(evDCB, _DESIGN, _DESIGN, evDCB())

//## event evDEBB()
evDEBB::evDEBB() {
    NOTIFY_EVENT_CONSTRUCTOR(evDEBB)
    setId(evDEBB__DESIGN_id);
}

bool evDEBB::isTypeOf(const short id) const {
    return (evDEBB__DESIGN_id==id);
}

IMPLEMENT_META_EVENT_P(evDEBB, _DESIGN, _DESIGN, evDEBB())

//## event evMIB()
evMIB::evMIB() {
    NOTIFY_EVENT_CONSTRUCTOR(evMIB)
    setId(evMIB__DESIGN_id);
}

bool evMIB::isTypeOf(const short id) const {
    return (evMIB__DESIGN_id==id);
}

IMPLEMENT_META_EVENT_P(evMIB, _DESIGN, _DESIGN, evMIB())

//## event evFINB()
evFINB::evFINB() {
    NOTIFY_EVENT_CONSTRUCTOR(evFINB)
    setId(evFINB__DESIGN_id);
}

bool evFINB::isTypeOf(const short id) const {
    return (evFINB__DESIGN_id==id);
}

IMPLEMENT_META_EVENT_P(evFINB, _DESIGN, _DESIGN, evFINB())

//## event ev()
ev::ev() {
    NOTIFY_EVENT_CONSTRUCTOR(ev)
    setId(ev__DESIGN_id);
}

bool ev::isTypeOf(const short id) const {
    return (ev__DESIGN_id==id);
}

IMPLEMENT_META_EVENT_P(ev, _DESIGN, _DESIGN, ev())

//## event evVERB()
evVERB::evVERB() {
    NOTIFY_EVENT_CONSTRUCTOR(evVERB)
    setId(evVERB__DESIGN_id);
}

bool evVERB::isTypeOf(const short id) const {
    return (evVERB__DESIGN_id==id);
}

IMPLEMENT_META_EVENT_P(evVERB, _DESIGN, _DESIGN, evVERB())

//## event eventmessage_0()
eventmessage_0::eventmessage_0() {
    NOTIFY_EVENT_CONSTRUCTOR(eventmessage_0)
    setId(eventmessage_0__DESIGN_id);
}

bool eventmessage_0::isTypeOf(const short id) const {
    return (eventmessage_0__DESIGN_id==id);
}

IMPLEMENT_META_EVENT_P(eventmessage_0, _DESIGN, _DESIGN, eventmessage_0())

//## event evdebug()
evdebug::evdebug() {
    NOTIFY_EVENT_CONSTRUCTOR(evdebug)
    setId(evdebug__DESIGN_id);
}

bool evdebug::isTypeOf(const short id) const {
    return (evdebug__DESIGN_id==id);
}

IMPLEMENT_META_EVENT_P(evdebug, _DESIGN, _DESIGN, evdebug())

//## event evReset()
evReset::evReset() {
    NOTIFY_EVENT_CONSTRUCTOR(evReset)
    setId(evReset__DESIGN_id);
}

bool evReset::isTypeOf(const short id) const {
    return (evReset__DESIGN_id==id);
}

IMPLEMENT_META_EVENT_P(evReset, _DESIGN, _DESIGN, evReset())

//## event evRUNA()
evRUNA::evRUNA() {
    NOTIFY_EVENT_CONSTRUCTOR(evRUNA)
    setId(evRUNA__DESIGN_id);
}

bool evRUNA::isTypeOf(const short id) const {
    return (evRUNA__DESIGN_id==id);
}

IMPLEMENT_META_EVENT_P(evRUNA, _DESIGN, _DESIGN, evRUNA())

//## event evNONRUNA()
evNONRUNA::evNONRUNA() {
    NOTIFY_EVENT_CONSTRUCTOR(evNONRUNA)
    setId(evNONRUNA__DESIGN_id);
}

bool evNONRUNA::isTypeOf(const short id) const {
    return (evNONRUNA__DESIGN_id==id);
}

IMPLEMENT_META_EVENT_P(evNONRUNA, _DESIGN, _DESIGN, evNONRUNA())

//## event evNONRUNB()
evNONRUNB::evNONRUNB() {
    NOTIFY_EVENT_CONSTRUCTOR(evNONRUNB)
    setId(evNONRUNB__DESIGN_id);
}

bool evNONRUNB::isTypeOf(const short id) const {
    return (evNONRUNB__DESIGN_id==id);
}

IMPLEMENT_META_EVENT_P(evNONRUNB, _DESIGN, _DESIGN, evNONRUNB())

//## event evRUNB()
evRUNB::evRUNB() {
    NOTIFY_EVENT_CONSTRUCTOR(evRUNB)
    setId(evRUNB__DESIGN_id);
}

bool evRUNB::isTypeOf(const short id) const {
    return (evRUNB__DESIGN_id==id);
}

IMPLEMENT_META_EVENT_P(evRUNB, _DESIGN, _DESIGN, evRUNB())

/*********************************************************************
	File Path	: CodesGeneres\AnimationConfig\_DESIGN.cpp
*********************************************************************/
