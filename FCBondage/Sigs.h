#ifndef _SIGS_H_
#define _SIGS_H_
const unsigned __int8 Input_ObjectSig[15] =
{
	0x5D, 0xFF, 0xE2, 0x8B, 0x01, 0x8B, 0x50, 0x2C, 0x5D, 0xFF, 0xE2, 0x8B, 0x01, 0x8B, 0x50
};


const unsigned __int8 InitCommandStruct_FuncSig[12] =
{
	0x89, 0x06, 0xC6, 0x00, 0x00, 0x83, 0xFF, 0xFF, 0x75, 0x14, 0x8B, 0xC3
};


const unsigned __int8 IncomingCommand_FuncSig[14] =
{
	0x8D, 0x55, 0xDC, 0x52, 0x56, 0x8B, 0xCF, 0x89, 0x45, 0xEC, 0x89, 0x45, 0xF0, 0x89
};


const unsigned __int8 GetItemInfo_FuncSig[14] =
{
	0x55, 0x8B, 0xEC, 0x8B, 0x45, 0x08, 0x3D, 0x40, 0x42, 0x0F, 0x00, 0x72, 0x05, 0x2D
};


const unsigned __int8 ItemPacket_FuncSig[18] = 
{
	0x55, 0x8B, 0xEC, 0x83, 0xEC, 0x44, 0xA1, 0x68, 0xC0, 0x11, 0x02, 0x33, 0xC5, 0x89, 0x45, 0xFC, 0x53, 0x57
};

const unsigned __int8 VerifyThreadOrigin_FuncSig[12] =
{
	0x5E, 0x5B, 0xC3, 0x55, 0x8B, 0xEC, 0xA1, 0x88, 0x8A, 0x4B, 0x02, 0x56
};
#endif