/* Copyright 2018 Intel Corporation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/**
 * @file
 * Avalon zero initialization utilities.
 */

#pragma once

#include <string.h>
#include <vector>
#include "c11_support.h"

template <typename T> inline void Zero(
    T& v) {
    memset_s(&v, sizeof(T), 0, sizeof(T));
}  // Zero

template <typename T> inline void ZeroV(
    std::vector<T>& v) {
    memset_s(&v[0], v.size(), 0, v.size());
}  // ZeroV

inline void Zero(
    void* v,
    size_t length) {
    memset_s(v, length, 0, length);
}  // Zero
