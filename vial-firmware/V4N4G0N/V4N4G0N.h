#ifndef V4N4G0N_H
#define V4N4G0N_H
#include "quantum.h"

#define LAYOUT(K00, K02, K03, K04, K05, K06, K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K40, K41, K42, K43, K44, K47, K48, K49, K4A, K4B) { \
  { K00, KC_NO, K02, K03, K04, K05, K06, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
  { K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B }, \
  { K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B }, \
  { K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B }, \
  { K40, K41, K42, K43, K44, KC_NO, KC_NO, K47, K48, K49, K4A, K4B } \
}
#endif