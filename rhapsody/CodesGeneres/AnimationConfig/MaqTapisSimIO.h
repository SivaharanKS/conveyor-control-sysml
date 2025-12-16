/*********************************************************************
	Rhapsody	: 9.0.2 
	Login		: kumarass
	Component	: CodesGeneres 
	Configuration 	: AnimationConfig
	Model Element	: MaqTapisSimIO
//!	Generated Date	: Tue, 16, Dec 2025  
	File Path	: CodesGeneres\AnimationConfig\MaqTapisSimIO.h
*********************************************************************/

#ifndef MaqTapisSimIO_H
#define MaqTapisSimIO_H

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
//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## class MaqTapisSimIO
#include "bool_send_commandes_TrameCommandes_ProxyOperationInterface.h"
//## class MaqTapisSimIO
#include "int_connect_to_maq_ProxyOperationInterface.h"
//## class MaqTapisSimIO
#include "MaquetteIO.h"
//## class MaqTapisSimIO
#include "TrameCapteurs_read_capteurs_ProxyOperationInterface.h"
//## class MaqTapisSimIO
#include "void_disconnect_ProxyOperationInterface.h"
//#[ ignore
#define OMAnim__DESIGN_MaqTapisSimIO_set_IP_MAQ_SIM_charPtr_ARGS_DECLARATION char* p__IP_MAQ_SIM;
//#]

//## package _DESIGN

//## class MaqTapisSimIO
class MaqTapisSimIO : public OMThread, public OMReactive, public MaquetteIO, public bool_send_commandes_TrameCommandes_ProxyOperationInterface, public TrameCapteurs_read_capteurs_ProxyOperationInterface, public int_connect_to_maq_ProxyOperationInterface, public void_disconnect_ProxyOperationInterface {
public :

//#[ ignore
    //## package _DESIGN
    class p_maq_sim_C : public bool_send_commandes_TrameCommandes_ProxyOperationInterface, public TrameCapteurs_read_capteurs_ProxyOperationInterface, public int_connect_to_maq_ProxyOperationInterface, public void_disconnect_ProxyOperationInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_maq_sim_C();
        
        //## auto_generated
        virtual ~p_maq_sim_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectMaqTapisSimIO(MaqTapisSimIO* part);
        
        //## auto_generated
        virtual int connect_to_maq();
        
        //## auto_generated
        virtual void disconnect();
        
        //## auto_generated
        bool_send_commandes_TrameCommandes_ProxyOperationInterface* getItsBool_send_commandes_TrameCommandes_ProxyOperationInterface();
        
        //## auto_generated
        int_connect_to_maq_ProxyOperationInterface* getItsInt_connect_to_maq_ProxyOperationInterface();
        
        //## auto_generated
        TrameCapteurs_read_capteurs_ProxyOperationInterface* getItsTrameCapteurs_read_capteurs_ProxyOperationInterface();
        
        //## auto_generated
        void_disconnect_ProxyOperationInterface* getItsVoid_disconnect_ProxyOperationInterface();
        
        //## auto_generated
        virtual TrameCapteurs read_capteurs();
        
        //## auto_generated
        virtual bool send_commandes(TrameCommandes commandes);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsBool_send_commandes_TrameCommandes_ProxyOperationInterface(bool_send_commandes_TrameCommandes_ProxyOperationInterface* p_bool_send_commandes_TrameCommandes_ProxyOperationInterface);
        
        //## auto_generated
        void setItsInt_connect_to_maq_ProxyOperationInterface(int_connect_to_maq_ProxyOperationInterface* p_int_connect_to_maq_ProxyOperationInterface);
        
        //## auto_generated
        void setItsTrameCapteurs_read_capteurs_ProxyOperationInterface(TrameCapteurs_read_capteurs_ProxyOperationInterface* p_TrameCapteurs_read_capteurs_ProxyOperationInterface);
        
