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

#include "Dptf.h"
#include "WIDomainAllocate.h"
#include "WIDomainConfigTdpCapabilityChanged.h"
#include "WIDomainCoreControlCapabilityChanged.h"
#include "WIDomainCreate.h"
#include "WIDomainDestroy.h"
#include "WIDomainDisplayControlCapabilityChanged.h"
#include "WIDomainDisplayStatusChanged.h"
#include "WIDomainPerformanceControlCapabilityChanged.h"
#include "WIDomainPerformanceControlsChanged.h"
#include "WIDomainPowerControlCapabilityChanged.h"
#include "WIDomainPriorityChanged.h"
#include "WIDomainRadioConnectionStatusChanged.h"
#include "WIDomainRfProfileChanged.h"
#include "WIDomainTemperatureThresholdCrossed.h"
#include "WIDomainVirtualSensorCalibrationTableChanged.h"
#include "WIDomainVirtualSensorPollingTableChanged.h"
#include "WIDomainVirtualSensorRecalcChanged.h"
#include "WIDomainBatteryStatusChanged.h"
#include "WIDomainBatteryInformationChanged.h"
#include "WIDomainPlatformPowerSourceChanged.h"
#include "WIDomainAdapterPowerRatingChanged.h"
#include "WIDomainChargerTypeChanged.h"
#include "WIDomainPlatformRestOfPowerChanged.h"
#include "WIDomainACPeakPowerChanged.h"
#include "WIDomainACPeakTimeWindowChanged.h"
#include "WIDomainMaxBatteryPowerChanged.h"
#include "WIDomainPlatformBatterySteadyStateChanged.h"
#include "WIDptfConnectedStandbyEntry.h"
#include "WIDptfConnectedStandbyExit.h"
#include "WIDptfResume.h"
#include "WIDptfSuspend.h"
#include "WIDptfGetStatus.h"
#include "WIDptfParticipantActivityLoggingEnabled.h"
#include "WIDptfParticipantActivityLoggingDisabled.h"
#include "WIParticipantAllocate.h"
#include "WIParticipantCreate.h"
#include "WIParticipantDestroy.h"
#include "WIParticipantSpecificInfoChanged.h"
#include "WIPolicyActiveRelationshipTableChanged.h"
#include "WIPolicyCoolingModePolicyChanged.h"
#include "WIPolicyCreateAll.h"
#include "WIPolicyDestroy.h"
#include "WIPolicyReload.h"
#include "WIPolicyForegroundApplicationChanged.h"
#include "WIPolicyInitiatedCallback.h"
#include "WIPolicyOperatingSystemConfigTdpLevelChanged.h"
#include "WIPolicyOperatingSystemPowerSourceChanged.h"
#include "WIPolicyOperatingSystemLidStateChanged.h"
#include "WIPolicyOperatingSystemBatteryPercentageChanged.h"
#include "WIPolicyOperatingSystemPlatformTypeChanged.h"
#include "WIPolicyOperatingSystemDockModeChanged.h"
#include "WIPolicyOperatingSystemMobileNotification.h"
#include "WIPolicyOperatingSystemPowerSchemePersonalityChanged.h"
#include "WIPolicyPassiveTableChanged.h"
#include "WIPolicySensorOrientationChanged.h"
#include "WIPolicySensorMotionChanged.h"
#include "WIPolicySensorSpatialOrientationChanged.h"
#include "WIPolicyThermalRelationshipTableChanged.h"
#include "WIPolicyAdaptivePerformanceConditionsTableChanged.h"
#include "WIPolicyAdaptivePerformanceParticipantConditionTableChanged.h"
#include "WIPolicyAdaptivePerformanceActionsTableChanged.h"
#include "WIPolicyOemVariablesChanged.h"
#include "WIPolicyPowerBossConditionsTableChanged.h"
#include "WIPolicyPowerBossActionsTableChanged.h"
#include "WIPolicyPowerBossMathTableChanged.h"
#include "WIDptfPolicyActivityLoggingEnabled.h"
#include "WIDptfPolicyActivityLoggingDisabled.h"
#include "WIPolicyEmergencyCallModeTableChanged.h"
#include "WIPolicyPidAlgorithmTableChanged.h"
#include "WIPolicyActiveControlPointRelationshipTableChanged.h"