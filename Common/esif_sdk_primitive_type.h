/*******************************************************************************
** This file is provided under a dual BSD/GPLv2 license.  When using or
** redistributing this file, you may do so under either license.
**
** GPL LICENSE SUMMARY
**
** Copyright (c) 2013-2016 Intel Corporation All Rights Reserved
**
** This program is free software; you can redistribute it and/or modify it under
** the terms of version 2 of the GNU General Public License as published by the
** Free Software Foundation.
**
** This program is distributed in the hope that it will be useful, but WITHOUT
** ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
** FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
** details.
**
** You should have received a copy of the GNU General Public License along with
** this program; if not, write to the Free Software  Foundation, Inc.,
** 51 Franklin St - Fifth Floor, Boston, MA 02110-1301 USA.
** The full GNU General Public License is included in this distribution in the
** file called LICENSE.GPL.
**
** BSD LICENSE
**
** Copyright (c) 2013-2016 Intel Corporation All Rights Reserved
**
** Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions are met:
**
** * Redistributions of source code must retain the above copyright notice, this
**   list of conditions and the following disclaimer.
** * Redistributions in binary form must reproduce the above copyright notice,
**   this list of conditions and the following disclaimer in the documentation
**   and/or other materials provided with the distribution.
** * Neither the name of Intel Corporation nor the names of its contributors may
**   be used to endorse or promote products derived from this software without
**   specific prior written permission.
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
** AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
** IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
** ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
** LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,  SPECIAL, EXEMPLARY, OR
** CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
** SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
** INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
** CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
** ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
** POSSIBILITY OF SUCH DAMAGE.
**
*******************************************************************************/

#pragma once

#include "esif_sdk.h"

/*
 * PRIMITIVE Declarations
 */

