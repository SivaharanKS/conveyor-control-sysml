
############# Target type (Debug/Release) ##################
############################################################
CPPCompileDebug= /Zi /Od /D "_DEBUG" $(LIBCRT_FLAG)d  /Fd"$(TARGET_NAME)" 
CPPCompileRelease= /Ox /D"NDEBUG" $(LIBCRT_FLAG) /Fd"$(TARGET_NAME)" 
LinkDebug=
LinkRelease=
BuildSet=Debug
SUBSYSTEM=/SUBSYSTEM:console
RPFrameWorkDll=False
SimulinkLibName=

ConfigurationCPPCompileSwitches=   /I . /I . /I $(OMROOT)\LangCpp /I $(OMROOT)\LangCpp\oxf /nologo /W3 $(ENABLE_EH) $(CRT_FLAGS) $(CPPCompileDebug) /D "_AFXDLL" /D "WIN32" /D "_CONSOLE" /D "_MBCS" /D "_WINDOWS" $(INST_FLAGS) $(INCLUDE_PATH) $(INST_INCLUDES) /c   

SIMULINK_CONFIG=False
!IF "$(SIMULINK_CONFIG)" == "True"
ConfigurationCPPCompileSwitches=$(ConfigurationCPPCompileSwitches) /D "OM_WITH_CLEANUP"
!ENDIF


!IF "$(RPFrameWorkDll)" == "True"
ConfigurationCPPCompileSwitches=$(ConfigurationCPPCompileSwitches) /D "FRAMEWORK_DLL"
!ENDIF

################### Compilation flags ######################
############################################################
INCLUDE_QUALIFIER=/I
DEFINE_QUALIFIER=/D

!IF "False" == "True"
MT_PREFIX=MT
LIBCRT_FLAG=/MT
!ELSE
MT_PREFIX=
LIBCRT_FLAG=/MD
!ENDIF

LIB_PREFIX=MSVC15x64$(MT_PREFIX)

CRT_FLAGS=$(DEFINE_QUALIFIER)_CRT_SECURE_NO_DEPRECATE $(DEFINE_QUALIFIER)_CRT_SECURE_NO_WARNINGS
ENABLE_EH=/EHa

WINMM_LIB=winmm.lib

################### Commands definition #########################
#################################################################
RMDIR = rmdir
LIB_CMD=link.exe -lib
LINK_CMD=link.exe
LIB_FLAGS=$(LinkDebug)  /NOLOGO   
LINK_FLAGS=$(LinkDebug)  /NOLOGO    $(SUBSYSTEM) /MACHINE:x64 

############### Generated macros #################
##################################################

FLAGSFILE=
RULESFILE=
OMROOT="C:\Program Files\IBM\Rhapsody\9.0.2\Share"
RHPROOT="C:\Program Files\IBM\Rhapsody\9.0.2"
FRAMEWORK_LIB_ROOT="C:\ProgramData\IBM\Rhapsody\9.0.2x64\UserShare"

CPP_EXT=.cpp
H_EXT=.h
OBJ_EXT=.obj
EXE_EXT=.exe
LIB_EXT=.lib

INSTRUMENTATION=Animation

TIME_MODEL=RealTime

TARGET_TYPE=Executable

TARGET_NAME=CodesGeneres

all : $(TARGET_NAME)$(EXE_EXT) CodesGeneres.mak

TARGET_MAIN=MainCodesGeneres

LIBS= \
  ..\..\7841_x64.lib

INCLUDE_PATH= \
  $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/osconfig/WIN32

ADDITIONAL_OBJS=

OBJS= \
  MaqTapisReelIO.obj \
  MAIN_SysConvoyage.obj \
  MaquetteIO.obj \
  MaqTapisSimIO.obj \
  MaquetteTapis.obj \
  TapisA.obj \
  TapisC.obj \
  Griffe.obj \
  TapisB.obj \
  Operateur.obj \
  actor_2.obj \
  aTapisA.obj \
  aTapisC.obj \
  Operateur_2.obj \
  Maquette.obj \
  _DESIGN.obj \
  _ANALYSE.obj \
  ProxyPortInterfaces.obj




OBJ_DIR=

!IF "$(OBJ_DIR)"!=""
CREATE_OBJ_DIR=if not exist $(OBJ_DIR) mkdir $(OBJ_DIR)
CLEAN_OBJ_DIR= if exist $(OBJ_DIR) $(RMDIR) $(OBJ_DIR)
!ELSE
CREATE_OBJ_DIR=
CLEAN_OBJ_DIR=
!ENDIF

######################## Predefined macros ############################
#######################################################################
!IF "$(OBJS)" != ""
$(OBJS) : $(INST_LIBS) $(OXF_LIBS)
!ENDIF

