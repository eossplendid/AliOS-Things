/*
 * Copyright (c) 2014-2016 Alibaba Group. All rights reserved.
 * License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */


#ifndef __PLATFORM_DEBUG_H__
#define __PLATFORM_DEBUG_H__

#include "lite-log.h"

#define platform_emerg(...)    log_emerg("port", __VA_ARGS__)
#define platform_crit(...)     log_crit("port", __VA_ARGS__)
#define platform_err(...)      log_err("port", __VA_ARGS__)
#define platform_warning(...)  log_warning("port", __VA_ARGS__)
#define platform_info(...)     log_info("port", __VA_ARGS__)
#define platform_debug(...)    log_debug("port", __VA_ARGS__)

#endif  /* __PLATFORM_DEBUG_H__ */
