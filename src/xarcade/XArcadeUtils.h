/*
 *  Copyright (C) 2016-2020 Garrett Brown
 *  Copyright (C) 2016-2020 Team Kodi
 *
 *  SPDX-License-Identifier: GPL-2.0-or-later
 *  See LICENSE.md for more information.
 */

#pragma once

#include <string>

namespace XARCADE
{
  class CXArcadeUtils
  {
  public:
    static bool IsXArcadeDevice(const std::string& deviceName);
  };
}
