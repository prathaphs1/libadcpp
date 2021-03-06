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

#include "ad/tree/generic.h"
#include "test/ad/tree/generic_ut.h"

template <>
struct TreeName<ad::tree::Tree>
{
    static constexpr const char* name = "ad::tree::Tree";
};

int main()
{
    ad::UTRunner utRunner;
    utRunner.add<GenericTreeConceptReq<ad::tree::Tree>>("GenericTreeReq");
    utRunner.run();
}