LIB_POSTFIX=
!IF "$(BuildSet)"=="Release"
LIB_POSTFIX=R
!ENDIF

!IF "$(TARGET_TYPE)" == "Executable"
LinkDebug=$(LinkDebug) /DEBUG
LinkRelease=$(LinkRelease) /OPT:NOREF
!ELSEIF "$(TARGET_TYPE)" == "Library"
LinkDebug=$(LinkDebug)
!ENDIF


!IF "$(INSTRUMENTATION)" == "Animation"
INST_FLAGS=/D "OMANIMATOR"
INST_INCLUDES=/I $(OMROOT)\LangCpp\aom /I $(OMROOT)\LangCpp\tom
!IF "$(RPFrameWorkDll)" == "True"
INST_LIBS= 
OXF_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxfanimdll$(LIB_POSTFIX)$(LIB_EXT) 
!ELSE
INST_LIBS= $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)aomanim$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsiminst$(LIB_POSTFIX)$(LIB_EXT)
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxfinst$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)omComAppl$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName)
!ENDIF
SOCK_LIB=wsock32.lib

!ELSEIF "$(INSTRUMENTATION)" == "Tracing"
INST_FLAGS=/D "OMTRACER"
INST_INCLUDES=/I $(OMROOT)\LangCpp\aom /I $(OMROOT)\LangCpp\tom
!IF "$(RPFrameWorkDll)" == "True"
INST_LIBS=
OXF_LIBS= $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxftracedll$(LIB_POSTFIX)$(LIB_EXT) 
!ELSE
INST_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)tomtrace$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)aomtrace$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsiminst$(LIB_POSTFIX)$(LIB_EXT)
OXF_LIBS= $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxfinst$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)omComAppl$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName)
!ENDIF
SOCK_LIB=wsock32.lib

!ELSEIF "$(INSTRUMENTATION)" == "None" 
INST_FLAGS=
INST_INCLUDES=
INST_LIBS=
!IF "$(RPFrameWorkDll)" == "True"
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxfdll$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsim$(LIB_POSTFIX)$(LIB_EXT)
!ELSE
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxf$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsim$(LIB_POSTFIX)$(LIB_EXT)
!ENDIF
SOCK_LIB=

!ELSE
!ERROR An invalid Instrumentation $(INSTRUMENTATION) is specified.
!ENDIF



################## Generated dependencies ########################
##################################################################






MaqTapisReelIO.obj : MaqTapisReelIO.cpp MaqTapisReelIO.h    _DESIGN.h MaquetteIO.h TrameCapteurs_read_capteurs_ProxyOperationInterface.h void_disconnect_ProxyOperationInterface.h int_connect_to_maq_ProxyOperationInterface.h bool_send_commandes_TrameCommandes_ProxyOperationInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"MaqTapisReelIO.obj" "MaqTapisReelIO.cpp" 



MAIN_SysConvoyage.obj : MAIN_SysConvoyage.cpp MAIN_SysConvoyage.h    _DESIGN.h MaqTapisReelIO.h MaqTapisSimIO.h MaquetteTapis.h TapisA.h TapisC.h Griffe.h TapisB.h MaquetteIO.h TrameCapteurs_read_capteurs_ProxyOperationInterface.h void_disconnect_ProxyOperationInterface.h int_connect_to_maq_ProxyOperationInterface.h bool_send_commandes_TrameCommandes_ProxyOperationInterface.h void_avancerA_ProxyOperationInterface.h void_arreterA_ProxyOperationInterface.h void_reculerA_ProxyOperationInterface.h void_avancerC_ProxyOperationInterface.h void_arreterC_ProxyOperationInterface.h void_reculerC_ProxyOperationInterface.h void_griffeA_ProxyOperationInterface.h void_griffeB_ProxyOperationInterface.h void_avancerB_ProxyOperationInterface.h void_arreterB_ProxyOperationInterface.h void_reculerB_ProxyOperationInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"MAIN_SysConvoyage.obj" "MAIN_SysConvoyage.cpp" 



MaquetteIO.obj : MaquetteIO.cpp MaquetteIO.h    _DESIGN.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"MaquetteIO.obj" "MaquetteIO.cpp" 



MaqTapisSimIO.obj : MaqTapisSimIO.cpp MaqTapisSimIO.h    _DESIGN.h MaquetteIO.h bool_send_commandes_TrameCommandes_ProxyOperationInterface.h TrameCapteurs_read_capteurs_ProxyOperationInterface.h int_connect_to_maq_ProxyOperationInterface.h void_disconnect_ProxyOperationInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"MaqTapisSimIO.obj" "MaqTapisSimIO.cpp" 



