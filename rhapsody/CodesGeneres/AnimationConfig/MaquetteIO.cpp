/********************************************************************
	Rhapsody	: 9.0.2 
	Login		: kumarass
	Component	: CodesGeneres 
	Configuration 	: AnimationConfig
	Model Element	: MaquetteIO
//!	Generated Date	: Tue, 16, Dec 2025  
	File Path	: CodesGeneres\AnimationConfig\MaquetteIO.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "MaquetteIO.h"
//#[ ignore
#define _DESIGN_MaquetteIO_MaquetteIO_SERIALIZE OM_NO_OP

#define _DESIGN_MaquetteIO_connect_to_maq_SERIALIZE OM_NO_OP

#define _DESIGN_MaquetteIO_disconnect_SERIALIZE OM_NO_OP

#define _DESIGN_MaquetteIO_init_com_SERIALIZE OM_NO_OP

#define _DESIGN_MaquetteIO_read_capteurs_SERIALIZE OM_NO_OP

#define _DESIGN_MaquetteIO_recv_capteurs_SERIALIZE aomsmethod->addAttribute("capteurs", x2String(capteurs));

#define _DESIGN_MaquetteIO_send_commandes_SERIALIZE aomsmethod->addAttribute("commandes", UNKNOWN2STRING(commandes));
//#]

//## package _DESIGN

//## class MaquetteIO
MaquetteIO::MaquetteIO() : handle(new long[2]), id_maq_pc(31), octets_entree(new char[3]) {
    NOTIFY_CONSTRUCTOR(MaquetteIO, MaquetteIO(), 0, _DESIGN_MaquetteIO_MaquetteIO_SERIALIZE);
}

MaquetteIO::~MaquetteIO() {
    NOTIFY_DESTRUCTOR(~MaquetteIO, true);
}

void MaquetteIO::init_com() {
    NOTIFY_OPERATION(init_com, init_com(), 0, _DESIGN_MaquetteIO_init_com_SERIALIZE);
    //#[ operation init_com()
    //#]
}

long* MaquetteIO::getHandle() const {
    return handle;
}

void MaquetteIO::setHandle(long* p_handle) {
    handle = p_handle;
}

int MaquetteIO::getId_maq_pc() const {
    return id_maq_pc;
}

void MaquetteIO::setId_maq_pc(int p_id_maq_pc) {
    id_maq_pc = p_id_maq_pc;
}

int MaquetteIO::getNum_pc() const {
    return num_pc;
}

void MaquetteIO::setNum_pc(int p_num_pc) {
    num_pc = p_num_pc;
}

int MaquetteIO::getNum_tapis() const {
    return num_tapis;
}

void MaquetteIO::setNum_tapis(int p_num_tapis) {
    num_tapis = p_num_tapis;
}

char MaquetteIO::getOctet_sortie() const {
    return octet_sortie;
}

void MaquetteIO::setOctet_sortie(char p_octet_sortie) {
    octet_sortie = p_octet_sortie;
}

char* MaquetteIO::getOctets_entree() const {
    return octets_entree;
}

void MaquetteIO::setOctets_entree(char* p_octets_entree) {
    octets_entree = p_octets_entree;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedMaquetteIO::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("id_maq_pc", x2String(myReal->id_maq_pc));
    aomsAttributes->addAttribute("octet_sortie", x2String(myReal->octet_sortie));
    aomsAttributes->addAttribute("octets_entree", x2String(myReal->octets_entree));
    aomsAttributes->addAttribute("num_tapis", x2String(myReal->num_tapis));
    aomsAttributes->addAttribute("num_pc", x2String(myReal->num_pc));
    aomsAttributes->addAttribute("handle", x2String(myReal->handle));
}
//#]

IMPLEMENT_META_P(MaquetteIO, _DESIGN, _DESIGN, false, OMAnimatedMaquetteIO)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: CodesGeneres\AnimationConfig\MaquetteIO.cpp
*********************************************************************/
