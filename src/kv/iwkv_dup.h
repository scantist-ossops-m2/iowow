#pragma once
#ifndef IWKV_DUP
#define IWKV_DUP

#include "iwkv.h"

#define IWKV_DUP_MAXVNUM_BUFSZ 512

iwrc iwkv_dup_init(const IWKV_val *val, IWKV_val *uval);

iwrc iwkv_dup_update(const IWKV_val *val, iwkv_opflags opflags, IWKV_val *uval);

#endif