typedef enum esif_primitive_type {
	GET_AC_PEAK_POWER = 358,
	GET_AC_PEAK_TIME_WINDOW = 359,
	GET_ACTIVE_CONTROL_POINT_RELATIONSHIP_TABLE = 424,
	GET_ACTIVE_RELATIONSHIP_TABLE = 89,
	GET_ACUR = 414,
	GET_ADAPTER_POWER_RATING = 296,
	GET_ADAPTIVE_PERFORMANCE_ACTIONS_TABLE = 321,
	GET_ADAPTIVE_PERFORMANCE_CONDITIONS_TABLE = 316,
	GET_ADAPTIVE_PERFORMANCE_PARTICIPANT_CONDITION_TABLE = 406,
	GET_AMBIENT_CAPICITANCE_COEF = 243,
	GET_AMBIENT_NOTIFICATION_THRESHOLD = 244,
	GET_AP01 = 416,
	GET_AP02 = 418,
	GET_AP10 = 420,
	GET_AVG_TEMPERATURE = 352,
	GET_AVG_TEMPERATURE_TIME_WINDOW = 353,
	GET_AVOL = 412,
	GET_BATTERY_INFORMATION = 224,
	GET_BATTERY_STATUS = 223,
	GET_CHARGER_TYPE = 297,
	GET_CLOCK_COUNT = 185,
	GET_CLOCK_ORIGINAL_FREQUENCY = 187,
	GET_CONFIG = 344,
	GET_CONFIG_ACCESS_CONTROL_SUR = 381,
	GET_CONFIG_DATAVAULT_SUR = 345,
	GET_DEVICE_ADDRESS_ON_PARENT_BUS = 49,
	GET_DEVICE_COMPATABILITY_ID = 50,
	GET_DEVICE_DESCRIPTION = 60,
	GET_DEVICE_HARDWARE_ID = 53,
	GET_DEVICE_STATUS = 88,
	GET_DEVICE_UNIQUE_ID = 67,
	GET_DISK_INFO = 389,
	GET_DISPLAY_BRIGHTNESS = 356,
	GET_DISPLAY_BRIGHTNESS_LEVELS = 158,
	GET_DISPLAY_CAPABILITY = 159,
	GET_DISPLAY_CLOCK_DEVIATION = 181,
	GET_DISPLAY_CLOCK_DOWNWARD_DEVIATION = 250,
	GET_DISPLAY_CLOCK_SPREAD_DIRECTION = 191,
	GET_DISPLAY_CLOCK_SPREAD_PERCENTAGE = 190,
	GET_DISPLAY_CLOCK_SSC_DISABLED_FREQUENCY = 189,
	GET_DISPLAY_CLOCK_SSC_ENABLED_FREQUENCY = 188,
	GET_DISPLAY_CLOCK_UPWARD_DEVIATION = 249,
	GET_DISPLAY_DEPTH_LIMIT = 160,
	GET_DISPLAY_PANEL_TYPE = 179,
	GET_DOMAIN_PRIORITY = 178,
	GET_DYNAMIC_BATTERY_POWER_ACTION = 279,
	GET_EMERGENCY_CALL_MODE_TABLE = 385,
	GET_FAN_INFORMATION = 84,
	GET_FAN_PERFORMANCE_STATES = 85,
	GET_FAN_STATUS = 86,
	GET_GRAPHICS_CHIPSET_CHANNEL_TYPE = 182,
	GET_GRAPHICS_CHIPSET_SSC_ENABLED = 184,
	GET_IOCTL = 390,
	GET_LAST_EWMA_POWER = 404,
	GET_LAST_POWER_USED = 402,
	GET_MINIMUM_SAMPLE_PERIOD = 426,
	GET_NOTIFICATION_TEMP_THRESHOLD = 54,
	GET_OEM_VARS = 323,
	GET_OS_FOREGROUND_APPLICATION = 380,
	GET_PARTICIPANT_CURRENT_CONTROL_CAPABILITY = 282,
	GET_PARTICIPANT_PERF_PRESENT_CAPABILITY = 176,
	GET_PARTICIPANT_SAMPLE_PERIOD = 300,
	GET_PARTICIPANT_SKU = 141,
	GET_PARTICIPANT_TRANSMIT_POWER_CAPABILITY = 284,
	GET_PARTICIPANT_TYPE = 139,
	GET_PARTICIPANT_UTILIZATION = 138,
	GET_PASSIVE_RELATIONSHIP_TABLE = 234,
	GET_PERF_PSTATE_DEPTH_LIMIT = 76,
	GET_PERF_SUPPORT_STATES = 137,
	GET_PID_ALGORITHM_TABLE = 410,
	GET_PLATFORM_BATTERY_STEADY_STATE = 294,
	GET_PLATFORM_MAX_BATTERY_POWER = 291,
	GET_PLATFORM_POWER_LIMIT = 331,
	GET_PLATFORM_POWER_LIMIT_DUTY_CYCLE = 337,
	GET_PLATFORM_POWER_LIMIT_ENABLE = 332,
	GET_PLATFORM_POWER_LIMIT_TIME_WINDOW = 333,
	GET_PLATFORM_POWER_SOURCE = 295,
	GET_PLATFORM_REST_OF_POWER = 298,
	GET_PLATFORM_VMIN = 292,
	GET_POWER_ALPHA = 396,
	GET_POWER_BOSS_ACTIONS_TABLE = 362,
	GET_POWER_BOSS_CONDITIONS_TABLE = 360,
	GET_POWER_BOSS_MATH_TABLE = 422,
	GET_POWER_DELTA = 400,
	GET_POWER_SAMPLE_PERIOD = 278,
	GET_POWER_SEED = 398,
	GET_POWER_THRESHOLD_COUNT = 196,
	GET_POWER_THRESHOLD_HYSTERESIS = 197,
	GET_POWER_THRESHOLDS = 198,
	GET_PROC_CTDP_CAPABILITY = 79,
	GET_PROC_CTDP_CURRENT_SETTING = 26,
	GET_PROC_CTDP_LOCK_STATUS = 27,
	GET_PROC_CTDP_POINT_LIST = 80,
	GET_PROC_CTDP_SUPPORT_CHECK = 25,
	GET_PROC_CTDP_TAR_LOCK_STATUS = 28,
	GET_PROC_CURRENT_LOGICAL_PROCESSOR_OFFLINING = 69,
	GET_PROC_HDC_OOB_ENABLE = 326,
	GET_PROC_HWP_ENABLE = 325,
	GET_PROC_HWP_SUPPORT_CHECK = 311,
	GET_PROC_IO_THROTTLE_STATUS = 151,
	GET_PROC_LOGICAL_PROCESSOR_AFFINITY = 228,
	GET_PROC_LOGICAL_PROCESSOR_COUNT = 101,
	GET_PROC_MFM_LPM_SUPPORTED = 207,
	GET_PROC_MFM_MAX_EFFICIENCY_RATIO = 209,
	GET_PROC_MFM_MIN_SUPPORTED_RATIO = 208,
	GET_PROC_PER_CORE_CSTATE_RESIDENCY = 314,
	GET_PROC_PER_CORE_UTILIZATION = 310,
	GET_PROC_PERF_MAX_TIME = 103,
	GET_PROC_PERF_PRESENT_CAPABILITY = 56,
	GET_PROC_PERF_PSTATE_CURRENT_MAX_TODO = 99,
	GET_PROC_PERF_PSTATE_DEPTH_LIMIT = 55,
	GET_PROC_PERF_PSTATE_STATUS_TODO = 98,
	GET_PROC_PERF_SUPPORT_STATES = 95,
	GET_PROC_PERF_THROTTLE_CONTROL = 58,
	GET_PROC_PERF_THROTTLE_PRESENT_CAPABILITY = 62,
	GET_PROC_PERF_TSTATE_DEPTH_LIMIT = 61,
	GET_PROC_PKG_CSTATE_RESIDENCY = 315,
	GET_PROC_RF_TUNING_AVAILABLE = 268,
	GET_PROC_RP_STATE_CAPABILITY = 277,
	GET_PROC_THERMAL_DESIGN_POWER = 21,
	GET_PROC_THREAD_STALL_COUNTER = 313,
	GET_PROC_THREAD_STALL_COUNTER_STATUS = 324,
	GET_PROC_TJMAX = 20,
	GET_PROC_TSC = 312,
	GET_PROC_TURBO_ACTIVATION_RATIO = 219,
	GET_PROC_TURBO_POWER_STATE = 97,
	GET_PROC_TURBO_STATE = 218,
	GET_RAPL_ENERGY = 128,
	GET_RAPL_ENERGY_UNIT = 123,
	GET_RAPL_POWER = 35,
	GET_RAPL_POWER_CONTROL_CAPABILITIES = 75,
	GET_RAPL_POWER_DEFAULT = 148,
	GET_RAPL_POWER_LIMIT = 38,
	GET_RAPL_POWER_LIMIT_DUTY_CYCLE = 341,
	GET_RAPL_POWER_LIMIT_ENABLE = 126,
	GET_RAPL_POWER_LIMIT_LOCK = 172,
	GET_RAPL_POWER_LIMIT_TIME_WINDOW = 339,
	GET_RAPL_POWER_MAX = 23,
	GET_RAPL_POWER_MAX_TIME_WINDOW = 24,
	GET_RAPL_POWER_MIN = 22,
	GET_RAPL_POWER_UNIT = 124,
	GET_RAPL_TIME_UNIT = 122,
	GET_RAPL_TIME_WINDOW = 39,
	GET_RFPROFILE_BIT_ERROR = 265,
	GET_RFPROFILE_CENTER_FREQUENCY = 245,
	GET_RFPROFILE_CHANNEL_NUMBER = 260,
	GET_RFPROFILE_CLIP_PERCENT_LEFT = 255,
	GET_RFPROFILE_CLIP_PERCENT_RIGHT = 256,
	GET_RFPROFILE_CONNECTION_STATUS = 264,
	GET_RFPROFILE_DEFAULT_CENTER_FREQUENCY = 254,
	GET_RFPROFILE_FREQUENCY_ADJUST_RESOLUTION = 257,
	GET_RFPROFILE_FREQUENCY_SPREAD_LEFT = 246,
	GET_RFPROFILE_FREQUENCY_SPREAD_RIGHT = 251,
	GET_RFPROFILE_NOISE_POWER = 261,
	GET_RFPROFILE_NOTCH_LEFT = 258,
	GET_RFPROFILE_NOTCH_RIGHT = 259,
	GET_RFPROFILE_RSSI = 263,
	GET_RFPROFILE_SHAPE_LEFT = 247,
	GET_RFPROFILE_SHAPE_RIGHT = 253,
	GET_RFPROFILE_SIGNAL_TO_NOISE_RATIO = 262,
	GET_SUPPORTED_POLICIES = 92,
	GET_SYSTEM_CONFIGTDP_LEVEL_NAME = 272,
	GET_TEMPERATURE = 14,
	GET_TEMPERATURE_APPROX_TABLE = 164,
	GET_TEMPERATURE_SUR = 290,
	GET_TEMPERATURE_SURACPI = 320,
	GET_TEMPERATURE_THRESHOLD_COUNT = 72,
	GET_TEMPERATURE_THRESHOLD_HYSTERESIS = 15,
	GET_TEMPERATURE_THRESHOLDS = 143,
	GET_THERMAL_RELATIONSHIP_TABLE = 91,
	GET_TRIP_POINT_ACTIVE = 1,
	GET_TRIP_POINT_CRITICAL = 13,
	GET_TRIP_POINT_HOT = 12,
	GET_TRIP_POINT_PASSIVE = 11,
	GET_TRIP_POINT_WARM = 177,
	GET_TSTATE_CURRENT = 16,
	GET_TSTATES = 65,
	GET_VIRTUAL_SENSOR_CALIB_TABLE = 347,
	GET_VIRTUAL_SENSOR_POLLING_TABLE = 348,
	GET_VIRTUAL_TEMPERATURE = 346,
	SET_ACTIVE_CONTROL_POINT_RELATIONSHIP_TABLE = 425,
	SET_ACTIVE_RELATIONSHIP_TABLE = 230,
	SET_ACUR = 415,
	SET_ADAPTIVE_PERFORMANCE_ACTIONS_TABLE = 322,
	SET_ADAPTIVE_PERFORMANCE_CONDITIONS_TABLE = 317,
	SET_ADAPTIVE_PERFORMANCE_PARTICIPANT_CONDITION_TABLE = 407,
	SET_AMBIENT_TEMPERATURE_INDICATION = 242,
	SET_AP01 = 417,
	SET_AP02 = 419,
	SET_AP10 = 421,
	SET_APP_START = 408,
	SET_APP_STOP = 409,
	SET_AVG_TEMPERATURE_TIME_WINDOW = 354,
	SET_AVOL = 413,
	SET_CONFIG_RESET = 392,
	SET_CTDP_POINT = 83,
	SET_DEVICE_TEMPERATURE_INDICATION = 51,
	SET_DISPLAY_BRIGHTNESS = 355,
	SET_DISPLAY_BRIGHTNESS_LEVELS = 328,
	SET_DISPLAY_CAPABILITY = 329,
	SET_DISPLAY_CLOCK_SSC_DISABLED_FREQUENCY = 194,
	SET_DISPLAY_CLOCK_SSC_ENABLED_FREQUENCY = 193,
	SET_DISPLAY_DEPTH_LIMIT = 330,
	SET_DSP = 200,
	SET_EMERGENCY_CALL_MODE_TABLE = 386,
	SET_EXECUTE_SIMULATION = 395,
	SET_FAN_LEVEL = 87,
	SET_IOCTL = 391,
	SET_JAVA_HELPER_SERVICE_NOTIFICATION = 388,
	SET_LAST_EWMA_POWER = 405,
	SET_LAST_POWER_USED = 403,
	SET_MINIMUM_SAMPLE_PERIOD = 427,
	SET_OEM_VARS = 379,
	SET_OPERATING_SYSTEM_CAPABILITIES = 93,
	SET_OS_BATTERY_PERCENTAGE = 368,
	SET_OS_COOLING_MODE = 375,
	SET_OS_DOCK_MODE = 374,
	SET_OS_FOREGROUND_APPLICATION = 378,
	SET_OS_LID_STATE = 376,
	SET_OS_MOBILE_NOTIFICATION = 387,
	SET_OS_PLATFORM_TYPE = 377,
	SET_OS_POWER_SOURCE = 369,
	SET_PARTICIPANT_CAPABILITIES_EVAL = 393,
	SET_PARTICIPANT_CURRENT_CONTROL_CAPABILITY = 288,
	SET_PARTICIPANT_CURRENT_LIMIT = 285,
	SET_PARTICIPANT_HYSTERESIS_BEHAVIOR = 305,
	SET_PARTICIPANT_SAMPLE_BEHAVIOR = 302,
	SET_PARTICIPANT_SAMPLE_PERIOD = 301,
	SET_PARTICIPANT_TRANSMIT_POWER_CAPABILITY = 287,
	SET_PASSIVE_RELATIONSHIP_TABLE = 235,
	SET_PERF_PRESENT_CAPABILITY = 82,
	SET_PERF_PRESENT_CAPABILITY_SUR = 304,
	SET_PERF_PSTATE_DEPTH_LIMIT = 343,
	SET_PERF_SUPPORT_STATE = 227,
	SET_PID_ALGORITHM_TABLE = 411,
	SET_PLATFORM_BATTERY_STEADY_STATE = 383,
	SET_PLATFORM_MAX_BATTERY_POWER = 382,
	SET_PLATFORM_POWER_LIMIT = 334,
	SET_PLATFORM_POWER_LIMIT_DUTY_CYCLE = 338,
	SET_PLATFORM_POWER_LIMIT_ENABLE = 335,
	SET_PLATFORM_POWER_LIMIT_TIME_WINDOW = 336,
	SET_POWER_ALPHA = 397,
	SET_POWER_BOSS_ACTIONS_TABLE = 363,
	SET_POWER_BOSS_CONDITIONS_TABLE = 361,
	SET_POWER_BOSS_MATH_TABLE = 423,
	SET_POWER_DELTA = 401,
	SET_POWER_SAMPLE_BEHAVIOR = 384,
	SET_POWER_SEED = 399,
	SET_POWER_THRESHOLD_HYSTERESIS = 233,
	SET_POWER_THRESHOLDS = 199,
	SET_PROC_CTDP_CONTROL = 221,
	SET_PROC_IO_THROTTLE_CONTROL = 152,
	SET_PROC_LOGICAL_PROCESSOR_AFFINITY = 229,
	SET_PROC_NUMBER_OFFLINE_CORES = 153,
	SET_PROC_PERF_PSTATE_DEPTH_LIMIT = 275,
	SET_PROC_PERF_SUPPORT_STATES = 357,
	SET_PROC_PERF_TSTATE_DEPTH_LIMIT = 276,
	SET_PROC_TURBO_ACTIVATION_RATIO = 220,
	SET_PROC_TURBO_STATE = 100,
	SET_RAPL_POWER_CONTROL_CAPABILITIES = 274,
	SET_RAPL_POWER_LIMIT = 130,
	SET_RAPL_POWER_LIMIT_DUTY_CYCLE = 342,
	SET_RAPL_POWER_LIMIT_ENABLE = 222,
	SET_RAPL_POWER_LIMIT_TIME_WINDOW = 340,
	SET_RAPL_TIME_WINDOW = 127,
	SET_RFPROFILE_CENTER_FREQUENCY = 211,
	SET_RFPROFILE_CENTER_FREQUENCY_SUR = 303,
	SET_SENSOR_DEVICE_ORIENTATION = 371,
	SET_SENSOR_DISPLAY_ORIENTATION = 370,
	SET_SENSOR_HUB_ENABLE = 394,
	SET_SENSOR_MOTION_CHANGED = 372,
	SET_SUPPORTED_POLICIES = 271,
	SET_SYSTEM_CONFIGTDP_CLEAR_LEVELS = 269,
	SET_SYSTEM_CONFIGTDP_LEVEL_NAME = 270,
	SET_SYSTEM_HIBERNATE = 175,
	SET_SYSTEM_POWER_SETTING_DISABLE = 319,
	SET_SYSTEM_POWER_SETTING_ENABLE = 318,
	SET_SYSTEM_POWER_SETTING_REMOVE = 273,
	SET_SYSTEM_SHUTDOWN = 173,
	SET_SYSTEM_SLEEP = 174,
	SET_TEMPERATURE = 241,
	SET_TEMPERATURE_INTERRUPT_STATE = 280,
	SET_TEMPERATURE_THRESHOLD_HYSTERESIS = 232,
	SET_TEMPERATURE_THRESHOLDS = 47,
	SET_TEMPERATURE_THRESHOLDS_SUR = 299,
	SET_THERMAL_RELATIONSHIP_TABLE = 231,
	SET_TRIP_POINT_ACTIVE = 202,
	SET_TRIP_POINT_CRITICAL = 203,
	SET_TRIP_POINT_HOT = 204,
	SET_TRIP_POINT_PASSIVE = 206,
	SET_TRIP_POINT_WARM = 205,
	SET_TSTATE_CURRENT = 147,
	SET_VIRTUAL_SENSOR_CALIB_TABLE = 350,
	SET_VIRTUAL_SENSOR_POLLING_TABLE = 351,
	SET_VIRTUAL_TEMPERATURE = 349,
} esif_primitive_type_t;

