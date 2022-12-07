// Copyright (c) 2022 FlyCV Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.

#pragma once

#include "flycv_namespace.h"
#include "basic_types_c.h"
#include "modules/core/base/interface/macro_ns.h"

G_FCV_NAMESPACE1_BEGIN(g_fcv_ns)

typedef struct {
    int width;
    int height;
    CFCVImageType type;
    int channels;
    int stride;
    long total_byte_size;
    int type_byte_size;
    void* data;
} CMat;

CMat* create_mat(int width, int height, CFCVImageType type);

G_FCV_NAMESPACE1_END()