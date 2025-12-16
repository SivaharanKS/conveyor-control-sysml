/********************************************************************
	Rhapsody	: 9.0.2 
	Login		: kumarass
	Component	: CodesGeneres 
	Configuration 	: AnimationConfig
	Model Element	: MaqTapisSimIO
//!	Generated Date	: Tue, 16, Dec 2025  
	File Path	: CodesGeneres\AnimationConfig\MaqTapisSimIO.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "MaqTapisSimIO.h"
//#[ ignore
#define _DESIGN_MaqTapisSimIO_MaqTapisSimIO_SERIALIZE OM_NO_OP

#define _DESIGN_MaqTapisSimIO_connect_to_maq_SERIALIZE OM_NO_OP

#define _DESIGN_MaqTapisSimIO_disconnect_SERIALIZE OM_NO_OP

#define _DESIGN_MaqTapisSimIO_init_com_SERIALIZE OM_NO_OP

#define _DESIGN_MaqTapisSimIO_read_capteurs_SERIALIZE OM_NO_OP

#define _DESIGN_MaqTapisSimIO_recv_capteurs_SERIALIZE aomsmethod->addAttribute("capteur", x2String(capteur));

#define _DESIGN_MaqTapisSimIO_reset_commandes_SERIALIZE OM_NO_OP

#define _DESIGN_MaqTapisSimIO_send_commandes_SERIALIZE aomsmethod->addAttribute("commandes", UNKNOWN2STRING(commandes));

#define OMAnim__DESIGN_MaqTapisSimIO_set_IP_MAQ_SIM_charPtr_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p__IP_MAQ_SIM)

#define OMAnim__DESIGN_MaqTapisSimIO_set_IP_MAQ_SIM_charPtr_SERIALIZE_RET_VAL
//#]

//## package _DESIGN

//## class MaqTapisSimIO
//#[ ignore
MaqTapisSimIO::p_maq_sim_C::p_maq_sim_C() : _p_(0) {
    itsBool_send_commandes_TrameCommandes_ProxyOperationInterface = NULL;
    itsInt_connect_to_maq_ProxyOperationInterface = NULL;
    itsTrameCapteurs_read_capteurs_ProxyOperationInterface = NULL;
    itsVoid_disconnect_ProxyOperationInterface = NULL;
}

MaqTapisSimIO::p_maq_sim_C::~p_maq_sim_C() {
    cleanUpRelations();
}

void MaqTapisSimIO::p_maq_sim_C::connectMaqTapisSimIO(MaqTapisSimIO* part) {
    setItsBool_send_commandes_TrameCommandes_ProxyOperationInterface(part);
    setItsTrameCapteurs_read_capteurs_ProxyOperationInterface(part);
    setItsInt_connect_to_maq_ProxyOperationInterface(part);
    setItsVoid_disconnect_ProxyOperationInterface(part);
    
}

int MaqTapisSimIO::p_maq_sim_C::connect_to_maq() {
    int res = 0;
    if (itsInt_connect_to_maq_ProxyOperationInterface != NULL) {
        res = itsInt_connect_to_maq_ProxyOperationInterface->connect_to_maq();
    }
    return res;
}

void MaqTapisSimIO::p_maq_sim_C::disconnect() {
    
    if (itsVoid_disconnect_ProxyOperationInterface != NULL) {
        itsVoid_disconnect_ProxyOperationInterface->disconnect();
    }
    
}

bool_send_commandes_TrameCommandes_ProxyOperationInterface* MaqTapisSimIO::p_maq_sim_C::getItsBool_send_commandes_TrameCommandes_ProxyOperationInterface() {
    return this;
}

int_connect_to_maq_ProxyOperationInterface* MaqTapisSimIO::p_maq_sim_C::getItsInt_connect_to_maq_ProxyOperationInterface() {
    return this;
}

TrameCapteurs_read_capteurs_ProxyOperationInterface* MaqTapisSimIO::p_maq_sim_C::getItsTrameCapteurs_read_capteurs_ProxyOperationInterface() {
    return this;
}

void_disconnect_ProxyOperationInterface* MaqTapisSimIO::p_maq_sim_C::getItsVoid_disconnect_ProxyOperationInterface() {
    return this;
}

TrameCapteurs MaqTapisSimIO::p_maq_sim_C::read_capteurs() {
    TrameCapteurs res;
    if (itsTrameCapteurs_read_capteurs_ProxyOperationInterface != NULL) {
        res = itsTrameCapteurs_read_capteurs_ProxyOperationInterface->read_capteurs();
    }
    return res;
}

bool MaqTapisSimIO::p_maq_sim_C::send_commandes(TrameCommandes commandes) {
    bool res = false;
    if (itsBool_send_commandes_TrameCommandes_ProxyOperationInterface != NULL) {
        res = itsBool_send_commandes_TrameCommandes_ProxyOperationInterface->send_commandes(commandes);
    }
    return res;
}

void MaqTapisSimIO::p_maq_sim_C::setItsBool_send_commandes_TrameCommandes_ProxyOperationInterface(bool_send_commandes_TrameCommandes_ProxyOperationInterface* p_bool_send_commandes_TrameCommandes_ProxyOperationInterface) {
    itsBool_send_commandes_TrameCommandes_ProxyOperationInterface = p_bool_send_commandes_TrameCommandes_ProxyOperationInterface;
}

void MaqTapisSimIO::p_maq_sim_C::setItsInt_connect_to_maq_ProxyOperationInterface(int_connect_to_maq_ProxyOperationInterface* p_int_connect_to_maq_ProxyOperationInterface) {
    itsInt_connect_to_maq_ProxyOperationInterface = p_int_connect_to_maq_ProxyOperationInterface;
}

void MaqTapisSimIO::p_maq_sim_C::setItsTrameCapteurs_read_capteurs_ProxyOperationInterface(TrameCapteurs_read_capteurs_ProxyOperationInterface* p_TrameCapteurs_read_capteurs_ProxyOperationInterface) {
    itsTrameCapteurs_read_capteurs_ProxyOperationInterface = p_TrameCapteurs_read_capteurs_ProxyOperationInterface;
}

void MaqTapisSimIO::p_maq_sim_C::setItsVoid_disconnect_ProxyOperationInterface(void_disconnect_ProxyOperationInterface* p_void_disconnect_ProxyOperationInterface) {
    itsVoid_disconnect_ProxyOperationInterface = p_void_disconnect_ProxyOperationInterface;
}

void MaqTapisSimIO::p_maq_sim_C::cleanUpRelations() {
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

MaqTapisSimIO::MaqTapisSimIO(IOxfActive* theActiveContext) : _IP_MAQ_SIM("127.0.0.1"), _PORT_MAQ_SIM(2100), connected(false), timeout(3000) {
    NOTIFY_ACTIVE_CONSTRUCTOR(MaqTapisSimIO, MaqTapisSimIO(), 0, _DESIGN_MaqTapisSimIO_MaqTapisSimIO_SERIALIZE);
    setActiveContext(this, true);
    initRelations();
    initStatechart();
}

MaqTapisSimIO::~MaqTapisSimIO() {
    NOTIFY_DESTRUCTOR(~MaqTapisSimIO, false);
    //#[ operation ~MaqTapisSimIO()
     // Fermeture du socket
     closesocket(sock);
     WSACleanup();
       
    //#]
}

int MaqTapisSimIO::connect_to_maq() {
    NOTIFY_OPERATION(connect_to_maq, connect_to_maq(), 0, _DESIGN_MaqTapisSimIO_connect_to_maq_SERIALIZE);
    //#[ operation connect_to_maq()
    
    unsigned char commande=0x01;
     
       
        // Initialisation de Winsock
        if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0) {
            printf("Erreur initialisation Winsock: %d\n", WSAGetLastError());
            return -1;
        }
        
        // Création du socket
        if ((sock = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP)) == INVALID_SOCKET) {
            printf("Erreur creation socket: %d\n", WSAGetLastError());
            WSACleanup();
            return -1;
        }
        
        // Configuration du timeout de réception
        setsockopt(sock, SOL_SOCKET, SO_RCVTIMEO, (char*)&timeout, sizeof(timeout));
        
        // Configuration de l'adresse du serveur
        serveur.sin_family = AF_INET;
        serveur.sin_port = htons(_PORT_MAQ_SIM);
        serveur.sin_addr.s_addr = inet_addr(_IP_MAQ_SIM); 
        //InetPton(AF_INET, _IP_MAQ_SIM, &(serveur.sin_addr));
        
        
        connected = true;
        reset_commandes();
        return 1;
    //#]
}

void MaqTapisSimIO::disconnect() {
    NOTIFY_OPERATION(disconnect, disconnect(), 0, _DESIGN_MaqTapisSimIO_disconnect_SERIALIZE);
    //#[ operation disconnect()
     // Fermeture du socket
     GEN(evDisconnect);
     closesocket(sock);
     WSACleanup();
    //#]
}

void MaqTapisSimIO::init_com() {
    NOTIFY_OPERATION(init_com, init_com(), 0, _DESIGN_MaqTapisSimIO_init_com_SERIALIZE);
    //#[ operation init_com()
    //#]
}

TrameCapteurs MaqTapisSimIO::read_capteurs() {
    NOTIFY_OPERATION(read_capteurs, read_capteurs(), 0, _DESIGN_MaqTapisSimIO_read_capteurs_SERIALIZE);
    //#[ operation read_capteurs()
    recv_capteurs(&capteurs);
    return capteurs;
    //#]
}

void MaqTapisSimIO::reset_commandes() {
    NOTIFY_OPERATION(reset_commandes, reset_commandes(), 0, _DESIGN_MaqTapisSimIO_reset_commandes_SERIALIZE);
    //#[ operation reset_commandes()
    printf ("TAPIS SIM : reset commandes...\n");
    
    	commandes.mava = 0; 
    	commandes.mara = 0; 
    
    	commandes.mavb = 0; 
    	commandes.marb = 0; 
    	
    	commandes.mavc = 0; 
    	commandes.marc = 0; 
    
        commandes.ev = 0; 
        
        send_commandes(commandes);
    
    
    //#]
}

bool MaqTapisSimIO::send_commandes(TrameCommandes commandes) {
    NOTIFY_OPERATION(send_commandes, send_commandes(TrameCommandes), 1, _DESIGN_MaqTapisSimIO_send_commandes_SERIALIZE);
    //#[ operation send_commandes(TrameCommandes)
    unsigned char commande_inline;
    
    commandes.reserved=0;
    if (commandes.mava == 1 && commandes.mara==1) {
    		printf("/!\\ deux commandes contradictoires : mava et mara a 1 !! \n");
    		return false;
    }
    
    if (commandes.mavb == 1 && commandes.marb == 1) {
    		printf("/!\\ deux commandes contradictoires : mavb et marb a 1 !! \n");
    		return false;
    }    		
    
    if (commandes.mavc == 1 && commandes.marc==1) {
    		printf("/!\\ deux commandes contradictoires : mavc et marc a 1 !! \n");
    		return false;
    }    		
    
        		
    memcpy(&commande_inline, &commandes, 1);
    
    // Envoi de la commande
       int  resultat = sendto(sock, (const char*)&commande_inline, sizeof(commande_inline), 0,
                         (struct sockaddr*)&serveur, sizeof(serveur));
        
        if (resultat == SOCKET_ERROR) {
            printf("Erreur envoi UDP: %d\n", WSAGetLastError());
            closesocket(sock);
            WSACleanup();
            return false;
        }
        
        //printf("Commande envoyee: 0x%02X\n", commande_inline);
        printf("\n mava=%d mara=%d mavb=%d marb=%d mavc=%d marc=%d ev=%d\n", 
        commandes.mava, commandes.mara, commandes.mavb, commandes.marb, commandes.mavc, commandes.marc, commandes.ev);
        
        // Réception de la réponse 
        from_len = sizeof(from);
        resultat = recvfrom(sock, buffer, sizeof(buffer), 0, 
                           (struct sockaddr*)&from, &from_len);
        
        if (resultat == SOCKET_ERROR) {
            int error = WSAGetLastError();
            if (error == WSAETIMEDOUT) {
                printf("Timeout: aucune reponse recue du serveur\n");
            } else {
                printf("Erreur reception UDP: %d\n", error);
            }
            closesocket(sock);
            WSACleanup();
            return false;
        }
            
         unsigned char octet1 = (unsigned char)buffer[0];
         unsigned char octet2 = (unsigned char)buffer[1];
         unsigned char octet3 = (unsigned char)buffer[2];
         
         buf_capteurs[0] = octet1;
    	 buf_capteurs[1] = octet2;
         buf_capteurs[2] = octet3;
              
    
         if ((octet1 & 0xF0) == 0 && (octet2 & 0xF0) == 0 && (octet3 & 0xF0) == 0) {    
            memcpy(&capteurs, buf_capteurs, 3);
            printf("\ndca=%d deba=%d mia=%d fina=%d\n", capteurs.dca, capteurs.deba, capteurs.mia, capteurs.fina);
            printf("dcb=%d debb=%d mib=%d finb=%d\n", capteurs.dcb, capteurs.debb, capteurs.mib, capteurs.finb);
            printf("debc=%d finc=%d\n", capteurs.debc, capteurs.finc);
      
         }
         
       return true;
         
    //#]
}

bool MaqTapisSimIO::recv_capteurs(TrameCapteurs* capteur) {
    NOTIFY_OPERATION(recv_capteurs, recv_capteurs(TrameCapteurs*), 1, _DESIGN_MaqTapisSimIO_recv_capteurs_SERIALIZE);
    //#[ operation recv_capteurs(TrameCapteurs*)
    unsigned char commande=0xFF;
    
    // Envoi de la commande
        int resultat = sendto(sock, (const char*)&commande, sizeof(commande), 0,
                         (struct sockaddr*)&serveur, sizeof(serveur));
        
        if (resultat == SOCKET_ERROR) {
            printf("Erreur envoi UDP: %d\n", WSAGetLastError());
            closesocket(sock);
            WSACleanup();
            return false;
        }
        
        printf("Commande envoyee: 0x%02X\n", commande);
        
        // Réception de la réponse 
        from_len = sizeof(from);
        resultat = recvfrom(sock, buffer, sizeof(buffer), 0, 
                           (struct sockaddr*)&from, &from_len);
        
        if (resultat == SOCKET_ERROR) {
            int error = WSAGetLastError();
            if (error == WSAETIMEDOUT) {
                printf("Timeout: aucune reponse recue du serveur\n");
            } else {
                printf("Erreur reception UDP: %d\n", error);
            }
            closesocket(sock);
            WSACleanup();
            return false;
        }  
        
         unsigned char octet1 = (unsigned char)buffer[0];
         unsigned char octet2 = (unsigned char)buffer[1];
         unsigned char octet3 = (unsigned char)buffer[2];
         buf_capteurs[0] = octet1;
    	 buf_capteurs[1] = octet2;
         buf_capteurs[2] = octet3;
              
    
         if ((octet1 & 0xF0) == 0 && (octet2 & 0xF0) == 0 && (octet3 & 0xF0) == 0) { 
      //      printf("Donnees oct1=%x oct2=%x oct3=%x \n",octet1, octet2, octet3);    
            memcpy(&capteurs, buf_capteurs, 3);
            printf("\ndca=%d deba=%d mia=%d fina=%d\n", capteurs.dca, capteurs.deba, capteurs.mia, capteurs.fina);
            printf("dcb=%d debb=%d mib=%d finb=%d\n", capteurs.dcb, capteurs.debb, capteurs.mib, capteurs.finb);
           printf("debc=%d finc=%d versa=%d versb=%d \n", capteurs.debc, capteurs.finc, capteurs.versa, capteurs.versb);
            
      
         }
       
       return true;
        
    //#]
}

MaqTapisSimIO::p_maq_sim_C* MaqTapisSimIO::getP_maq_sim() const {
    return (MaqTapisSimIO::p_maq_sim_C*) &p_maq_sim;
}

MaqTapisSimIO::p_maq_sim_C* MaqTapisSimIO::get_p_maq_sim() const {
    return (MaqTapisSimIO::p_maq_sim_C*) &p_maq_sim;
}

char* MaqTapisSimIO::get_IP_MAQ_SIM() const {
    return _IP_MAQ_SIM;
}

void MaqTapisSimIO::set_IP_MAQ_SIM(char* p__IP_MAQ_SIM) {
    _IP_MAQ_SIM = p__IP_MAQ_SIM;
    NOTIFY_SET_OPERATION;
}

int MaqTapisSimIO::get_PORT_MAQ_SIM() const {
    return _PORT_MAQ_SIM;
}

void MaqTapisSimIO::set_PORT_MAQ_SIM(int p__PORT_MAQ_SIM) {
    _PORT_MAQ_SIM = p__PORT_MAQ_SIM;
    NOTIFY_SET_OPERATION;
}

TrameCapteurs MaqTapisSimIO::getCapteurs() const {
    return capteurs;
}

void MaqTapisSimIO::setCapteurs(TrameCapteurs p_capteurs) {
    capteurs = p_capteurs;
}

TrameCommandes MaqTapisSimIO::getCommandes() const {
    return commandes;
}

void MaqTapisSimIO::setCommandes(TrameCommandes p_commandes) {
    commandes = p_commandes;
}

bool MaqTapisSimIO::getConnected() const {
    return connected;
}

void MaqTapisSimIO::setConnected(bool p_connected) {
    connected = p_connected;
}

bool MaqTapisSimIO::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    if(done)
        {
            startDispatching();
        }
    return done;
}

void MaqTapisSimIO::initRelations() {
    if (get_p_maq_sim() != NULL) {
        get_p_maq_sim()->connectMaqTapisSimIO(this);
    }
}

void MaqTapisSimIO::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

unsigned char MaqTapisSimIO::getBuf_capteurs(int i1) const {
    return buf_capteurs[i1];
}

void MaqTapisSimIO::setBuf_capteurs(int i1, unsigned char p_buf_capteurs) {
    buf_capteurs[i1] = p_buf_capteurs;
}

char MaqTapisSimIO::getBuffer(int i1) const {
    return buffer[i1];
}

void MaqTapisSimIO::setBuffer(int i1, char p_buffer) {
    buffer[i1] = p_buffer;
}

struct sockaddr_in MaqTapisSimIO::getFrom() const {
    return from;
}

void MaqTapisSimIO::setFrom(struct sockaddr_in p_from) {
    from = p_from;
}

int MaqTapisSimIO::getFrom_len() const {
    return from_len;
}

void MaqTapisSimIO::setFrom_len(int p_from_len) {
    from_len = p_from_len;
}

struct sockaddr_in MaqTapisSimIO::getServeur() const {
    return serveur;
}

void MaqTapisSimIO::setServeur(struct sockaddr_in p_serveur) {
    serveur = p_serveur;
}

SOCKET MaqTapisSimIO::getSock() const {
    return sock;
}

void MaqTapisSimIO::setSock(SOCKET p_sock) {
    sock = p_sock;
}

int MaqTapisSimIO::getTimeout() const {
    return timeout;
}

void MaqTapisSimIO::setTimeout(int p_timeout) {
    timeout = p_timeout;
}

WSADATA MaqTapisSimIO::getWsa() const {
    return wsa;
}

void MaqTapisSimIO::setWsa(WSADATA p_wsa) {
    wsa = p_wsa;
}

void MaqTapisSimIO::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.idle");
        pushNullTransition();
        rootState_subState = idle;
        rootState_active = idle;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus MaqTapisSimIO::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State connected_to_tapis_sim
        case connected_to_tapis_sim:
        {
            if(IS_EVENT_TYPE_OF(evDisconnect__DESIGN_id))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    //#[ state connected_to_tapis_sim.(Exit) 
                    reset_commandes();
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.connected_to_tapis_sim");
                    NOTIFY_STATE_ENTERED("ROOT.idle");
                    pushNullTransition();
                    rootState_subState = idle;
                    rootState_active = idle;
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
        }
        break;
        // State idle
        case idle:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 1 
                    if(connected)
                        {
                            NOTIFY_TRANSITION_STARTED("1");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.idle");
                            NOTIFY_STATE_ENTERED("ROOT.connected_to_tapis_sim");
                            rootState_subState = connected_to_tapis_sim;
                            rootState_active = connected_to_tapis_sim;
                            //#[ state connected_to_tapis_sim.(Entry) 
                            reset_commandes();
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("1");
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
void OMAnimatedMaqTapisSimIO::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("sock", UNKNOWN2STRING(myReal->sock));
    aomsAttributes->addAttribute("serveur", UNKNOWN2STRING(myReal->serveur));
    aomsAttributes->addAttribute("from", UNKNOWN2STRING(myReal->from));
    aomsAttributes->addAttribute("from_len", x2String(myReal->from_len));
    aomsAttributes->addAttribute("buffer", array2String(1024, myReal->buffer, sizeof(char), &x2String));
    aomsAttributes->addAttribute("timeout", x2String(myReal->timeout));
    aomsAttributes->addAttribute("wsa", UNKNOWN2STRING(myReal->wsa));
    aomsAttributes->addAttribute("buf_capteurs", array2String(3, myReal->buf_capteurs, sizeof(unsigned char), &x2String));
    aomsAttributes->addAttribute("_IP_MAQ_SIM", x2String(myReal->_IP_MAQ_SIM));
    aomsAttributes->addAttribute("_PORT_MAQ_SIM", x2String(myReal->_PORT_MAQ_SIM));
    aomsAttributes->addAttribute("capteurs", UNKNOWN2STRING(myReal->capteurs));
    aomsAttributes->addAttribute("commandes", UNKNOWN2STRING(myReal->commandes));
    aomsAttributes->addAttribute("connected", x2String(myReal->connected));
    OMAnimatedMaquetteIO::serializeAttributes(aomsAttributes);
}

void OMAnimatedMaqTapisSimIO::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedMaquetteIO::serializeRelations(aomsRelations);
}

void OMAnimatedMaqTapisSimIO::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case MaqTapisSimIO::connected_to_tapis_sim:
        {
            connected_to_tapis_sim_serializeStates(aomsState);
        }
        break;
        case MaqTapisSimIO::idle:
        {
            idle_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedMaqTapisSimIO::idle_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.idle");
}

void OMAnimatedMaqTapisSimIO::connected_to_tapis_sim_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.connected_to_tapis_sim");
}
//#]

IMPLEMENT_REACTIVE_META_S_P(MaqTapisSimIO, _DESIGN, false, MaquetteIO, OMAnimatedMaquetteIO, OMAnimatedMaqTapisSimIO)

OMINIT_SUPERCLASS(MaquetteIO, OMAnimatedMaquetteIO)

OMREGISTER_REACTIVE_CLASS

IMPLEMENT_META_OP(OMAnimatedMaqTapisSimIO, _DESIGN_MaqTapisSimIO_set_IP_MAQ_SIM_charPtr, "set_IP_MAQ_SIM", FALSE, "set_IP_MAQ_SIM(char*)", 1)

IMPLEMENT_OP_CALL(_DESIGN_MaqTapisSimIO_set_IP_MAQ_SIM_charPtr, MaqTapisSimIO, set_IP_MAQ_SIM(p__IP_MAQ_SIM), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: CodesGeneres\AnimationConfig\MaqTapisSimIO.cpp
*********************************************************************/
