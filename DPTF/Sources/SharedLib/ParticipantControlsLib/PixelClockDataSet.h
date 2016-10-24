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

#pragma once

#include "Dptf.h"
#include "PixelClockData.h"

class XmlNode;

class PixelClockDataSet final
{
public:

    PixelClockDataSet(const std::vector<PixelClockData>& pixelClockData);

    UIntN getCount(void) const;
    PixelClockData operator[](UIntN index) const;

    Bool operator==(const PixelClockDataSet& rhs) const;
    Bool operator!=(const PixelClockDataSet& rhs) const;
    std::shared_ptr<XmlNode> getXml(void) const;

private:

    std::vector<PixelClockData> m_pixelClockData;
};