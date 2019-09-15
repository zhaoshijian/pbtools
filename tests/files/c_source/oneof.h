/**
 * The MIT License (MIT)
 *
 * Copyright (c) 2019 Erik Moqvist
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

/**
 * This file was generated by pbtools.
 */

#ifndef ONEOF_H
#define ONEOF_H

#include "pbtools.h"

/**
 * Enum oneof.Enum.
 */
enum oneof_enum_e {
    oneof_enum_a_e = 0,
    oneof_enum_b_e = 1
};

/**
 * Enum oneof.Message.value.
 */
enum oneof_message_value_choice_e {
    oneof_message_value_choice_none_e = 0,
    oneof_message_value_choice_v1_e = 1,
    oneof_message_value_choice_v2_e = 2
};

/**
 * Oneof oneof.Message.value.
 */
struct oneof_message_value_oneof_t {
    enum oneof_message_value_choice_e choice;
    union {
        int32_t v1;
        char *v2_p;
    } value;
};

/**
 * Message oneof.Message.
 */
struct oneof_message_repeated_t {
    int length;
    struct oneof_message_t **items_pp;
    struct oneof_message_t *head_p;
    struct oneof_message_t *tail_p;
};

struct oneof_message_t {
    struct pbtools_message_base_t base;
    struct oneof_message_value_oneof_t value;
};

/**
 * Message oneof.Message2.Foo.
 */
struct oneof_message2_foo_repeated_t {
    int length;
    struct oneof_message2_foo_t **items_pp;
    struct oneof_message2_foo_t *head_p;
    struct oneof_message2_foo_t *tail_p;
};

struct oneof_message2_foo_t {
    struct pbtools_message_base_t base;
    int32_t bar;
};

/**
 * Enum oneof.Message2.oneof1.
 */
enum oneof_message2_oneof1_choice_e {
    oneof_message2_oneof1_choice_none_e = 0,
    oneof_message2_oneof1_choice_v4_e = 1,
    oneof_message2_oneof1_choice_v5_e = 2,
    oneof_message2_oneof1_choice_v6_e = 3
};

/**
 * Oneof oneof.Message2.oneof1.
 */
struct oneof_message2_oneof1_oneof_t {
    enum oneof_message2_oneof1_choice_e choice;
    union {
        struct oneof_message2_foo_t v4;
        struct pbtools_bytes_t v5;
        enum oneof_enum_e v6;
    } value;
};

/**
 * Enum oneof.Message2.oneof2.
 */
enum oneof_message2_oneof2_choice_e {
    oneof_message2_oneof2_choice_none_e = 0,
    oneof_message2_oneof2_choice_v1_e = 1,
    oneof_message2_oneof2_choice_v2_e = 2,
    oneof_message2_oneof2_choice_v3_e = 3
};

/**
 * Oneof oneof.Message2.oneof2.
 */
struct oneof_message2_oneof2_oneof_t {
    enum oneof_message2_oneof2_choice_e choice;
    union {
        bool v1;
        struct oneof_message2_foo_t v2;
        struct oneof_message_t v3;
    } value;
};

/**
 * Message oneof.Message2.
 */
struct oneof_message2_repeated_t {
    int length;
    struct oneof_message2_t **items_pp;
    struct oneof_message2_t *head_p;
    struct oneof_message2_t *tail_p;
};

struct oneof_message2_t {
    struct pbtools_message_base_t base;
    struct oneof_message2_oneof1_oneof_t oneof1;
    struct oneof_message2_oneof2_oneof_t oneof2;
};

/**
 * Enum oneof.Message3.Foo.inner_oneof.
 */
enum oneof_message3_foo_inner_oneof_choice_e {
    oneof_message3_foo_inner_oneof_choice_none_e = 0,
    oneof_message3_foo_inner_oneof_choice_v1_e = 1,
    oneof_message3_foo_inner_oneof_choice_v2_e = 2
};

/**
 * Oneof oneof.Message3.Foo.inner_oneof.
 */
struct oneof_message3_foo_inner_oneof_oneof_t {
    enum oneof_message3_foo_inner_oneof_choice_e choice;
    union {
        bool v1;
        struct pbtools_bytes_t v2;
    } value;
};

/**
 * Message oneof.Message3.Foo.
 */
struct oneof_message3_foo_repeated_t {
    int length;
    struct oneof_message3_foo_t **items_pp;
    struct oneof_message3_foo_t *head_p;
    struct oneof_message3_foo_t *tail_p;
};

