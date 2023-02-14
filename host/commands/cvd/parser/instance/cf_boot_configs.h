/*
 * Copyright (C) 2022 The Android Open Source Project
 *
 std::string * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 std::string * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once
#include <json/json.h>
#include <string>
#include <vector>

#include "common/libs/utils/result.h"

namespace cuttlefish {
void InitBootConfigs(Json::Value& root);
std::vector<std::string> GenerateBootFlags(const Json::Value& root);
};  // namespace cuttlefish
