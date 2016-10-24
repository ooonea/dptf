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

#define MAX_CAPABILITY_MASK      32
/*
 * Capability Type Declarations
 */

typedef enum esif_capability_type {
	ESIF_CAPABILITY_TYPE_ACTIVE_CONTROL = 0,
	ESIF_CAPABILITY_TYPE_CTDP_CONTROL = 1,
	ESIF_CAPABILITY_TYPE_CORE_CONTROL = 2,
	ESIF_CAPABILITY_TYPE_DISPLAY_CONTROL = 3,
	ESIF_CAPABILITY_TYPE_DOMAIN_PRIORITY = 4,
	ESIF_CAPABILITY_TYPE_PERF_CONTROL = 5,
	ESIF_CAPABILITY_TYPE_POWER_CONTROL = 6,
	ESIF_CAPABILITY_TYPE_POWER_STATUS = 7,
	ESIF_CAPABILITY_TYPE_TEMP_STATUS = 8,
	ESIF_CAPABILITY_TYPE_UTIL_STATUS = 9,
	ESIF_CAPABILITY_TYPE_PIXELCLOCK_STATUS = 10,
	ESIF_CAPABILITY_TYPE_PIXELCLOCK_CONTROL = 11,
	ESIF_CAPABILITY_TYPE_PLAT_POWER_STATUS = 12,
	ESIF_CAPABILITY_TYPE_TEMP_THRESHOLD = 13,
	ESIF_CAPABILITY_TYPE_RFPROFILE_STATUS = 14,
	ESIF_CAPABILITY_TYPE_RFPROFILE_CONTROL = 15,
	ESIF_CAPABILITY_TYPE_NETWORK_CONTROL = 16,
	ESIF_CAPABILITY_TYPE_XMITPOWER_CONTROL = 17,
	ESIF_CAPABILITY_TYPE_CURRENT_CONTROL = 18,
	ESIF_CAPABILITY_TYPE_PSYS_CONTROL = 20,
} esif_capability_type_t, eEsifCapabilityType;

/* Max Enum Value for Iteration purposes */
#define MAX_ESIF_CAPABILITY_TYPE_ENUM_VALUE  ESIF_CAPABILITY_TYPE_PSYS_CONTROL

static ESIF_INLINE esif_string esif_capability_type_str(
	esif_capability_type_t type
	)
{
	switch (type) {
	ESIF_CASE_ENUM(ESIF_CAPABILITY_TYPE_ACTIVE_CONTROL);
	ESIF_CASE_ENUM(ESIF_CAPABILITY_TYPE_CTDP_CONTROL);
	ESIF_CASE_ENUM(ESIF_CAPABILITY_TYPE_CORE_CONTROL);
	ESIF_CASE_ENUM(ESIF_CAPABILITY_TYPE_DISPLAY_CONTROL);
	ESIF_CASE_ENUM(ESIF_CAPABILITY_TYPE_DOMAIN_PRIORITY);
	ESIF_CASE_ENUM(ESIF_CAPABILITY_TYPE_PERF_CONTROL);
	ESIF_CASE_ENUM(ESIF_CAPABILITY_TYPE_POWER_CONTROL);
	ESIF_CASE_ENUM(ESIF_CAPABILITY_TYPE_POWER_STATUS);
	ESIF_CASE_ENUM(ESIF_CAPABILITY_TYPE_TEMP_STATUS);
	ESIF_CASE_ENUM(ESIF_CAPABILITY_TYPE_UTIL_STATUS);
	ESIF_CASE_ENUM(ESIF_CAPABILITY_TYPE_PIXELCLOCK_STATUS);
	ESIF_CASE_ENUM(ESIF_CAPABILITY_TYPE_PIXELCLOCK_CONTROL);
	ESIF_CASE_ENUM(ESIF_CAPABILITY_TYPE_PLAT_POWER_STATUS);
	ESIF_CASE_ENUM(ESIF_CAPABILITY_TYPE_TEMP_THRESHOLD);
	ESIF_CASE_ENUM(ESIF_CAPABILITY_TYPE_RFPROFILE_STATUS);
	ESIF_CASE_ENUM(ESIF_CAPABILITY_TYPE_RFPROFILE_CONTROL);
	ESIF_CASE_ENUM(ESIF_CAPABILITY_TYPE_NETWORK_CONTROL);
	ESIF_CASE_ENUM(ESIF_CAPABILITY_TYPE_XMITPOWER_CONTROL);
	ESIF_CASE_ENUM(ESIF_CAPABILITY_TYPE_CURRENT_CONTROL);
	ESIF_CASE_ENUM(ESIF_CAPABILITY_TYPE_PSYS_CONTROL);
	}
	return ESIF_NOT_AVAILABLE;
}

#define ESIF_CAPABILITY_ACTIVE_CONTROL 0x1
#define ESIF_CAPABILITY_CTDP_CONTROL 0x2
#define ESIF_CAPABILITY_CORE_CONTROL 0x4
#define ESIF_CAPABILITY_DISPLAY_CONTROL 0x8
#define ESIF_CAPABILITY_DOMAIN_PRIORITY 0x10
#define ESIF_CAPABILITY_PERF_CONTROL 0x20
#define ESIF_CAPABILITY_POWER_CONTROL 0x40
#define ESIF_CAPABILITY_POWER_STATUS 0x80
#define ESIF_CAPABILITY_TEMP_STATUS 0x100
#define ESIF_CAPABILITY_UTIL_STATUS 0x200
#define ESIF_CAPABILITY_PIXELCLOCK_STATUS 0x400
#define ESIF_CAPABILITY_PIXELCLOCK_CONTROL 0x800
#define ESIF_CAPABILITY_PLAT_POWER_STATUS 0x1000
#define ESIF_CAPABILITY_TEMP_THRESHOLD 0x2000
#define ESIF_CAPABILITY_RFPROFILE_STATUS 0x4000
#define ESIF_CAPABILITY_RFPROFILE_CONTROL 0x8000
#define ESIF_CAPABILITY_NETWORK_CONTROL 0x10000
#define ESIF_CAPABILITY_XMITPOWER_CONTROL 0x20000
#define ESIF_CAPABILITY_CURRENT_CONTROL 0x40000
#define ESIF_CAPABILITY_PSYS_CONTROL 0x100000
