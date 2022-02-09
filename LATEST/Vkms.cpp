/*****************************************************/
/* File   : Vkms.cpp                                 */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "Vkms.h"

#include "Vkms_EcuM.h"
#include "Vkms_SchM.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
class_Vkms_EcuM_Init Vkms_EcuM_Init;
class_Vkms_SchM_Main Vkms_SchM_Main;
class_Vkms Vkms;

class_EcuM_Init_Client *EcuM_Init_Client_ptr_Vkms = &Vkms_EcuM_Init;
class_SchM_Main_Client *SchM_Main_Client_ptr_Vkms = &Vkms_SchM_Main;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, VKMS_CODE) class_Vkms_EcuM_Init::InitFunction(void){
}

FUNC(void, VKMS_CODE) class_Vkms_SchM_Main::MainFunction(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

