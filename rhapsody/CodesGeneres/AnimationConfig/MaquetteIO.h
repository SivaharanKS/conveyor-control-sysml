/*********************************************************************
	Rhapsody	: 9.0.2 
	Login		: kumarass
	Component	: CodesGeneres 
	Configuration 	: AnimationConfig
	Model Element	: MaquetteIO
//!	Generated Date	: Tue, 16, Dec 2025  
	File Path	: CodesGeneres\AnimationConfig\MaquetteIO.h
*********************************************************************/

#ifndef MaquetteIO_H
#define MaquetteIO_H

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
//## package _DESIGN

//## class MaquetteIO
class MaquetteIO {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedMaquetteIO;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    MaquetteIO();
    
    //## auto_generated
    virtual ~MaquetteIO();
    
    ////    Operations    ////
    
    //## operation connect_to_maq()
    virtual int connect_to_maq() = 0;
    
    //## operation disconnect()
    virtual void disconnect() = 0;
    
    //## operation init_com()
    virtual void init_com();
    
    //## operation read_capteurs()
    virtual TrameCapteurs read_capteurs() = 0;
    
    //## operation send_commandes(TrameCommandes)
    virtual bool send_commandes(TrameCommandes commandes) = 0;

private :

    //## operation recv_capteurs(TrameCapteurs*)
    virtual bool recv_capteurs(TrameCapteurs* capteurs) = 0;
    
    ////    Additional operations    ////

public :

    //## auto_generated
    long* getHandle() const;
    
    //## auto_generated
    void setHandle(long* p_handle);
    
    //## auto_generated
    int getId_maq_pc() const;
    
    //## auto_generated
    void setId_maq_pc(int p_id_maq_pc);
    
    //## auto_generated
    int getNum_pc() const;
    
    //## auto_generated
    void setNum_pc(int p_num_pc);
    
    //## auto_generated
    int getNum_tapis() const;
    
    //## auto_generated
    void setNum_tapis(int p_num_tapis);
    
    //## auto_generated
    char getOctet_sortie() const;
    
    //## auto_generated
    void setOctet_sortie(char p_octet_sortie);
    
    //## auto_generated
    char* getOctets_entree() const;
    
    //## auto_generated
    void setOctets_entree(char* p_octets_entree);
    
    ////    Attributes    ////

protected :

    long* handle;		//## attribute handle
    
    int id_maq_pc;		//## attribute id_maq_pc
    
    int num_pc;		//## attribute num_pc
    
    int num_tapis;		//## attribute num_tapis
    
    char octet_sortie;		//## attribute octet_sortie
    
    char* octets_entree;		//## attribute octets_entree
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedMaquetteIO : virtual public AOMInstance {
    DECLARE_META(MaquetteIO, OMAnimatedMaquetteIO)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: CodesGeneres\AnimationConfig\MaquetteIO.h
*********************************************************************/
