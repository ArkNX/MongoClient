/*****************************************************************************
// * This source file is part of ArkGameFrame                                *
// * For the latest info, see https://github.com/ArkGame                     *
// *                                                                         *
// * Copyright(c) 2013 - 2017 ArkGame authors.                               *
// *                                                                         *
// * Licensed under the Apache License, Version 2.0 (the "License");         *
// * you may not use this file except in compliance with the License.        *
// * You may obtain a copy of the License at                                 *
// *                                                                         *
// *     http://www.apache.org/licenses/LICENSE-2.0                          *
// *                                                                         *
// * Unless required by applicable law or agreed to in writing, software     *
// * distributed under the License is distributed on an "AS IS" BASIS,       *
// * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.*
// * See the License for the specific language governing permissions and     *
// * limitations under the License.                                          *
// *                                                                         *
// *                                                                         *
// * @file      dllmain.cpp                                              *
// * @author    Ark Game Tech                                                *
// * @date      2015-12-15                                                   *
// * @brief     dllmain                                                  *
*****************************************************************************/
#include "SDK/Base/AFPlatform.hpp"

#if ARK_PLATFORM == PLATFORM_WIN
#pragma comment(lib, "Dbghelp.lib")
#pragma comment(lib, "ws2_32")
#pragma comment(lib, "mongoc-static-1.0.lib")
#pragma comment(lib, "bson-1.0.lib")
#pragma comment(lib, "mongocxx.lib")
#pragma comment(lib, "bsoncxx.lib")

#if ARK_RUN_MODE == ARK_RUN_MODE_DEBUG

#else
#pragma comment(lib, "mongocxx.lib")
#pragma comment(lib, "bsoncxx.lib")
#pragma comment(lib, "mongoc-static-1.0.lib")
#pragma comment(lib, "bson-1.0.lib")

#endif

#endif
