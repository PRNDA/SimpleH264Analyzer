#include "stdafx.h"
#include "Residual.h"
#include "Macroblock.h"

CResidual::CResidual(UINT8 *pSODB, UINT32 offset, CMacroblock *mb)
{
	m_macroblock_belongs = mb;
	m_pSODB = pSODB;
	m_bypeOffset = offset / 8;
	m_bitOffset = offset % 8;
}

CResidual::~CResidual()
{
}

int CResidual::Parse_macroblock_residual()
{
	return kPARSING_ERROR_NO_ERROR;
}
