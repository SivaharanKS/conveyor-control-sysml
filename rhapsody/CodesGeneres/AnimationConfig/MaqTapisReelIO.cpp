/********************************************************************
	Rhapsody	: 9.0.2 
	Login		: kumarass
	Component	: CodesGeneres 
	Configuration 	: AnimationConfig
	Model Element	: MaqTapisReelIO
//!	Generated Date	: Thu, 29, Jan 2026  
	File Path	: CodesGeneres\AnimationConfig\MaqTapisReelIO.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "MaqTapisReelIO.h"
//#[ ignore
#define _DESIGN_MaqTapisReelIO_MaqTapisReelIO_SERIALIZE OM_NO_OP

#define _DESIGN_MaqTapisReelIO_AppuyerDBA_SERIALIZE OM_NO_OP

#define _DESIGN_MaqTapisReelIO_AppuyerDBB_SERIALIZE OM_NO_OP

#define _DESIGN_MaqTapisReelIO_AppuyerDCA_SERIALIZE OM_NO_OP

#define _DESIGN_MaqTapisReelIO_AppuyerDCB_SERIALIZE OM_NO_OP

#define _DESIGN_MaqTapisReelIO_AvancerA_SERIALIZE OM_NO_OP

#define _DESIGN_MaqTapisReelIO_Demarrage_SERIALIZE OM_NO_OP

#define _DESIGN_MaqTapisReelIO_connect_to_maq_SERIALIZE OM_NO_OP

#define _DESIGN_MaqTapisReelIO_disconnect_SERIALIZE OM_NO_OP

#define _DESIGN_MaqTapisReelIO_init_com_SERIALIZE OM_NO_OP

#define _DESIGN_MaqTapisReelIO_message_0_SERIALIZE OM_NO_OP

#define _DESIGN_MaqTapisReelIO_mode_reel_SERIALIZE OM_NO_OP

#define _DESIGN_MaqTapisReelIO_read_capteurs_SERIALIZE OM_NO_OP

#define _DESIGN_MaqTapisReelIO_recv_capteurs_SERIALIZE aomsmethod->addAttribute("capteurs", x2String(capteurs));

#define _DESIGN_MaqTapisReelIO_reset_commandes_SERIALIZE OM_NO_OP

#define _DESIGN_MaqTapisReelIO_send_commandes_SERIALIZE aomsmethod->addAttribute("commandes", UNKNOWN2STRING(commandes));

#define OMAnim__DESIGN_MaqTapisReelIO_set_ID_PC__int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p__ID_PC_)

#define OMAnim__DESIGN_MaqTapisReelIO_set_ID_PC__int_SERIALIZE_RET_VAL

#define OMAnim__DESIGN_MaqTapisReelIO_set_NUM_MAQ__int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p__NUM_MAQ_)

#define OMAnim__DESIGN_MaqTapisReelIO_set_NUM_MAQ__int_SERIALIZE_RET_VAL
//#]

//## package _DESIGN

//## class MaqTapisReelIO
//#[ ignore
MaqTapisReelIO::p_MaqTapisReelIO_C::p_MaqTapisReelIO_C() : _p_(0) {
    itsBool_send_commandes_TrameCommandes_ProxyOperationInterface = NULL;
    itsInt_connect_to_maq_ProxyOperationInterface = NULL;
    itsTrameCapteurs_read_capteurs_ProxyOperationInterface = NULL;
    itsVoid_disconnect_ProxyOperationInterface = NULL;
}

MaqTapisReelIO::p_MaqTapisReelIO_C::~p_MaqTapisReelIO_C() {
    cleanUpRelations();
}

void MaqTapisReelIO::p_MaqTapisReelIO_C::connectMaqTapisReelIO(MaqTapisReelIO* part) {
    setItsTrameCapteurs_read_capteurs_ProxyOperationInterface(part);
    setItsVoid_disconnect_ProxyOperationInterface(part);
    setItsInt_connect_to_maq_ProxyOperationInterface(part);
    setItsBool_send_commandes_TrameCommandes_ProxyOperationInterface(part);
    
}

int MaqTapisReelIO::p_MaqTapisReelIO_C::connect_to_maq() {
    int res = 0;
    if (itsInt_connect_to_maq_ProxyOperationInterface != NULL) {
        res = itsInt_connect_to_maq_ProxyOperationInterface->connect_to_maq();
    }
    return res;
}

void MaqTapisReelIO::p_MaqTapisReelIO_C::disconnect() {
    
    if (itsVoid_disconnect_ProxyOperationInterface != NULL) {
        itsVoid_disconnect_ProxyOperationInterface->disconnect();
    }
    
}

bool_send_commandes_TrameCommandes_ProxyOperationInterface* MaqTapisReelIO::p_MaqTapisReelIO_C::getItsBool_send_commandes_TrameCommandes_ProxyOperationInterface() {
    return this;
}

int_connect_to_maq_ProxyOperationInterface* MaqTapisReelIO::p_MaqTapisReelIO_C::getItsInt_connect_to_maq_ProxyOperationInterface() {
    return this;
}

TrameCapteurs_read_capteurs_ProxyOperationInterface* MaqTapisReelIO::p_MaqTapisReelIO_C::getItsTrameCapteurs_read_capteurs_ProxyOperationInterface() {
    return this;
}

void_disconnect_ProxyOperationInterface* MaqTapisReelIO::p_MaqTapisReelIO_C::getItsVoid_disconnect_ProxyOperationInterface() {
    return this;
}

TrameCapteurs MaqTapisReelIO::p_MaqTapisReelIO_C::read_capteurs() {
    TrameCapteurs res;
    if (itsTrameCapteurs_read_capteurs_ProxyOperationInterface != NULL) {
        res = itsTrameCapteurs_read_capteurs_ProxyOperationInterface->read_capteurs();
    }
    return res;
}

bool MaqTapisReelIO::p_MaqTapisReelIO_C::send_commandes(TrameCommandes commandes) {
    bool res = false;
    if (itsBool_send_commandes_TrameCommandes_ProxyOperationInterface != NULL) {
        res = itsBool_send_commandes_TrameCommandes_ProxyOperationInterface->send_commandes(commandes);
    }
    return res;
}

void MaqTapisReelIO::p_MaqTapisReelIO_C::setItsBool_send_commandes_TrameCommandes_ProxyOperationInterface(bool_send_commandes_TrameCommandes_ProxyOperationInterface* p_bool_send_commandes_TrameCommandes_ProxyOperationInterface) {
    itsBool_send_commandes_TrameCommandes_ProxyOperationInterface = p_bool_send_commandes_TrameCommandes_ProxyOperationInterface;
}

void MaqTapisReelIO::p_MaqTapisReelIO_C::setItsInt_connect_to_maq_ProxyOperationInterface(int_connect_to_maq_ProxyOperationInterface* p_int_connect_to_maq_ProxyOperationInterface) {
    itsInt_connect_to_maq_ProxyOperationInterface = p_int_connect_to_maq_ProxyOperationInterface;
}

void MaqTapisReelIO::p_MaqTapisReelIO_C::setItsTrameCapteurs_read_capteurs_ProxyOperationInterface(TrameCapteurs_read_capteurs_ProxyOperationInterface* p_TrameCapteurs_read_capteurs_ProxyOperationInterface) {
    itsTrameCapteurs_read_capteurs_ProxyOperationInterface = p_TrameCapteurs_read_capteurs_ProxyOperationInterface;
}

void MaqTapisReelIO::p_MaqTapisReelIO_C::setItsVoid_disconnect_ProxyOperationInterface(void_disconnect_ProxyOperationInterface* p_void_disconnect_ProxyOperationInterface) {
    itsVoid_disconnect_ProxyOperationInterface = p_void_disconnect_ProxyOperationInterface;
}

void MaqTapisReelIO::p_MaqTapisReelIO_C::cleanUpRelations() {
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

MaqTapisReelIO::MaqTapisReelIO(IOxfActive* theActiveContext) : _ID_PC_(4), _NUM_MAQ_(2), connected(false) {
    NOTIFY_ACTIVE_CONSTRUCTOR(MaqTapisReelIO, MaqTapisReelIO(), 0, _DESIGN_MaqTapisReelIO_MaqTapisReelIO_SERIALIZE);
    setActiveContext(this, true);
    initRelations();
    initStatechart();
}

MaqTapisReelIO::~MaqTapisReelIO() {
    NOTIFY_DESTRUCTOR(~MaqTapisReelIO, false);
}

void MaqTapisReelIO::AppuyerDBA() {
    NOTIFY_OPERATION(AppuyerDBA, AppuyerDBA(), 0, _DESIGN_MaqTapisReelIO_AppuyerDBA_SERIALIZE);
    //#[ operation AppuyerDBA()
    //#]
}

void MaqTapisReelIO::AppuyerDBB() {
    NOTIFY_OPERATION(AppuyerDBB, AppuyerDBB(), 0, _DESIGN_MaqTapisReelIO_AppuyerDBB_SERIALIZE);
    //#[ operation AppuyerDBB()
    //#]
}

void MaqTapisReelIO::AppuyerDCA() {
    NOTIFY_OPERATION(AppuyerDCA, AppuyerDCA(), 0, _DESIGN_MaqTapisReelIO_AppuyerDCA_SERIALIZE);
    //#[ operation AppuyerDCA()
    //#]
}

void MaqTapisReelIO::AppuyerDCB() {
    NOTIFY_OPERATION(AppuyerDCB, AppuyerDCB(), 0, _DESIGN_MaqTapisReelIO_AppuyerDCB_SERIALIZE);
    //#[ operation AppuyerDCB()
    //#]
}

void MaqTapisReelIO::AvancerA() {
    NOTIFY_OPERATION(AvancerA, AvancerA(), 0, _DESIGN_MaqTapisReelIO_AvancerA_SERIALIZE);
    //#[ operation AvancerA()
    //#]
}

void MaqTapisReelIO::Demarrage() {
    NOTIFY_OPERATION(Demarrage, Demarrage(), 0, _DESIGN_MaqTapisReelIO_Demarrage_SERIALIZE);
    //#[ operation Demarrage()
    //#]
}

int MaqTapisReelIO::connect_to_maq() {
    NOTIFY_OPERATION(connect_to_maq, connect_to_maq(), 0, _DESIGN_MaqTapisReelIO_connect_to_maq_SERIALIZE);
    //#[ operation connect_to_maq()
     printf("\n coonecting to maq reel...");
    //initialisation driver CAN
        if ((handle[0] = CanOpenDriver(0, 0)) == -1)
        {
            printf("\nOpen Port 0 Failed!!");
            return -1;
    	}
    num_pc=_ID_PC_;
    num_tapis = _NUM_MAQ_;
    id_maq_pc = (num_tapis*16)+num_pc ;
    printf ("PC %d -> choix Tapis %d \n", num_pc, num_tapis);
     
    
    printf ("Initialisation CAN.....");
    init_com();
    
    _7841_Write(handle[0],1,0x04);
    _7841_Write(handle[0],1,0x04);
    
    printf ("SUCCESS\n");
    
    reset_commandes();
              
    connected = true;
    reset_commandes();
    printf ("connexion ok \n");
    return 1;
    //#]
}

void MaqTapisReelIO::disconnect() {
    NOTIFY_OPERATION(disconnect, disconnect(), 0, _DESIGN_MaqTapisReelIO_disconnect_SERIALIZE);
    //#[ operation disconnect()
    GEN(evDisconnect);
    //#]
}

void MaqTapisReelIO::init_com() {
    NOTIFY_OPERATION(init_com, init_com(), 0, _DESIGN_MaqTapisReelIO_init_com_SERIALIZE);
    //#[ operation init_com()
         //reset
    	_7841_Write(handle[0],0,0x01); 
    	
    	//CONFIGURATION
    	//CAN A
    	_7841_Write(handle[0],30,0x00);
    	
    	_7841_Write(handle[0],31,0x00);
    
    	_7841_Write(handle[0],8,0xFA);
    	//config BTR  50 kbis/s
    	_7841_Write(handle[0],6,0x07); //modif
    	
    	_7841_Write(handle[0],7,0x5c); // modif
    
    	//Config du mask
    	_7841_Write(handle[0],5,0x00);
    	_7841_Write(handle[0],4,id_maq_pc); // modif
    
    	//CAN A
    	_7841_Write(handle[0],30,0x00);
    	
    	_7841_Write(handle[0],31,0x00);
    	//relancer la carte
    	_7841_Write(handle[0],0,0x00);   
    	                                 
    	_7841_Write(handle[0],1,0x04);
    	_7841_Write(handle[0],1,0x04);      
    	
            
            
            
    //#]
}

void MaqTapisReelIO::message_0() {
    NOTIFY_OPERATION(message_0, message_0(), 0, _DESIGN_MaqTapisReelIO_message_0_SERIALIZE);
    //#[ operation message_0()
    //#]
}

void MaqTapisReelIO::mode_reel() {
    NOTIFY_OPERATION(mode_reel, mode_reel(), 0, _DESIGN_MaqTapisReelIO_mode_reel_SERIALIZE);
    //#[ operation mode_reel()
    //#]
}

TrameCapteurs MaqTapisReelIO::read_capteurs() {
    NOTIFY_OPERATION(read_capteurs, read_capteurs(), 0, _DESIGN_MaqTapisReelIO_read_capteurs_SERIALIZE);
    //#[ operation read_capteurs()
    recv_capteurs(&capteurs);
    return capteurs;
    //#]
}

void MaqTapisReelIO::reset_commandes() {
    NOTIFY_OPERATION(reset_commandes, reset_commandes(), 0, _DESIGN_MaqTapisReelIO_reset_commandes_SERIALIZE);
    //#[ operation reset_commandes()
    printf ("TAPIS REEL : reset commandes...\n");
    
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

bool MaqTapisReelIO::send_commandes(TrameCommandes commandes) {
    NOTIFY_OPERATION(send_commandes, send_commandes(TrameCommandes), 1, _DESIGN_MaqTapisReelIO_send_commandes_SERIALIZE);
    //#[ operation send_commandes(TrameCommandes)
    
    if (commandes.mava == 1 && commandes.mara==1) {
    		printf("/!\\ deux commandes contradictoires : mava et mara a 1 !! \n");
    		return false;
    }
    
    if (commandes.mavb == 1 && commandes.marb==1) {
    		printf("/!\\ deux commandes contradictoires : mavb et marb a 1 !! \n");
    		return false;
    }    		
    
    if (commandes.mavc == 1 && commandes.marc==1) {
    		printf("/!\\ deux commandes contradictoires : mavc et marc a 1 !! \n");
    		return false;
    }    		
    
    printf("\n mava=%d mara=%d mavb=%d marb=%d mavc=%d marc=%d ev=%d\n", 
        commandes.mava, commandes.mara, commandes.mavb, commandes.marb, commandes.mavc, commandes.marc, commandes.ev);
        		
    //printf("sending (mava,mara,mavb,marb,mavc,marb,ev)=(%d,%d,%d,%d,%d,%d,%d)...", bit[0],bit[1],bit[2],bit[3],bit[4],bit[5],bit[6]);
            octet_sortie=commandes.mava+commandes.mara*2+commandes.mavb*4+commandes.marb*8+commandes.mavc*16+commandes.marc*32+commandes.ev*64;
    
            while(((_7841_Read(handle[0],0x02))&0x04)==0);
    //printf("OK\n");
    		_7841_Write(handle[0],10,id_maq_pc);
    		_7841_Write(handle[0],11,0x01);
    		_7841_Write(handle[0],12,octet_sortie);
    		_7841_Write(handle[0],1,0x01);
    		
    		return true;
                 
    //#]
}

bool MaqTapisReelIO::recv_capteurs(TrameCapteurs* capteurs) {
    NOTIFY_OPERATION(recv_capteurs, recv_capteurs(TrameCapteurs*), 1, _DESIGN_MaqTapisReelIO_recv_capteurs_SERIALIZE);
    //#[ operation recv_capteurs(TrameCapteurs*)
    if(((_7841_Read(handle[0],2))&0x01)==1){
    		//printf("Dans le if \n");
    		octets_entree[0]=_7841_Read(handle[0],22);
    		octets_entree[1]=_7841_Read(handle[0],23);
    		octets_entree[2]=_7841_Read(handle[0],24);
    		
    		_7841_Write(handle[0],1,0x04);
    		
    		
    		//printf("Etat entrees\n\n");		
    		//printf("Debut cycle A :  %d\n",trame_entree[0]&0x01);		
    		capteurs->dca = octets_entree[0]&0x01;
    		
    		//printf("Debut cycle B :  %d\n",(trame_entree[0]&0x02)/2);
    		capteurs->dcb = (octets_entree[0]&0x02)/2;
    				
    		//printf("Debut tapis A :  %d\n",(trame_entree[0]&0x04)/4);
    		capteurs->deba = (octets_entree[0]&0x04)/4;		
    				
    		//printf("Milieu tapis A :  %d\n",(trame_entree[0]&0x08)/8);
    		capteurs->mia = (octets_entree[0]&0x08)/8;		
    		//if ((*entrees).Valeurs.mia==1) printf("#######      MIA        ###################### \n");
    				
    		//printf("Fin tapis A :  %d\n",trame_entree[1]&0x01);
    		capteurs->fina = octets_entree[1]&0x01;		
    		
    		//printf("Debut tapis B :  %d\n",(trame_entree[1]&0x02)/2);
    		capteurs->debb = (octets_entree[1]&0x02)/2;		
    		
    		//printf("Milieu Tapis B :  %d\n",(trame_entree[1]&0x04)/4);
    		capteurs->mib = (octets_entree[1]&0x04)/4;		
    		
    		//printf("Fin tapis B :  %d\n",(trame_entree[1]&0x08)/8);
    		capteurs->finb = (octets_entree[1]&0x08)/8;		
    		
    		//printf("Debut tapis C :  %d\n",trame_entree[2]&0x01);
    		capteurs->debc = octets_entree[2]&0x01;		
    		
    		//printf("Fin tapis C :  %d\n",(trame_entree[2]&0x02)/2);
    		capteurs->finc = (octets_entree[2]&0x02)/2;		
    		
    		//printf("Verin vers A :  %d\n",(trame_entree[2]&0x04)/4);
    		capteurs->versa = (octets_entree[2]&0x04)/4;		
    		
    		//printf("Verin vers B :  %d\n",(trame_entree[2]&0x08)/8);
    	    capteurs->versb = (octets_entree[2]&0x08)/8;	
    	    
    	    printf("\ndca=%d deba=%d mia=%d fina=%d\n", capteurs->dca, capteurs->deba, capteurs->mia, capteurs->fina);
            printf("dcb=%d debb=%d mib=%d finb=%d\n", capteurs->dcb, capteurs->debb, capteurs->mib, capteurs->finb);
            printf("debc=%d finc=%d versa=%d versb=%d \n", capteurs->debc, capteurs->finc, capteurs->versa, capteurs->versb);
     	
    		
    				return(true);
    	}
    		else 
    		    
    		return(false);  
    		
    		
    		
    //#]
}

MaqTapisReelIO::p_MaqTapisReelIO_C* MaqTapisReelIO::getP_MaqTapisReelIO() const {
    return (MaqTapisReelIO::p_MaqTapisReelIO_C*) &p_MaqTapisReelIO;
}

MaqTapisReelIO::p_MaqTapisReelIO_C* MaqTapisReelIO::get_p_MaqTapisReelIO() const {
    return (MaqTapisReelIO::p_MaqTapisReelIO_C*) &p_MaqTapisReelIO;
}

int MaqTapisReelIO::get_ID_PC_() const {
    return _ID_PC_;
}

void MaqTapisReelIO::set_ID_PC_(int p__ID_PC_) {
    _ID_PC_ = p__ID_PC_;
    NOTIFY_SET_OPERATION;
}

int MaqTapisReelIO::get_NUM_MAQ_() const {
    return _NUM_MAQ_;
}

void MaqTapisReelIO::set_NUM_MAQ_(int p__NUM_MAQ_) {
    _NUM_MAQ_ = p__NUM_MAQ_;
    NOTIFY_SET_OPERATION;
}

TrameCapteurs MaqTapisReelIO::getCapteurs() const {
    return capteurs;
}

void MaqTapisReelIO::setCapteurs(TrameCapteurs p_capteurs) {
    capteurs = p_capteurs;
}

TrameCommandes MaqTapisReelIO::getCommandes() const {
    return commandes;
}

void MaqTapisReelIO::setCommandes(TrameCommandes p_commandes) {
    commandes = p_commandes;
}

bool MaqTapisReelIO::getConnected() const {
    return connected;
}

void MaqTapisReelIO::setConnected(bool p_connected) {
    connected = p_connected;
}

bool MaqTapisReelIO::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    if(done)
        {
            startDispatching();
        }
    return done;
}

void MaqTapisReelIO::initRelations() {
    if (get_p_MaqTapisReelIO() != NULL) {
        get_p_MaqTapisReelIO()->connectMaqTapisReelIO(this);
    }
}

void MaqTapisReelIO::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void MaqTapisReelIO::rootState_entDef() {
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

IOxfReactive::TakeEventStatus MaqTapisReelIO::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
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
                            NOTIFY_STATE_ENTERED("ROOT.connected_to_maquette_reel");
                            rootState_subState = connected_to_maquette_reel;
                            rootState_active = connected_to_maquette_reel;
                            //#[ state connected_to_maquette_reel.(Entry) 
                            reset_commandes();
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("1");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State connected_to_maquette_reel
        case connected_to_maquette_reel:
        {
            if(IS_EVENT_TYPE_OF(evDisconnect__DESIGN_id))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    //#[ state connected_to_maquette_reel.(Exit) 
                    reset_commandes();
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.connected_to_maquette_reel");
                    NOTIFY_STATE_ENTERED("ROOT.idle");
                    pushNullTransition();
                    rootState_subState = idle;
                    rootState_active = idle;
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
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
void OMAnimatedMaqTapisReelIO::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("capteurs", UNKNOWN2STRING(myReal->capteurs));
    aomsAttributes->addAttribute("commandes", UNKNOWN2STRING(myReal->commandes));
    aomsAttributes->addAttribute("connected", x2String(myReal->connected));
    aomsAttributes->addAttribute("_ID_PC_", x2String(myReal->_ID_PC_));
    aomsAttributes->addAttribute("_NUM_MAQ_", x2String(myReal->_NUM_MAQ_));
    OMAnimatedMaquetteIO::serializeAttributes(aomsAttributes);
}

void OMAnimatedMaqTapisReelIO::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedMaquetteIO::serializeRelations(aomsRelations);
}

void OMAnimatedMaqTapisReelIO::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case MaqTapisReelIO::idle:
        {
            idle_serializeStates(aomsState);
        }
        break;
        case MaqTapisReelIO::connected_to_maquette_reel:
        {
            connected_to_maquette_reel_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedMaqTapisReelIO::idle_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.idle");
}

void OMAnimatedMaqTapisReelIO::connected_to_maquette_reel_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.connected_to_maquette_reel");
}
//#]

IMPLEMENT_REACTIVE_META_S_P(MaqTapisReelIO, _DESIGN, false, MaquetteIO, OMAnimatedMaquetteIO, OMAnimatedMaqTapisReelIO)

OMINIT_SUPERCLASS(MaquetteIO, OMAnimatedMaquetteIO)

OMREGISTER_REACTIVE_CLASS

IMPLEMENT_META_OP(OMAnimatedMaqTapisReelIO, _DESIGN_MaqTapisReelIO_set_ID_PC__int, "set_ID_PC_", FALSE, "set_ID_PC_(int)", 1)

IMPLEMENT_OP_CALL(_DESIGN_MaqTapisReelIO_set_ID_PC__int, MaqTapisReelIO, set_ID_PC_(p__ID_PC_), NO_OP())

IMPLEMENT_META_OP(OMAnimatedMaqTapisReelIO, _DESIGN_MaqTapisReelIO_set_NUM_MAQ__int, "set_NUM_MAQ_", FALSE, "set_NUM_MAQ_(int)", 1)

IMPLEMENT_OP_CALL(_DESIGN_MaqTapisReelIO_set_NUM_MAQ__int, MaqTapisReelIO, set_NUM_MAQ_(p__NUM_MAQ_), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: CodesGeneres\AnimationConfig\MaqTapisReelIO.cpp
*********************************************************************/
