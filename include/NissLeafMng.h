/*
 * This file is part of the ZombieVerter project.
 *
 * Copyright (C) 2021-2023  Tom de Bree <Tom@voltinflux.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *
 */

#ifndef NISSLEAFMNG_H
#define NISSLEAFMNG_H

#include <stdint.h>
#include "params.h"
#include "canhardware.h"
#include "my_fp.h"
#include "my_math.h"
#include "utils.h"

class NissLeafMng
{

public:
static void Task10Ms(int16_t final_torque_request);
static void Task100Ms();
static void SetCanInterface(CanHardware* c);
static void SetPullInEVSE(bool pullInEVSE);
static void nissan_crc(uint8_t *data, uint8_t polynomial);


protected:

};

#endif
