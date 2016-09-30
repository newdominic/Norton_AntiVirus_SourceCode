#ifndef __SCANBOOT_H
#define __SCANBOOT_H

#include "platform.h"

#include <stdio.h>
#include <stdlib.h>

#include "avshared.h"
#include "shared.h"


///////////////////////////////////////////////////////////////////////////////
// Scan boot options structure
///////////////////////////////////////////////////////////////////////////////
typedef struct {
	char	szDriveLetter[4];
	char	szDefLoc[_MAX_PATH];
	char	szNavexInfFile[_MAX_PATH];
	WORD	wHeuristicLevel;
	DWORD	dwIterations;
	char	szLogLoc[_MAX_PATH];
	DWORD	dwOptions;
} SCANBOOTOPTS, *LPSCANBOOTOPTS;



///////////////////////////////////////////////////////////////////////////////
//
//	Function:
//		void ScanBoot()
//
//	Description:
//
//	Parameters:
//		argc
//		argv
//
//	Returns:
//
///////////////////////////////////////////////////////////////////////////////
void ScanBoot (int argc, char* argv[]);



///////////////////////////////////////////////////////////////////////////////
//
//	Function:
//		BOOL GetScanBootOptions()
//
//	Description:
//
//	Parameters:
//		lpBootScanOpts
//		argc
//		argv
//
//	Returns:
//
///////////////////////////////////////////////////////////////////////////////
BOOL GetScanBootOptions 
(
	LPSCANBOOTOPTS	lpScanBootOpts,
	int				argc,
	char*			argv[]
);


///////////////////////////////////////////////////////////////////////////////
//
//	Function:
//		void ScanBootHelp ()
//
//	Description:
//		Displays boot scan help screen
//
//	Parameters:
//		NONE
//
//	Returns:
//		NONE
//
///////////////////////////////////////////////////////////////////////////////
void ScanBootHelp (void);

#endif // __SCANBOOT_H