/******************************************************************************
** Copyright (c) 2013-2016 Intel Corporation All Rights Reserved
**
** Licensed under the Apache License, Version 2.0 (the "License"); you may not
** use this file except in compliance with the License.
**
** You may obtain a copy of the License at
**     http://www.apache.org/licenses/LICENSE-2.0
**
** Unless required by applicable law or agreed to in writing, software
** distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
** WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
**
** See the License for the specific language governing permissions and
** limitations under the License.
**
******************************************************************************/

#include "DomainPowerControlBase.h"

DomainPowerControlBase::DomainPowerControlBase(UIntN participantIndex, UIntN domainIndex,
    ParticipantServicesInterface* participantServicesInterface)
    : ControlBase(participantIndex, domainIndex, participantServicesInterface)
{

}

DomainPowerControlBase::~DomainPowerControlBase()
{

}

Bool DomainPowerControlBase::checkEnabled(PowerControlType::Type controlType)
{
    try
    {
        UInt32 plEnabled = getParticipantServices()->primitiveExecuteGetAsUInt32(
            GET_RAPL_POWER_LIMIT_ENABLE, getDomainIndex(), (UInt8)controlType);
        return plEnabled > 0 ? true : false;
    }
    catch (...)
    {
        return false;
    }
}

void DomainPowerControlBase::setEnabled(PowerControlType::Type controlType, Bool enable)
{
    try
    {
        getParticipantServices()->primitiveExecuteSetAsUInt32(
            SET_RAPL_POWER_LIMIT_ENABLE, enable ? (UInt32)1 : (UInt32)0, getDomainIndex(), (UInt8)controlType);
    }
    catch (...)
    {

    }
}