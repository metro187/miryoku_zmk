// Copyright (c) 2022 Manna Harbour
// SPDX-License-Identifier: MIT

#define MIRYOKU_LAYOUT_MAPPING( \
    K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
    K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
    K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
              K32, K33, K34,      K35, K36, K37 \
) \
RC(0,0) RC(0,1) RC(0,2) RC(0,3) RC(0,4)    RC(0,5) RC(0,6) RC(0,7) RC(0,8) RC(0,9) \
RC(1,0) RC(1,1) RC(1,2) RC(1,3) RC(1,4)    RC(1,5) RC(1,6) RC(1,7) RC(1,8) RC(1,9) \
RC(2,0) RC(2,1) RC(2,2) RC(2,3) RC(2,4)    RC(2,5) RC(2,6) RC(2,7) RC(2,8) RC(2,9) \
                RC(3,2) RC(3,3) RC(3,4)    RC(3,5) RC(3,6) RC(3,7)

#define MIRYOKU_MAPPING MIRYOKU_LAYOUT_MAPPING
