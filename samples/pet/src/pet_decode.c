/*
 * Copyright (c) 2022 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Generated using zcbor version 0.7.99
 * https://github.com/NordicSemiconductor/zcbor
 * Generated with a --default-max-qty of 3
 */

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <string.h>
#include "zcbor_decode.h"
#include "pet_decode.h"

#if DEFAULT_MAX_QTY != 3
#error "The type file was generated with a different default_max_qty than this file"
#endif

static bool decode_Pet(zcbor_state_t *state, struct Pet *result);


static bool decode_Pet(
		zcbor_state_t *state, struct Pet *result)
{
	zcbor_print("%s\r\n", __func__);

	bool tmp_result = (((zcbor_list_start_decode(state) && ((((zcbor_list_start_decode(state) && ((zcbor_multi_decode(1, 3, &(*result).names_count, (zcbor_decoder_t *)zcbor_tstr_decode, state, (&(*result).names), sizeof(struct zcbor_string))) || (zcbor_list_map_end_force_decode(state), false)) && zcbor_list_end_decode(state)))
	&& ((zcbor_bstr_decode(state, (&(*result).birthday)))
	&& ((((((*result).birthday.len >= 8)
	&& ((*result).birthday.len <= 8)) || (zcbor_error(state, ZCBOR_ERR_WRONG_RANGE), false))) || (zcbor_error(state, ZCBOR_ERR_WRONG_RANGE), false)))
	&& ((((zcbor_int_decode(state, &(*result).species_choice, sizeof((*result).species_choice)))) && ((((((*result).species_choice == Pet_species_cat_c) && ((1)))
	|| (((*result).species_choice == Pet_species_dog_c) && ((1)))
	|| (((*result).species_choice == Pet_species_other_c) && ((1)))) || (zcbor_error(state, ZCBOR_ERR_WRONG_VALUE), false)))))) || (zcbor_list_map_end_force_decode(state), false)) && zcbor_list_end_decode(state))));

	if (!tmp_result)
		zcbor_trace();

	return tmp_result;
}



int cbor_decode_Pet(
		const uint8_t *payload, size_t payload_len,
		struct Pet *result,
		size_t *payload_len_out)
{
	zcbor_state_t states[4];

	return zcbor_entry_function(payload, payload_len, (void *)result, payload_len_out, states,
		(zcbor_decoder_t *)decode_Pet, sizeof(states) / sizeof(zcbor_state_t), 1);
}
