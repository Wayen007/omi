/*
**==============================================================================
**
** Copyright (c) Microsoft Corporation. All rights reserved. See file LICENSE
** for license information.
**
**==============================================================================
*/

/* @migen@ */
#include <MI.h>
#include "ABC_Fan.h"

void MI_CALL ABC_Fan_Load(
    ABC_Fan_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context)
{
    *self = NULL;
    MI_PostResult(context, MI_RESULT_OK);
}

void MI_CALL ABC_Fan_Unload(
    ABC_Fan_Self* self,
    MI_Context* context)
{
    MI_PostResult(context, MI_RESULT_OK);
}

void MI_CALL ABC_Fan_EnumerateInstances(
    ABC_Fan_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    MI_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL ABC_Fan_GetInstance(
    ABC_Fan_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const ABC_Fan* instanceName,
    const MI_PropertySet* propertySet)
{
    MI_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL ABC_Fan_CreateInstance(
    ABC_Fan_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const ABC_Fan* newInstance)
{
    MI_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL ABC_Fan_ModifyInstance(
    ABC_Fan_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const ABC_Fan* modifiedInstance,
    const MI_PropertySet* propertySet)
{
    MI_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL ABC_Fan_DeleteInstance(
    ABC_Fan_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const ABC_Fan* instanceName)
{
    MI_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL ABC_Fan_Invoke_RequestStateChange(
    ABC_Fan_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const ABC_Fan* instanceName,
    const ABC_Fan_RequestStateChange* in)
{
    MI_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL ABC_Fan_Invoke_SetPowerState(
    ABC_Fan_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const ABC_Fan* instanceName,
    const ABC_Fan_SetPowerState* in)
{
    MI_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL ABC_Fan_Invoke_Reset(
    ABC_Fan_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const ABC_Fan* instanceName,
    const ABC_Fan_Reset* in)
{
    MI_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL ABC_Fan_Invoke_EnableDevice(
    ABC_Fan_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const ABC_Fan* instanceName,
    const ABC_Fan_EnableDevice* in)
{
    MI_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL ABC_Fan_Invoke_OnlineDevice(
    ABC_Fan_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const ABC_Fan* instanceName,
    const ABC_Fan_OnlineDevice* in)
{
    MI_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL ABC_Fan_Invoke_QuiesceDevice(
    ABC_Fan_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const ABC_Fan* instanceName,
    const ABC_Fan_QuiesceDevice* in)
{
    MI_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL ABC_Fan_Invoke_SaveProperties(
    ABC_Fan_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const ABC_Fan* instanceName,
    const ABC_Fan_SaveProperties* in)
{
    MI_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL ABC_Fan_Invoke_RestoreProperties(
    ABC_Fan_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const ABC_Fan* instanceName,
    const ABC_Fan_RestoreProperties* in)
{
    MI_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL ABC_Fan_Invoke_SetSpeed(
    ABC_Fan_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const ABC_Fan* instanceName,
    const ABC_Fan_SetSpeed* in)
{
    MI_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

