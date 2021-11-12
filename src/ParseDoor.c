/* 
  This file was generated by KreMLin <https://github.com/FStarLang/kremlin>
  KreMLin invocation: krml -verify -warn-error +9 -drop WasmSupport -tmpdir ./out -fsopt --cache_dir -fsopt ./out -fsopt --cache_checked_modules -skip-linking -skip-compilation -no-prefix HardCoding -no-prefix ParseDoor -no-prefix ParseIndicator -no-prefix ParseSpeed hardCoding.fst parseDoor.fst parseIndicator.fst parseSpeed.fst
  F* version: <unknown>
  KreMLin version: 8d03c65f
 */

#include "ParseDoor.h"

fstar_uint8 parseDoor_body(uint32_t can_id, uint8_t can_dlc, uint8_t *data)
{
  uint8_t door_state = data[2U];
  uint8_t ret = door_state;
  if (door_state == ret)
    return ((fstar_uint8){ .value = ret, .error = { .code = (int32_t)0, .message = "" } });
  else
    return
      (
        (fstar_uint8){
          .value = (uint8_t)1U,
          .error = { .code = (int32_t)1, .message = "invalid door state" }
        }
      );
}

fstar_uint8 parseDoor(uint32_t can_id, uint8_t can_dlc, uint8_t *data)
{
  uint8_t v1 = data[0U];
  uint8_t v2 = data[1U];
  uint8_t v3 = data[2U];
  uint8_t v4 = data[3U];
  uint8_t v5 = data[4U];
  uint8_t v6 = data[5U];
  if
  (
    can_id
    == (uint32_t)0x19BU
    && can_dlc == (uint8_t)6U
    && v1 == (uint8_t)0U
    && v2 == (uint8_t)0U
    && v3 <= (uint8_t)0x0FU
    && v4 == (uint8_t)0U
    && v5 == (uint8_t)0U
    && v6 == (uint8_t)0U
  )
    return parseDoor_body(can_id, can_dlc, data);
  else
    return
      (
        (fstar_uint8){
          .value = (uint8_t)0U,
          .error = { .code = (int32_t)1, .message = "invalid arguments" }
        }
      );
}