        //## auto_generated
        void setItsVoid_disconnect_ProxyOperationInterface(void_disconnect_ProxyOperationInterface* p_void_disconnect_ProxyOperationInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        bool_send_commandes_TrameCommandes_ProxyOperationInterface* itsBool_send_commandes_TrameCommandes_ProxyOperationInterface;		//## link itsBool_send_commandes_TrameCommandes_ProxyOperationInterface
        
        int_connect_to_maq_ProxyOperationInterface* itsInt_connect_to_maq_ProxyOperationInterface;		//## link itsInt_connect_to_maq_ProxyOperationInterface
        
        TrameCapteurs_read_capteurs_ProxyOperationInterface* itsTrameCapteurs_read_capteurs_ProxyOperationInterface;		//## link itsTrameCapteurs_read_capteurs_ProxyOperationInterface
        
        void_disconnect_ProxyOperationInterface* itsVoid_disconnect_ProxyOperationInterface;		//## link itsVoid_disconnect_ProxyOperationInterface
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedMaqTapisSimIO;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    MaqTapisSimIO(IOxfActive* theActiveContext = 0);
    
    //## operation ~MaqTapisSimIO()
    ~MaqTapisSimIO();
    
    ////    Operations    ////
    
    //## operation connect_to_maq()
    virtual int connect_to_maq();
    
    //## operation disconnect()
    virtual void disconnect();
    
    //## operation init_com()
    virtual void init_com();
    
    //## operation read_capteurs()
    virtual TrameCapteurs read_capteurs();
    
    //## operation reset_commandes()
    virtual void reset_commandes();
    
    //## operation send_commandes(TrameCommandes)
    virtual bool send_commandes(TrameCommandes commandes);

private :

    //## operation recv_capteurs(TrameCapteurs*)
    virtual bool recv_capteurs(TrameCapteurs* capteur);
    
    ////    Additional operations    ////

public :

    //## auto_generated
    p_maq_sim_C* getP_maq_sim() const;
    
    //## auto_generated
    p_maq_sim_C* get_p_maq_sim() const;
    
    //## auto_generated
    char* get_IP_MAQ_SIM() const;
    
    //## auto_generated
    void set_IP_MAQ_SIM(char* p__IP_MAQ_SIM);
    
    //## auto_generated
    int get_PORT_MAQ_SIM() const;
    
    //## auto_generated
    void set_PORT_MAQ_SIM(int p__PORT_MAQ_SIM);
    
    //## auto_generated
    TrameCapteurs getCapteurs() const;
    
    //## auto_generated
    void setCapteurs(TrameCapteurs p_capteurs);
    
    //## auto_generated
    TrameCommandes getCommandes() const;
    
    //## auto_generated
    void setCommandes(TrameCommandes p_commandes);
    
    //## auto_generated
    bool getConnected() const;
    
    //## auto_generated
    void setConnected(bool p_connected);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    //## auto_generated
    void initStatechart();

private :

    //## auto_generated
    unsigned char getBuf_capteurs(int i1) const;
    
    //## auto_generated
    void setBuf_capteurs(int i1, unsigned char p_buf_capteurs);
    
    //## auto_generated
    char getBuffer(int i1) const;
    
    //## auto_generated
    void setBuffer(int i1, char p_buffer);
    
    //## auto_generated
    struct sockaddr_in getFrom() const;
    
    //## auto_generated
    void setFrom(struct sockaddr_in p_from);
    
    //## auto_generated
    int getFrom_len() const;
    
    //## auto_generated
    void setFrom_len(int p_from_len);
    
    //## auto_generated
    struct sockaddr_in getServeur() const;
    
    //## auto_generated
    void setServeur(struct sockaddr_in p_serveur);
    
    //## auto_generated
    SOCKET getSock() const;
    
    //## auto_generated
    void setSock(SOCKET p_sock);
    
    //## auto_generated
    int getTimeout() const;
    
    //## auto_generated
    void setTimeout(int p_timeout);
    
    //## auto_generated
    WSADATA getWsa() const;
    
    //## auto_generated
    void setWsa(WSADATA p_wsa);
    
    ////    Attributes    ////

protected :

    char* _IP_MAQ_SIM;		//## attribute _IP_MAQ_SIM
    
    int _PORT_MAQ_SIM;		//## attribute _PORT_MAQ_SIM
    
    unsigned char buf_capteurs[3];		//## attribute buf_capteurs
    
    char buffer[1024];		//## attribute buffer
    
    TrameCapteurs capteurs;		//## attribute capteurs
    
    TrameCommandes commandes;		//## attribute commandes
    
    bool connected;		//## attribute connected
    
    struct sockaddr_in from;		//## attribute from
    
    int from_len;		//## attribute from_len
    
    struct sockaddr_in serveur;		//## attribute serveur
    
    SOCKET sock;		//## attribute sock
    
    int timeout;		//## attribute timeout
    
    WSADATA wsa;		//## attribute wsa
    
    ////    Relations and components    ////
    
//#[ ignore
    p_maq_sim_C p_maq_sim;
//#]

    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // idle:
    //## statechart_method
    inline bool idle_IN() const;
    
    // connected_to_tapis_sim:
    //## statechart_method
    inline bool connected_to_tapis_sim_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum MaqTapisSimIO_Enum {
        OMNonState = 0,
        idle = 1,
        connected_to_tapis_sim = 2
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(_DESIGN_MaqTapisSimIO_set_IP_MAQ_SIM_charPtr)

//#[ ignore
class OMAnimatedMaqTapisSimIO : public OMAnimatedMaquetteIO {
    DECLARE_REACTIVE_META(MaqTapisSimIO, OMAnimatedMaqTapisSimIO)
    
    DECLARE_META_OP(_DESIGN_MaqTapisSimIO_set_IP_MAQ_SIM_charPtr)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void idle_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void connected_to_tapis_sim_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool MaqTapisSimIO::rootState_IN() const {
    return true;
}

inline bool MaqTapisSimIO::idle_IN() const {
    return rootState_subState == idle;
}

inline bool MaqTapisSimIO::connected_to_tapis_sim_IN() const {
    return rootState_subState == connected_to_tapis_sim;
}

#endif
/*********************************************************************
	File Path	: CodesGeneres\AnimationConfig\MaqTapisSimIO.h
*********************************************************************/
