/*
 * Copyright 2017 Veeraj S Khokale All Rights Reserved
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef AD_CORE_UTIL_H_
#define AD_CORE_UTIL_H_

#include <utility>
#include <type_traits>

#include "ad/types.h"

namespace ad
{

template <class Object, class... Args>
std::decay_t<Object> makeObject(Args&&... args)
{
    return std::decay_t<Object>(std::forward<Args>(args)...);
}

}

#endif