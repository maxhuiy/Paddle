// Copyright (c) 2022 PaddlePaddle Authors. All Rights Reserved.
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
// See the License for the specific language governing permissions and
// limitations under the License.

#include "paddle/phi/kernels/autotune/cache.h"

namespace phi {
namespace autotune {

// Define the cache key of operator
size_t ConvKey(const std::vector<int64_t>& x_dims,
               const std::vector<int64_t>& w_dims,
               const std::vector<int>& strides,
               const std::vector<int>& paddings,
               const std::vector<int>& dilations,
               phi::DataType dtype) {
  return GetKey(x_dims,
                w_dims,
                strides,
                paddings,
                dilations,
                static_cast<int64_t>(dtype));
}

}  // namespace autotune
}  // namespace phi