struct oneof_message3_foo_t {
    struct pbtools_message_base_t base;
    struct oneof_message3_foo_inner_oneof_oneof_t inner_oneof;
};

/**
 * Message oneof.Message3.Bar.
 */
struct oneof_message3_bar_repeated_t {
    int length;
    struct oneof_message3_bar_t **items_pp;
    struct oneof_message3_bar_t *head_p;
    struct oneof_message3_bar_t *tail_p;
};

struct oneof_message3_bar_t {
    struct pbtools_message_base_t base;
    struct oneof_message3_foo_repeated_t foo;
};

/**
 * Enum oneof.Message3.oneof1.
 */
enum oneof_message3_oneof1_choice_e {
    oneof_message3_oneof1_choice_none_e = 0,
    oneof_message3_oneof1_choice_v1_e = 1
};

/**
 * Oneof oneof.Message3.oneof1.
 */
struct oneof_message3_oneof1_oneof_t {
    enum oneof_message3_oneof1_choice_e choice;
    union {
        struct oneof_message3_bar_t v1;
    } value;
};

/**
 * Message oneof.Message3.
 */
struct oneof_message3_repeated_t {
    int length;
    struct oneof_message3_t **items_pp;
    struct oneof_message3_t *head_p;
    struct oneof_message3_t *tail_p;
};

struct oneof_message3_t {
    struct pbtools_message_base_t base;
    struct oneof_message3_oneof1_oneof_t oneof1;
};

void oneof_message_init(
    struct oneof_message_t *self_p,
    struct pbtools_heap_t *heap_p,
    struct oneof_message_t *next_p);

void oneof_message_encode_inner(
    struct pbtools_encoder_t *encoder_p,
    struct oneof_message_t *self_p);

void oneof_message_decode_inner(
    struct pbtools_decoder_t *decoder_p,
    struct oneof_message_t *self_p);

void oneof_message_encode_repeated_inner(
    struct pbtools_encoder_t *encoder_p,
    int field_number,
    struct oneof_message_repeated_t *repeated_p);

void oneof_message_decode_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    int wire_type,
    struct oneof_message_repeated_t *repeated_p);

void oneof_message_finalize_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    struct oneof_message_repeated_t *repeated_p);

void oneof_message_value_v1_init(
    struct oneof_message_t *self_p);

void oneof_message_value_v2_init(
    struct oneof_message_t *self_p);

struct oneof_message_t *
oneof_message_new(
    void *workspace_p,
    size_t size);

int oneof_message_encode(
    struct oneof_message_t *self_p,
    uint8_t *encoded_p,
    size_t size);

int oneof_message_decode(
    struct oneof_message_t *self_p,
    const uint8_t *encoded_p,
    size_t size);

void oneof_message2_init(
    struct oneof_message2_t *self_p,
    struct pbtools_heap_t *heap_p,
    struct oneof_message2_t *next_p);

void oneof_message2_encode_inner(
    struct pbtools_encoder_t *encoder_p,
    struct oneof_message2_t *self_p);

void oneof_message2_decode_inner(
    struct pbtools_decoder_t *decoder_p,
    struct oneof_message2_t *self_p);

void oneof_message2_encode_repeated_inner(
    struct pbtools_encoder_t *encoder_p,
    int field_number,
    struct oneof_message2_repeated_t *repeated_p);

void oneof_message2_decode_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    int wire_type,
    struct oneof_message2_repeated_t *repeated_p);

void oneof_message2_finalize_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    struct oneof_message2_repeated_t *repeated_p);

void oneof_message2_foo_init(
    struct oneof_message2_foo_t *self_p,
    struct pbtools_heap_t *heap_p,
    struct oneof_message2_foo_t *next_p);

void oneof_message2_foo_encode_inner(
    struct pbtools_encoder_t *encoder_p,
    struct oneof_message2_foo_t *self_p);

void oneof_message2_foo_decode_inner(
    struct pbtools_decoder_t *decoder_p,
    struct oneof_message2_foo_t *self_p);

void oneof_message2_foo_encode_repeated_inner(
    struct pbtools_encoder_t *encoder_p,
    int field_number,
    struct oneof_message2_foo_repeated_t *repeated_p);

void oneof_message2_foo_decode_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    int wire_type,
    struct oneof_message2_foo_repeated_t *repeated_p);

