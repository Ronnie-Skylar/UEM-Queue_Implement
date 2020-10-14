/*
 * Program implementation for queue to give a program perspective from a real life perspective.
 *
 * This is the main entry module for the program.
 */



// @region		Integrated includes //

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

// @endregion //



// @region		MACROS //

/**
 * A macro which returns the size of the array.
 * @return	[int]	[The size of the array]
 */
#define		ArraySize(x) 	( sizeof(x) / sizeof(x)[0] )

// @endregion



// @region Global variables //

int g_SizeOfQueue;
int g_LastOfQueue;


// @endrgion //



// @region		User-defined includes //

#include "rlutil.h" 		// An external headeer file only for the usage of colors & boolean datatype (TRUE / FALSE) //

#include "FuncDeclaration.inc"
#include "Debug.inc"
#include "FuncDefinition.inc"
#include "QueueMenu.inc"
#include "QueueAlter.inc"

/*
#include "Alteration.inc"
#include "Utilities.inc"
#include "StackMenu.inc"
*/

// @endregion //



/**
 * Description: The main entry point of the program.
 * 
 * Note		The program will not actually start from here as in the module FuncDeclaration Init() is the constructor.
 * @return	[int]		[always 0 to exit the program]
 */
int main(){

	cls();

	RequestQueueSize();

	return 0;
}