MaquetteTapis.obj : MaquetteTapis.cpp MaquetteTapis.h    _DESIGN.h bool_send_commandes_TrameCommandes_ProxyOperationInterface.h TrameCapteurs_read_capteurs_ProxyOperationInterface.h int_connect_to_maq_ProxyOperationInterface.h void_disconnect_ProxyOperationInterface.h void_avancerA_ProxyOperationInterface.h void_arreterA_ProxyOperationInterface.h void_reculerA_ProxyOperationInterface.h void_avancerC_ProxyOperationInterface.h void_arreterC_ProxyOperationInterface.h void_reculerC_ProxyOperationInterface.h void_griffeA_ProxyOperationInterface.h void_griffeB_ProxyOperationInterface.h void_avancerB_ProxyOperationInterface.h void_arreterB_ProxyOperationInterface.h void_reculerB_ProxyOperationInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"MaquetteTapis.obj" "MaquetteTapis.cpp" 



TapisA.obj : TapisA.cpp TapisA.h    _DESIGN.h void_avancerA_ProxyOperationInterface.h void_arreterA_ProxyOperationInterface.h void_reculerA_ProxyOperationInterface.h void_avancerC_ProxyOperationInterface.h void_arreterC_ProxyOperationInterface.h void_reculerC_ProxyOperationInterface.h void_griffeA_ProxyOperationInterface.h void_griffeB_ProxyOperationInterface.h void_avancerB_ProxyOperationInterface.h void_arreterB_ProxyOperationInterface.h void_reculerB_ProxyOperationInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"TapisA.obj" "TapisA.cpp" 



TapisC.obj : TapisC.cpp TapisC.h    _DESIGN.h void_avancerA_ProxyOperationInterface.h void_arreterA_ProxyOperationInterface.h void_reculerA_ProxyOperationInterface.h void_avancerC_ProxyOperationInterface.h void_arreterC_ProxyOperationInterface.h void_reculerC_ProxyOperationInterface.h void_griffeA_ProxyOperationInterface.h void_griffeB_ProxyOperationInterface.h void_avancerB_ProxyOperationInterface.h void_arreterB_ProxyOperationInterface.h void_reculerB_ProxyOperationInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"TapisC.obj" "TapisC.cpp" 



Griffe.obj : Griffe.cpp Griffe.h    _DESIGN.h void_avancerA_ProxyOperationInterface.h void_arreterA_ProxyOperationInterface.h void_reculerA_ProxyOperationInterface.h void_avancerC_ProxyOperationInterface.h void_arreterC_ProxyOperationInterface.h void_reculerC_ProxyOperationInterface.h void_griffeA_ProxyOperationInterface.h void_griffeB_ProxyOperationInterface.h void_avancerB_ProxyOperationInterface.h void_arreterB_ProxyOperationInterface.h void_reculerB_ProxyOperationInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Griffe.obj" "Griffe.cpp" 



TapisB.obj : TapisB.cpp TapisB.h    _DESIGN.h void_avancerA_ProxyOperationInterface.h void_arreterA_ProxyOperationInterface.h void_reculerA_ProxyOperationInterface.h void_avancerC_ProxyOperationInterface.h void_arreterC_ProxyOperationInterface.h void_reculerC_ProxyOperationInterface.h void_griffeA_ProxyOperationInterface.h void_griffeB_ProxyOperationInterface.h void_avancerB_ProxyOperationInterface.h void_arreterB_ProxyOperationInterface.h void_reculerB_ProxyOperationInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"TapisB.obj" "TapisB.cpp" 



Operateur.obj : Operateur.cpp Operateur.h    _ANALYSE.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Operateur.obj" "Operateur.cpp" 



actor_2.obj : actor_2.cpp actor_2.h    _ANALYSE.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"actor_2.obj" "actor_2.cpp" 



aTapisA.obj : aTapisA.cpp aTapisA.h    _ANALYSE.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"aTapisA.obj" "aTapisA.cpp" 



aTapisC.obj : aTapisC.cpp aTapisC.h    _ANALYSE.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"aTapisC.obj" "aTapisC.cpp" 



Operateur_2.obj : Operateur_2.cpp Operateur_2.h    _ANALYSE.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Operateur_2.obj" "Operateur_2.cpp" 



Maquette.obj : Maquette.cpp Maquette.h    _ANALYSE.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Maquette.obj" "Maquette.cpp" 



_DESIGN.obj : _DESIGN.cpp _DESIGN.h    MaqTapisReelIO.h MAIN_SysConvoyage.h MaquetteIO.h MaqTapisSimIO.h MaquetteTapis.h TapisA.h TapisC.h Griffe.h TapisB.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"_DESIGN.obj" "_DESIGN.cpp" 



