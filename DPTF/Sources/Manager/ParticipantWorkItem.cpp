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

#include "ParticipantWorkItem.h"
#include "ParticipantManagerInterface.h"
#include "EsifServices.h"

ParticipantWorkItem::ParticipantWorkItem(DptfManagerInterface* dptfManager, FrameworkEvent::Type frameworkEventType,
    UIntN participantIndex) : WorkItem(dptfManager, frameworkEventType), m_participantIndex(participantIndex)
{
}

ParticipantWorkItem::~ParticipantWorkItem(void)
{
}

Bool ParticipantWorkItem::matches(const WorkItemMatchCriteria& matchCriteria) const
{
    return matchCriteria.testAgainstMatchList(getFrameworkEventType(), getUniqueId(), getParticipantIndex());
}

std::string ParticipantWorkItem::toXml(void) const
{
    throw implement_me();
}

UIntN ParticipantWorkItem::getParticipantIndex(void) const
{
    return m_participantIndex;
}

Participant* ParticipantWorkItem::getParticipantPtr(void) const
{
    return getParticipantManager()->getParticipantPtr(m_participantIndex);
}

void ParticipantWorkItem::writeParticipantWorkItemErrorMessage(const std::exception& ex, const std::string& functionName) const
{
    ManagerMessage message = ManagerMessage(getDptfManager(), FLF, "Unhandled exception caught during execution of work item");
    message.setFrameworkEvent(getFrameworkEventType());
    message.setParticipantIndex(getParticipantIndex());
    message.setExceptionCaught(functionName, ex.what());
    getEsifServices()->writeMessageError(message);
}

void ParticipantWorkItem::writeParticipantWorkItemErrorMessagePolicy(const std::exception& ex, const std::string& functionName, UIntN policyIndex)
{
    ManagerMessage message = ManagerMessage(getDptfManager(), FLF, "Unhandled exception caught during execution of work item");
    message.setFrameworkEvent(getFrameworkEventType());
    message.setParticipantIndex(getParticipantIndex());
    message.setExceptionCaught(functionName, ex.what());
    message.setPolicyIndex(policyIndex);
    getEsifServices()->writeMessageError(message);
}

void ParticipantWorkItem::writeParticipantWorkItemWarningMessagePolicy(const std::exception& ex, const std::string& functionName, UIntN policyIndex)
{
    ManagerMessage message = ManagerMessage(getDptfManager(), FLF, "Unhandled exception caught during execution of work item");
    message.setFrameworkEvent(getFrameworkEventType());
    message.setParticipantIndex(getParticipantIndex());
    message.setExceptionCaught(functionName, ex.what());
    message.setPolicyIndex(policyIndex);
    getEsifServices()->writeMessageWarning(message);
}

void ParticipantWorkItem::writeParticipantWorkItemStartingInfoMessage() const
{
    ManagerMessage message = ManagerMessage(getDptfManager(), FLF, "Starting execution of work item.");
    message.setFrameworkEvent(getFrameworkEventType());
    message.setParticipantIndex(getParticipantIndex());
    getEsifServices()->writeMessageInfo(message);
}
