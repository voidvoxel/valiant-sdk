// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#if !defined(VALIANT__RUNTIME_H)
#define VALIANT__RUNTIME_H

#include "raylua.h"

/// <summary>
/// Initialize a new Valiant state.
/// </summary>
/// <returns>A new Valiant state.</returns>
LuaState* Valiant_Init(void);

#endif // VALIANT__RUNTIME_H