/* Max Enum Value for Iteration purposes */
#define MAX_PRIMITIVE_ENUM_VALUE  SET_MINIMUM_SAMPLE_PERIOD

static ESIF_INLINE esif_string esif_primitive_str(esif_primitive_type_t type)
{
	switch (type) {
	ESIF_CASE_ENUM(GET_AC_PEAK_POWER);
	ESIF_CASE_ENUM(GET_AC_PEAK_TIME_WINDOW);
	ESIF_CASE_ENUM(GET_ACTIVE_CONTROL_POINT_RELATIONSHIP_TABLE);
	ESIF_CASE_ENUM(GET_ACTIVE_RELATIONSHIP_TABLE);
	ESIF_CASE_ENUM(GET_ACUR);
	ESIF_CASE_ENUM(GET_ADAPTER_POWER_RATING);
	ESIF_CASE_ENUM(GET_ADAPTIVE_PERFORMANCE_ACTIONS_TABLE);
	ESIF_CASE_ENUM(GET_ADAPTIVE_PERFORMANCE_CONDITIONS_TABLE);
	ESIF_CASE_ENUM(GET_ADAPTIVE_PERFORMANCE_PARTICIPANT_CONDITION_TABLE);
	ESIF_CASE_ENUM(GET_AMBIENT_CAPICITANCE_COEF);
	ESIF_CASE_ENUM(GET_AMBIENT_NOTIFICATION_THRESHOLD);
	ESIF_CASE_ENUM(GET_AP01);
	ESIF_CASE_ENUM(GET_AP02);
	ESIF_CASE_ENUM(GET_AP10);
	ESIF_CASE_ENUM(GET_AVG_TEMPERATURE);
	ESIF_CASE_ENUM(GET_AVG_TEMPERATURE_TIME_WINDOW);
	ESIF_CASE_ENUM(GET_AVOL);
	ESIF_CASE_ENUM(GET_BATTERY_INFORMATION);
	ESIF_CASE_ENUM(GET_BATTERY_STATUS);
	ESIF_CASE_ENUM(GET_CHARGER_TYPE);
	ESIF_CASE_ENUM(GET_CLOCK_COUNT);
	ESIF_CASE_ENUM(GET_CLOCK_ORIGINAL_FREQUENCY);
	ESIF_CASE_ENUM(GET_CONFIG);
	ESIF_CASE_ENUM(GET_CONFIG_ACCESS_CONTROL_SUR);
	ESIF_CASE_ENUM(GET_CONFIG_DATAVAULT_SUR);
	ESIF_CASE_ENUM(GET_DEVICE_ADDRESS_ON_PARENT_BUS);
	ESIF_CASE_ENUM(GET_DEVICE_COMPATABILITY_ID);
	ESIF_CASE_ENUM(GET_DEVICE_DESCRIPTION);
	ESIF_CASE_ENUM(GET_DEVICE_HARDWARE_ID);
	ESIF_CASE_ENUM(GET_DEVICE_STATUS);
	ESIF_CASE_ENUM(GET_DEVICE_UNIQUE_ID);
	ESIF_CASE_ENUM(GET_DISK_INFO);
	ESIF_CASE_ENUM(GET_DISPLAY_BRIGHTNESS);
	ESIF_CASE_ENUM(GET_DISPLAY_BRIGHTNESS_LEVELS);
	ESIF_CASE_ENUM(GET_DISPLAY_CAPABILITY);
	ESIF_CASE_ENUM(GET_DISPLAY_CLOCK_DEVIATION);
	ESIF_CASE_ENUM(GET_DISPLAY_CLOCK_DOWNWARD_DEVIATION);
	ESIF_CASE_ENUM(GET_DISPLAY_CLOCK_SPREAD_DIRECTION);
	ESIF_CASE_ENUM(GET_DISPLAY_CLOCK_SPREAD_PERCENTAGE);
	ESIF_CASE_ENUM(GET_DISPLAY_CLOCK_SSC_DISABLED_FREQUENCY);
	ESIF_CASE_ENUM(GET_DISPLAY_CLOCK_SSC_ENABLED_FREQUENCY);
	ESIF_CASE_ENUM(GET_DISPLAY_CLOCK_UPWARD_DEVIATION);
	ESIF_CASE_ENUM(GET_DISPLAY_DEPTH_LIMIT);
	ESIF_CASE_ENUM(GET_DISPLAY_PANEL_TYPE);
	ESIF_CASE_ENUM(GET_DOMAIN_PRIORITY);
	ESIF_CASE_ENUM(GET_DYNAMIC_BATTERY_POWER_ACTION);
	ESIF_CASE_ENUM(GET_EMERGENCY_CALL_MODE_TABLE);
	ESIF_CASE_ENUM(GET_FAN_INFORMATION);
	ESIF_CASE_ENUM(GET_FAN_PERFORMANCE_STATES);
	ESIF_CASE_ENUM(GET_FAN_STATUS);
	ESIF_CASE_ENUM(GET_GRAPHICS_CHIPSET_CHANNEL_TYPE);
	ESIF_CASE_ENUM(GET_GRAPHICS_CHIPSET_SSC_ENABLED);
	ESIF_CASE_ENUM(GET_IOCTL);
	ESIF_CASE_ENUM(GET_LAST_EWMA_POWER);
	ESIF_CASE_ENUM(GET_LAST_POWER_USED);
	ESIF_CASE_ENUM(GET_MINIMUM_SAMPLE_PERIOD);
	ESIF_CASE_ENUM(GET_NOTIFICATION_TEMP_THRESHOLD);
	ESIF_CASE_ENUM(GET_OEM_VARS);
	ESIF_CASE_ENUM(GET_OS_FOREGROUND_APPLICATION);
	ESIF_CASE_ENUM(GET_PARTICIPANT_CURRENT_CONTROL_CAPABILITY);
	ESIF_CASE_ENUM(GET_PARTICIPANT_PERF_PRESENT_CAPABILITY);
	ESIF_CASE_ENUM(GET_PARTICIPANT_SAMPLE_PERIOD);
	ESIF_CASE_ENUM(GET_PARTICIPANT_SKU);
	ESIF_CASE_ENUM(GET_PARTICIPANT_TRANSMIT_POWER_CAPABILITY);
	ESIF_CASE_ENUM(GET_PARTICIPANT_TYPE);
	ESIF_CASE_ENUM(GET_PARTICIPANT_UTILIZATION);
	ESIF_CASE_ENUM(GET_PASSIVE_RELATIONSHIP_TABLE);
	ESIF_CASE_ENUM(GET_PERF_PSTATE_DEPTH_LIMIT);
	ESIF_CASE_ENUM(GET_PERF_SUPPORT_STATES);
	ESIF_CASE_ENUM(GET_PID_ALGORITHM_TABLE);
	ESIF_CASE_ENUM(GET_PLATFORM_BATTERY_STEADY_STATE);
	ESIF_CASE_ENUM(GET_PLATFORM_MAX_BATTERY_POWER);
	ESIF_CASE_ENUM(GET_PLATFORM_POWER_LIMIT);
	ESIF_CASE_ENUM(GET_PLATFORM_POWER_LIMIT_DUTY_CYCLE);
	ESIF_CASE_ENUM(GET_PLATFORM_POWER_LIMIT_ENABLE);
	ESIF_CASE_ENUM(GET_PLATFORM_POWER_LIMIT_TIME_WINDOW);
	ESIF_CASE_ENUM(GET_PLATFORM_POWER_SOURCE);
	ESIF_CASE_ENUM(GET_PLATFORM_REST_OF_POWER);
	ESIF_CASE_ENUM(GET_PLATFORM_VMIN);
	ESIF_CASE_ENUM(GET_POWER_ALPHA);
	ESIF_CASE_ENUM(GET_POWER_BOSS_ACTIONS_TABLE);
	ESIF_CASE_ENUM(GET_POWER_BOSS_CONDITIONS_TABLE);
	ESIF_CASE_ENUM(GET_POWER_BOSS_MATH_TABLE);
	ESIF_CASE_ENUM(GET_POWER_DELTA);
	ESIF_CASE_ENUM(GET_POWER_SAMPLE_PERIOD);
	ESIF_CASE_ENUM(GET_POWER_SEED);
	ESIF_CASE_ENUM(GET_POWER_THRESHOLD_COUNT);
	ESIF_CASE_ENUM(GET_POWER_THRESHOLD_HYSTERESIS);
	ESIF_CASE_ENUM(GET_POWER_THRESHOLDS);
	ESIF_CASE_ENUM(GET_PROC_CTDP_CAPABILITY);
	ESIF_CASE_ENUM(GET_PROC_CTDP_CURRENT_SETTING);
	ESIF_CASE_ENUM(GET_PROC_CTDP_LOCK_STATUS);
	ESIF_CASE_ENUM(GET_PROC_CTDP_POINT_LIST);
	ESIF_CASE_ENUM(GET_PROC_CTDP_SUPPORT_CHECK);
	ESIF_CASE_ENUM(GET_PROC_CTDP_TAR_LOCK_STATUS);
	ESIF_CASE_ENUM(GET_PROC_CURRENT_LOGICAL_PROCESSOR_OFFLINING);
	ESIF_CASE_ENUM(GET_PROC_HDC_OOB_ENABLE);
	ESIF_CASE_ENUM(GET_PROC_HWP_ENABLE);
	ESIF_CASE_ENUM(GET_PROC_HWP_SUPPORT_CHECK);
	ESIF_CASE_ENUM(GET_PROC_IO_THROTTLE_STATUS);
	ESIF_CASE_ENUM(GET_PROC_LOGICAL_PROCESSOR_AFFINITY);
	ESIF_CASE_ENUM(GET_PROC_LOGICAL_PROCESSOR_COUNT);
	ESIF_CASE_ENUM(GET_PROC_MFM_LPM_SUPPORTED);
	ESIF_CASE_ENUM(GET_PROC_MFM_MAX_EFFICIENCY_RATIO);
	ESIF_CASE_ENUM(GET_PROC_MFM_MIN_SUPPORTED_RATIO);
	ESIF_CASE_ENUM(GET_PROC_PER_CORE_CSTATE_RESIDENCY);
	ESIF_CASE_ENUM(GET_PROC_PER_CORE_UTILIZATION);
	ESIF_CASE_ENUM(GET_PROC_PERF_MAX_TIME);
	ESIF_CASE_ENUM(GET_PROC_PERF_PRESENT_CAPABILITY);
	ESIF_CASE_ENUM(GET_PROC_PERF_PSTATE_CURRENT_MAX_TODO);
	ESIF_CASE_ENUM(GET_PROC_PERF_PSTATE_DEPTH_LIMIT);
	ESIF_CASE_ENUM(GET_PROC_PERF_PSTATE_STATUS_TODO);
	ESIF_CASE_ENUM(GET_PROC_PERF_SUPPORT_STATES);
	ESIF_CASE_ENUM(GET_PROC_PERF_THROTTLE_CONTROL);
	ESIF_CASE_ENUM(GET_PROC_PERF_THROTTLE_PRESENT_CAPABILITY);
	ESIF_CASE_ENUM(GET_PROC_PERF_TSTATE_DEPTH_LIMIT);
	ESIF_CASE_ENUM(GET_PROC_PKG_CSTATE_RESIDENCY);
	ESIF_CASE_ENUM(GET_PROC_RF_TUNING_AVAILABLE);
	ESIF_CASE_ENUM(GET_PROC_RP_STATE_CAPABILITY);
	ESIF_CASE_ENUM(GET_PROC_THERMAL_DESIGN_POWER);
	ESIF_CASE_ENUM(GET_PROC_THREAD_STALL_COUNTER);
	ESIF_CASE_ENUM(GET_PROC_THREAD_STALL_COUNTER_STATUS);
	ESIF_CASE_ENUM(GET_PROC_TJMAX);
	ESIF_CASE_ENUM(GET_PROC_TSC);
	ESIF_CASE_ENUM(GET_PROC_TURBO_ACTIVATION_RATIO);
	ESIF_CASE_ENUM(GET_PROC_TURBO_POWER_STATE);
	ESIF_CASE_ENUM(GET_PROC_TURBO_STATE);
	ESIF_CASE_ENUM(GET_RAPL_ENERGY);
	ESIF_CASE_ENUM(GET_RAPL_ENERGY_UNIT);
	ESIF_CASE_ENUM(GET_RAPL_POWER);
	ESIF_CASE_ENUM(GET_RAPL_POWER_CONTROL_CAPABILITIES);
	ESIF_CASE_ENUM(GET_RAPL_POWER_DEFAULT);
	ESIF_CASE_ENUM(GET_RAPL_POWER_LIMIT);
	ESIF_CASE_ENUM(GET_RAPL_POWER_LIMIT_DUTY_CYCLE);
	ESIF_CASE_ENUM(GET_RAPL_POWER_LIMIT_ENABLE);
	ESIF_CASE_ENUM(GET_RAPL_POWER_LIMIT_LOCK);
	ESIF_CASE_ENUM(GET_RAPL_POWER_LIMIT_TIME_WINDOW);
	ESIF_CASE_ENUM(GET_RAPL_POWER_MAX);
	ESIF_CASE_ENUM(GET_RAPL_POWER_MAX_TIME_WINDOW);
	ESIF_CASE_ENUM(GET_RAPL_POWER_MIN);
	ESIF_CASE_ENUM(GET_RAPL_POWER_UNIT);
	ESIF_CASE_ENUM(GET_RAPL_TIME_UNIT);
	ESIF_CASE_ENUM(GET_RAPL_TIME_WINDOW);
	ESIF_CASE_ENUM(GET_RFPROFILE_BIT_ERROR);
	ESIF_CASE_ENUM(GET_RFPROFILE_CENTER_FREQUENCY);
	ESIF_CASE_ENUM(GET_RFPROFILE_CHANNEL_NUMBER);
	ESIF_CASE_ENUM(GET_RFPROFILE_CLIP_PERCENT_LEFT);
	ESIF_CASE_ENUM(GET_RFPROFILE_CLIP_PERCENT_RIGHT);
	ESIF_CASE_ENUM(GET_RFPROFILE_CONNECTION_STATUS);
	ESIF_CASE_ENUM(GET_RFPROFILE_DEFAULT_CENTER_FREQUENCY);
	ESIF_CASE_ENUM(GET_RFPROFILE_FREQUENCY_ADJUST_RESOLUTION);
	ESIF_CASE_ENUM(GET_RFPROFILE_FREQUENCY_SPREAD_LEFT);
	ESIF_CASE_ENUM(GET_RFPROFILE_FREQUENCY_SPREAD_RIGHT);
	ESIF_CASE_ENUM(GET_RFPROFILE_NOISE_POWER);
	ESIF_CASE_ENUM(GET_RFPROFILE_NOTCH_LEFT);
	ESIF_CASE_ENUM(GET_RFPROFILE_NOTCH_RIGHT);
	ESIF_CASE_ENUM(GET_RFPROFILE_RSSI);
	ESIF_CASE_ENUM(GET_RFPROFILE_SHAPE_LEFT);
	ESIF_CASE_ENUM(GET_RFPROFILE_SHAPE_RIGHT);
	ESIF_CASE_ENUM(GET_RFPROFILE_SIGNAL_TO_NOISE_RATIO);
	ESIF_CASE_ENUM(GET_SUPPORTED_POLICIES);
	ESIF_CASE_ENUM(GET_SYSTEM_CONFIGTDP_LEVEL_NAME);
	ESIF_CASE_ENUM(GET_TEMPERATURE);
	ESIF_CASE_ENUM(GET_TEMPERATURE_APPROX_TABLE);
	ESIF_CASE_ENUM(GET_TEMPERATURE_SUR);
	ESIF_CASE_ENUM(GET_TEMPERATURE_SURACPI);
	ESIF_CASE_ENUM(GET_TEMPERATURE_THRESHOLD_COUNT);
	ESIF_CASE_ENUM(GET_TEMPERATURE_THRESHOLD_HYSTERESIS);
	ESIF_CASE_ENUM(GET_TEMPERATURE_THRESHOLDS);
	ESIF_CASE_ENUM(GET_THERMAL_RELATIONSHIP_TABLE);
	ESIF_CASE_ENUM(GET_TRIP_POINT_ACTIVE);
	ESIF_CASE_ENUM(GET_TRIP_POINT_CRITICAL);
	ESIF_CASE_ENUM(GET_TRIP_POINT_HOT);
	ESIF_CASE_ENUM(GET_TRIP_POINT_PASSIVE);
	ESIF_CASE_ENUM(GET_TRIP_POINT_WARM);
	ESIF_CASE_ENUM(GET_TSTATE_CURRENT);
	ESIF_CASE_ENUM(GET_TSTATES);
	ESIF_CASE_ENUM(GET_VIRTUAL_SENSOR_CALIB_TABLE);
	ESIF_CASE_ENUM(GET_VIRTUAL_SENSOR_POLLING_TABLE);
	ESIF_CASE_ENUM(GET_VIRTUAL_TEMPERATURE);
	ESIF_CASE_ENUM(SET_ACTIVE_CONTROL_POINT_RELATIONSHIP_TABLE);
	ESIF_CASE_ENUM(SET_ACTIVE_RELATIONSHIP_TABLE);
	ESIF_CASE_ENUM(SET_ACUR);
	ESIF_CASE_ENUM(SET_ADAPTIVE_PERFORMANCE_ACTIONS_TABLE);
	ESIF_CASE_ENUM(SET_ADAPTIVE_PERFORMANCE_CONDITIONS_TABLE);
	ESIF_CASE_ENUM(SET_ADAPTIVE_PERFORMANCE_PARTICIPANT_CONDITION_TABLE);
	ESIF_CASE_ENUM(SET_AMBIENT_TEMPERATURE_INDICATION);
	ESIF_CASE_ENUM(SET_AP01);
	ESIF_CASE_ENUM(SET_AP02);
	ESIF_CASE_ENUM(SET_AP10);
	ESIF_CASE_ENUM(SET_APP_START);
	ESIF_CASE_ENUM(SET_APP_STOP);
	ESIF_CASE_ENUM(SET_AVG_TEMPERATURE_TIME_WINDOW);
	ESIF_CASE_ENUM(SET_AVOL);
	ESIF_CASE_ENUM(SET_CONFIG_RESET);
	ESIF_CASE_ENUM(SET_CTDP_POINT);
	ESIF_CASE_ENUM(SET_DEVICE_TEMPERATURE_INDICATION);
	ESIF_CASE_ENUM(SET_DISPLAY_BRIGHTNESS);
	ESIF_CASE_ENUM(SET_DISPLAY_BRIGHTNESS_LEVELS);
	ESIF_CASE_ENUM(SET_DISPLAY_CAPABILITY);
	ESIF_CASE_ENUM(SET_DISPLAY_CLOCK_SSC_DISABLED_FREQUENCY);
	ESIF_CASE_ENUM(SET_DISPLAY_CLOCK_SSC_ENABLED_FREQUENCY);
	ESIF_CASE_ENUM(SET_DISPLAY_DEPTH_LIMIT);
	ESIF_CASE_ENUM(SET_DSP);
	ESIF_CASE_ENUM(SET_EMERGENCY_CALL_MODE_TABLE);
	ESIF_CASE_ENUM(SET_EXECUTE_SIMULATION);
	ESIF_CASE_ENUM(SET_FAN_LEVEL);
	ESIF_CASE_ENUM(SET_IOCTL);
	ESIF_CASE_ENUM(SET_JAVA_HELPER_SERVICE_NOTIFICATION);
	ESIF_CASE_ENUM(SET_LAST_EWMA_POWER);
	ESIF_CASE_ENUM(SET_LAST_POWER_USED);
	ESIF_CASE_ENUM(SET_MINIMUM_SAMPLE_PERIOD);
	ESIF_CASE_ENUM(SET_OEM_VARS);
	ESIF_CASE_ENUM(SET_OPERATING_SYSTEM_CAPABILITIES);
	ESIF_CASE_ENUM(SET_OS_BATTERY_PERCENTAGE);
	ESIF_CASE_ENUM(SET_OS_COOLING_MODE);
	ESIF_CASE_ENUM(SET_OS_DOCK_MODE);
	ESIF_CASE_ENUM(SET_OS_FOREGROUND_APPLICATION);
	ESIF_CASE_ENUM(SET_OS_LID_STATE);
	ESIF_CASE_ENUM(SET_OS_MOBILE_NOTIFICATION);
	ESIF_CASE_ENUM(SET_OS_PLATFORM_TYPE);
	ESIF_CASE_ENUM(SET_OS_POWER_SOURCE);
	ESIF_CASE_ENUM(SET_PARTICIPANT_CAPABILITIES_EVAL);
	ESIF_CASE_ENUM(SET_PARTICIPANT_CURRENT_CONTROL_CAPABILITY);
	ESIF_CASE_ENUM(SET_PARTICIPANT_CURRENT_LIMIT);
	ESIF_CASE_ENUM(SET_PARTICIPANT_HYSTERESIS_BEHAVIOR);
	ESIF_CASE_ENUM(SET_PARTICIPANT_SAMPLE_BEHAVIOR);
	ESIF_CASE_ENUM(SET_PARTICIPANT_SAMPLE_PERIOD);
	ESIF_CASE_ENUM(SET_PARTICIPANT_TRANSMIT_POWER_CAPABILITY);
	ESIF_CASE_ENUM(SET_PASSIVE_RELATIONSHIP_TABLE);
	ESIF_CASE_ENUM(SET_PERF_PRESENT_CAPABILITY);
	ESIF_CASE_ENUM(SET_PERF_PRESENT_CAPABILITY_SUR);
	ESIF_CASE_ENUM(SET_PERF_PSTATE_DEPTH_LIMIT);
	ESIF_CASE_ENUM(SET_PERF_SUPPORT_STATE);
	ESIF_CASE_ENUM(SET_PID_ALGORITHM_TABLE);
	ESIF_CASE_ENUM(SET_PLATFORM_BATTERY_STEADY_STATE);
	ESIF_CASE_ENUM(SET_PLATFORM_MAX_BATTERY_POWER);
	ESIF_CASE_ENUM(SET_PLATFORM_POWER_LIMIT);
	ESIF_CASE_ENUM(SET_PLATFORM_POWER_LIMIT_DUTY_CYCLE);
	ESIF_CASE_ENUM(SET_PLATFORM_POWER_LIMIT_ENABLE);
	ESIF_CASE_ENUM(SET_PLATFORM_POWER_LIMIT_TIME_WINDOW);
	ESIF_CASE_ENUM(SET_POWER_ALPHA);
	ESIF_CASE_ENUM(SET_POWER_BOSS_ACTIONS_TABLE);
	ESIF_CASE_ENUM(SET_POWER_BOSS_CONDITIONS_TABLE);
	ESIF_CASE_ENUM(SET_POWER_BOSS_MATH_TABLE);
	ESIF_CASE_ENUM(SET_POWER_DELTA);
	ESIF_CASE_ENUM(SET_POWER_SAMPLE_BEHAVIOR);
	ESIF_CASE_ENUM(SET_POWER_SEED);
	ESIF_CASE_ENUM(SET_POWER_THRESHOLD_HYSTERESIS);
	ESIF_CASE_ENUM(SET_POWER_THRESHOLDS);
	ESIF_CASE_ENUM(SET_PROC_CTDP_CONTROL);
	ESIF_CASE_ENUM(SET_PROC_IO_THROTTLE_CONTROL);
	ESIF_CASE_ENUM(SET_PROC_LOGICAL_PROCESSOR_AFFINITY);
	ESIF_CASE_ENUM(SET_PROC_NUMBER_OFFLINE_CORES);
	ESIF_CASE_ENUM(SET_PROC_PERF_PSTATE_DEPTH_LIMIT);
	ESIF_CASE_ENUM(SET_PROC_PERF_SUPPORT_STATES);
	ESIF_CASE_ENUM(SET_PROC_PERF_TSTATE_DEPTH_LIMIT);
	ESIF_CASE_ENUM(SET_PROC_TURBO_ACTIVATION_RATIO);
	ESIF_CASE_ENUM(SET_PROC_TURBO_STATE);
	ESIF_CASE_ENUM(SET_RAPL_POWER_CONTROL_CAPABILITIES);
	ESIF_CASE_ENUM(SET_RAPL_POWER_LIMIT);
	ESIF_CASE_ENUM(SET_RAPL_POWER_LIMIT_DUTY_CYCLE);
	ESIF_CASE_ENUM(SET_RAPL_POWER_LIMIT_ENABLE);
	ESIF_CASE_ENUM(SET_RAPL_POWER_LIMIT_TIME_WINDOW);
	ESIF_CASE_ENUM(SET_RAPL_TIME_WINDOW);
	ESIF_CASE_ENUM(SET_RFPROFILE_CENTER_FREQUENCY);
	ESIF_CASE_ENUM(SET_RFPROFILE_CENTER_FREQUENCY_SUR);
	ESIF_CASE_ENUM(SET_SENSOR_DEVICE_ORIENTATION);
	ESIF_CASE_ENUM(SET_SENSOR_DISPLAY_ORIENTATION);
	ESIF_CASE_ENUM(SET_SENSOR_HUB_ENABLE);
	ESIF_CASE_ENUM(SET_SENSOR_MOTION_CHANGED);
	ESIF_CASE_ENUM(SET_SUPPORTED_POLICIES);
	ESIF_CASE_ENUM(SET_SYSTEM_CONFIGTDP_CLEAR_LEVELS);
	ESIF_CASE_ENUM(SET_SYSTEM_CONFIGTDP_LEVEL_NAME);
	ESIF_CASE_ENUM(SET_SYSTEM_HIBERNATE);
	ESIF_CASE_ENUM(SET_SYSTEM_POWER_SETTING_DISABLE);
	ESIF_CASE_ENUM(SET_SYSTEM_POWER_SETTING_ENABLE);
	ESIF_CASE_ENUM(SET_SYSTEM_POWER_SETTING_REMOVE);
	ESIF_CASE_ENUM(SET_SYSTEM_SHUTDOWN);
	ESIF_CASE_ENUM(SET_SYSTEM_SLEEP);
	ESIF_CASE_ENUM(SET_TEMPERATURE);
	ESIF_CASE_ENUM(SET_TEMPERATURE_INTERRUPT_STATE);
	ESIF_CASE_ENUM(SET_TEMPERATURE_THRESHOLD_HYSTERESIS);
	ESIF_CASE_ENUM(SET_TEMPERATURE_THRESHOLDS);
	ESIF_CASE_ENUM(SET_TEMPERATURE_THRESHOLDS_SUR);
	ESIF_CASE_ENUM(SET_THERMAL_RELATIONSHIP_TABLE);
	ESIF_CASE_ENUM(SET_TRIP_POINT_ACTIVE);
	ESIF_CASE_ENUM(SET_TRIP_POINT_CRITICAL);
	ESIF_CASE_ENUM(SET_TRIP_POINT_HOT);
	ESIF_CASE_ENUM(SET_TRIP_POINT_PASSIVE);
	ESIF_CASE_ENUM(SET_TRIP_POINT_WARM);
	ESIF_CASE_ENUM(SET_TSTATE_CURRENT);
	ESIF_CASE_ENUM(SET_VIRTUAL_SENSOR_CALIB_TABLE);
	ESIF_CASE_ENUM(SET_VIRTUAL_SENSOR_POLLING_TABLE);
	ESIF_CASE_ENUM(SET_VIRTUAL_TEMPERATURE);
	}
	return ESIF_NOT_AVAILABLE;
}