void oneof_message2_foo_finalize_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    struct oneof_message2_foo_repeated_t *repeated_p);

void oneof_message2_oneof1_v4_init(
    struct oneof_message2_t *self_p);

void oneof_message2_oneof1_v5_init(
    struct oneof_message2_t *self_p);

void oneof_message2_oneof1_v6_init(
    struct oneof_message2_t *self_p);

void oneof_message2_oneof2_v1_init(
    struct oneof_message2_t *self_p);

void oneof_message2_oneof2_v2_init(
    struct oneof_message2_t *self_p);

void oneof_message2_oneof2_v3_init(
    struct oneof_message2_t *self_p);

struct oneof_message2_t *
oneof_message2_new(
    void *workspace_p,
    size_t size);

int oneof_message2_encode(
    struct oneof_message2_t *self_p,
    uint8_t *encoded_p,
    size_t size);

int oneof_message2_decode(
    struct oneof_message2_t *self_p,
    const uint8_t *encoded_p,
    size_t size);

void oneof_message3_init(
    struct oneof_message3_t *self_p,
    struct pbtools_heap_t *heap_p,
    struct oneof_message3_t *next_p);

void oneof_message3_encode_inner(
    struct pbtools_encoder_t *encoder_p,
    struct oneof_message3_t *self_p);

void oneof_message3_decode_inner(
    struct pbtools_decoder_t *decoder_p,
    struct oneof_message3_t *self_p);

void oneof_message3_encode_repeated_inner(
    struct pbtools_encoder_t *encoder_p,
    int field_number,
    struct oneof_message3_repeated_t *repeated_p);

void oneof_message3_decode_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    int wire_type,
    struct oneof_message3_repeated_t *repeated_p);

void oneof_message3_finalize_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    struct oneof_message3_repeated_t *repeated_p);

void oneof_message3_foo_init(
    struct oneof_message3_foo_t *self_p,
    struct pbtools_heap_t *heap_p,
    struct oneof_message3_foo_t *next_p);

void oneof_message3_foo_encode_inner(
    struct pbtools_encoder_t *encoder_p,
    struct oneof_message3_foo_t *self_p);

void oneof_message3_foo_decode_inner(
    struct pbtools_decoder_t *decoder_p,
    struct oneof_message3_foo_t *self_p);

void oneof_message3_foo_encode_repeated_inner(
    struct pbtools_encoder_t *encoder_p,
    int field_number,
    struct oneof_message3_foo_repeated_t *repeated_p);

void oneof_message3_foo_decode_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    int wire_type,
    struct oneof_message3_foo_repeated_t *repeated_p);

void oneof_message3_foo_finalize_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    struct oneof_message3_foo_repeated_t *repeated_p);

void oneof_message3_foo_inner_oneof_v1_init(
    struct oneof_message3_foo_t *self_p);

void oneof_message3_foo_inner_oneof_v2_init(
    struct oneof_message3_foo_t *self_p);

void oneof_message3_bar_init(
    struct oneof_message3_bar_t *self_p,
    struct pbtools_heap_t *heap_p,
    struct oneof_message3_bar_t *next_p);

void oneof_message3_bar_encode_inner(
    struct pbtools_encoder_t *encoder_p,
    struct oneof_message3_bar_t *self_p);

void oneof_message3_bar_decode_inner(
    struct pbtools_decoder_t *decoder_p,
    struct oneof_message3_bar_t *self_p);

void oneof_message3_bar_encode_repeated_inner(
    struct pbtools_encoder_t *encoder_p,
    int field_number,
    struct oneof_message3_bar_repeated_t *repeated_p);

void oneof_message3_bar_decode_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    int wire_type,
    struct oneof_message3_bar_repeated_t *repeated_p);

void oneof_message3_bar_finalize_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    struct oneof_message3_bar_repeated_t *repeated_p);

int oneof_message3_bar_foo_alloc(
    struct oneof_message3_bar_t *self_p,
    int length);

void oneof_message3_oneof1_v1_init(
    struct oneof_message3_t *self_p);

struct oneof_message3_t *
oneof_message3_new(
    void *workspace_p,
    size_t size);

int oneof_message3_encode(
    struct oneof_message3_t *self_p,
    uint8_t *encoded_p,
    size_t size);

int oneof_message3_decode(
    struct oneof_message3_t *self_p,
    const uint8_t *encoded_p,
    size_t size);

#endif