_ANALYSE.obj : _ANALYSE.cpp _ANALYSE.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"_ANALYSE.obj" "_ANALYSE.cpp" 



ProxyPortInterfaces.obj : ProxyPortInterfaces.cpp ProxyPortInterfaces.h    TrameCapteurs_read_capteurs_ProxyOperationInterface.h void_disconnect_ProxyOperationInterface.h int_connect_to_maq_ProxyOperationInterface.h bool_send_commandes_TrameCommandes_ProxyOperationInterface.h void_avancerA_ProxyOperationInterface.h void_arreterA_ProxyOperationInterface.h void_reculerA_ProxyOperationInterface.h void_avancerC_ProxyOperationInterface.h void_arreterC_ProxyOperationInterface.h void_reculerC_ProxyOperationInterface.h void_griffeA_ProxyOperationInterface.h void_griffeB_ProxyOperationInterface.h void_avancerB_ProxyOperationInterface.h void_arreterB_ProxyOperationInterface.h void_reculerB_ProxyOperationInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ProxyPortInterfaces.obj" "ProxyPortInterfaces.cpp" 






$(TARGET_MAIN)$(OBJ_EXT) : $(TARGET_MAIN)$(CPP_EXT) $(OBJS) 
	$(CPP) $(ConfigurationCPPCompileSwitches) /Fo"$(TARGET_MAIN)$(OBJ_EXT)" $(TARGET_MAIN)$(CPP_EXT)

########################## Linking instructions ###############################
###############################################################################
$(TARGET_NAME)$(EXE_EXT): $(OBJS) $(ADDITIONAL_OBJS) $(TARGET_MAIN)$(OBJ_EXT) CodesGeneres.mak 
	@echo Linking $(TARGET_NAME)$(EXE_EXT)
	$(LINK_CMD)  $(TARGET_MAIN)$(OBJ_EXT) $(OBJS) $(ADDITIONAL_OBJS) \
	$(LIBS) \
	$(INST_LIBS) \
	$(OXF_LIBS) \
	$(SOCK_LIB) \
	$(WINMM_LIB) \
	$(LINK_FLAGS) /out:$(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest mt.exe -manifest $@.manifest -outputresource:$(TARGET_NAME)$(EXE_EXT);1



$(TARGET_NAME)$(LIB_EXT) : $(OBJS) $(ADDITIONAL_OBJS) CodesGeneres.mak
	@echo Building library $@
	$(LIB_CMD) $(LIB_FLAGS) /out:$(TARGET_NAME)$(LIB_EXT) $(OBJS) $(ADDITIONAL_OBJS) $(LIBS)

clean:
	@echo Cleanup
	if exist MaqTapisReelIO.obj erase MaqTapisReelIO.obj
	if exist MAIN_SysConvoyage.obj erase MAIN_SysConvoyage.obj
	if exist MaquetteIO.obj erase MaquetteIO.obj
	if exist MaqTapisSimIO.obj erase MaqTapisSimIO.obj
	if exist MaquetteTapis.obj erase MaquetteTapis.obj
	if exist TapisA.obj erase TapisA.obj
	if exist TapisC.obj erase TapisC.obj
	if exist Griffe.obj erase Griffe.obj
	if exist TapisB.obj erase TapisB.obj
	if exist Operateur.obj erase Operateur.obj
	if exist actor_2.obj erase actor_2.obj
	if exist aTapisA.obj erase aTapisA.obj
	if exist aTapisC.obj erase aTapisC.obj
	if exist Operateur_2.obj erase Operateur_2.obj
	if exist Maquette.obj erase Maquette.obj
	if exist _DESIGN.obj erase _DESIGN.obj
	if exist _ANALYSE.obj erase _ANALYSE.obj
	if exist ProxyPortInterfaces.obj erase ProxyPortInterfaces.obj
	if exist $(TARGET_MAIN)$(OBJ_EXT) erase $(TARGET_MAIN)$(OBJ_EXT)
	if exist *$(OBJ_EXT) erase *$(OBJ_EXT)
	if exist $(TARGET_NAME).pdb erase $(TARGET_NAME).pdb
	if exist $(TARGET_NAME)$(LIB_EXT) erase $(TARGET_NAME)$(LIB_EXT)
	if exist $(TARGET_NAME).ilk erase $(TARGET_NAME).ilk
	if exist $(TARGET_NAME)$(EXE_EXT) erase $(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest erase $(TARGET_NAME)$(EXE_EXT).manifest
	$(CLEAN_OBJ_DIR)
	
