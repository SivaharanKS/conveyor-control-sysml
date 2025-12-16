/*********************************************************************
	Rhapsody	: 9.0.2 
	Login		: kumarass
	Component	: CodesGeneres 
	Configuration 	: AnimationConfig
	Model Element	: bool_send_commandes_TrameCommandes_ProxyOperationInterface
//!	Generated Date	: Tue, 16, Dec 2025  
	File Path	: CodesGeneres\AnimationConfig\bool_send_commandes_TrameCommandes_ProxyOperationInterface.h
*********************************************************************/

#ifndef bool_send_commandes_TrameCommandes_ProxyOperationInterface_H
#define bool_send_commandes_TrameCommandes_ProxyOperationInterface_H

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
#include "ProxyPortInterfaces.h"
//## operation send_commandes(TrameCommandes)
#include "_DESIGN.h"
//#[ ignore
//## package ProxyPortInterfaces

//## ignore
class bool_send_commandes_TrameCommandes_ProxyOperationInterface {
    ////    Operations    ////
    
public :

    //## operation send_commandes(TrameCommandes)
    virtual bool send_commandes(TrameCommandes commandes) = 0;
};
//#]

#endif
/*********************************************************************
	File Path	: CodesGeneres\AnimationConfig\bool_send_commandes_TrameCommandes_ProxyOperationInterface.h
*********************************************************************/
