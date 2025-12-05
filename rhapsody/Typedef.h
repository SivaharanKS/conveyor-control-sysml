///////////////////////////////////////////////////////////////////////////////
//
//      Name   :    TYPEDEF.H
//      Purpose:    cPCI/PCI-7841 driver structure define
//      Version:    Gamma - 1
//      Date   :    1999/12/15
//      Author :    
//
//      Copyright 1999 ADLink Technology 	
//      
//      Modified:   
//
///////////////////////////////////////////////////////////////////////////////
#ifndef __TYPEDEF_H__
#define __TYPEDEF_H__

#ifndef BYTE
typedef unsigned char BYTE;
#endif  //  BYTE

#ifndef WORD
typedef unsigned short WORD;
#endif  //  WORD

#ifndef DWORD
typedef unsigned long DWORD;
#endif  //  DWORD

typedef void *HANDLE;

//#pragma pack(push,1)

//  Define for can port struct
typedef struct _tagPORT_STRUCT
{
    WORD mode;       //  0   for 11-bit;     1 for 29-bit
    DWORD accCode;
	DWORD accMask;
    WORD baudrate;	//	0 : 125KBps, 1 : 250KBps, 2 : 500KBps, 3 : 1MBps,4 : Self-Defined
	BYTE brp;
	BYTE tseg1;
	BYTE tseg2;	//	Used only if baudrate = 4
	BYTE sjw;
	BYTE sam;          //  Used only if baudrate = 4

}PORT_STRUCT;

//  Define can packet struct
typedef struct _tagCAN_PACKET
{
    DWORD CAN_ID;       //  CAN id
    BYTE rtr;           //  RTR bit
    BYTE len;           //  Data length
    BYTE data[8];       //  Data
    DWORD time;         //  Occur time (non use)
    BYTE reserved;      //  future use
}CAN_PACKET;

//  Define CAN status register
struct PORTREG_BIT
{
    unsigned char RxBuffer      : 1;
    unsigned char DataOverrun   : 1;
    unsigned char TxBuffer      : 1;
    unsigned char TxEnd         : 1;
    unsigned char RxStatus      : 1;
    unsigned char TxStatus      : 1;
    unsigned char ErrorStatus   : 1;
    unsigned char BusStatus     : 1;
    //unsigned short reserved      : 8;
};

typedef union _tagPORT_REG
{
	struct PORTREG_BIT bit;
    unsigned char reg;
}PORT_REG;

typedef struct _tagPORT_STATUS
{
   PORT_REG status;
 }PORT_STATUS;

//#pragma pack(pop)

#define DISABLE            0x00
#define ENABLE             0x01

#define PCI_INIT_OK        0x00
#define PCI_INIT_ERROR     -1
#define PCI_INIT_NotFound  -2

#define EEPROM_WR_OK       0x00
#define EEPROM_WR_ERR      -3

#endif      //  __TYPEDEF_H__

