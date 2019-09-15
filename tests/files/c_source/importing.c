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

#include <limits.h>
#include "importing.h"

#if CHAR_BIT != 8
#    error "Number of bits in a char must be 8."
#endif

void importing_message_init(
    struct importing_message_t *self_p,
    struct pbtools_heap_t *heap_p,
    struct importing_message_t *next_p)
{
    self_p->base.heap_p = heap_p;
    self_p->base.next_p = &next_p->base;
    self_p->v1 = 0;
    imported_imported_message_init(&self_p->v2, heap_p, NULL);
}

void importing_message_encode_inner(
    struct pbtools_encoder_t *encoder_p,
    struct importing_message_t *self_p)
{
    pbtools_encoder_sub_message_encode(
        encoder_p,
        2,
        &self_p->v2.base,
        (pbtools_message_encode_inner_t)imported_imported_message_encode_inner);
    pbtools_encoder_write_enum(encoder_p, 1, self_p->v1);
}

void importing_message_decode_inner(
    struct pbtools_decoder_t *decoder_p,
    struct importing_message_t *self_p)
{
    int wire_type;

    while (pbtools_decoder_available(decoder_p)) {
        switch (pbtools_decoder_read_tag(decoder_p, &wire_type)) {

        case 1:
            self_p->v1 = pbtools_decoder_read_enum(decoder_p, wire_type);
            break;

        case 2:
            pbtools_decoder_sub_message_decode(
                decoder_p,
                wire_type,
                &self_p->v2.base,
                (pbtools_message_decode_inner_t)imported_imported_message_decode_inner);
            break;

        default:
            pbtools_decoder_skip_field(decoder_p, wire_type);
            break;
        }
    }
}

void importing_message_encode_repeated_inner(
    struct pbtools_encoder_t *encoder_p,
    int field_number,
    struct importing_message_repeated_t *repeated_p)
{
    pbtools_encode_repeated_inner(
        encoder_p,
        field_number,
        (struct pbtools_repeated_message_t *)repeated_p,
        (pbtools_message_encode_inner_t)importing_message_encode_inner);
}

void importing_message_decode_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    int wire_type,
    struct importing_message_repeated_t *repeated_p)
{
    pbtools_decode_repeated_inner(
        decoder_p,
        wire_type,
        (struct pbtools_repeated_message_t *)repeated_p,
        sizeof(struct importing_message_t),
        (pbtools_message_init_t)importing_message_init,
        (pbtools_message_decode_inner_t)importing_message_decode_inner);
}

void importing_message_finalize_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    struct importing_message_repeated_t *repeated_p)
{
    pbtools_finalize_repeated_inner(
        decoder_p,
        (struct pbtools_repeated_message_t *)repeated_p);
}

struct importing_message_t *
importing_message_new(
    void *workspace_p,
    size_t size)
{
    return (pbtools_message_new(
                workspace_p,
                size,
                sizeof(struct importing_message_t),
                (pbtools_message_init_t)importing_message_init));
}

int importing_message_encode(
    struct importing_message_t *self_p,
    uint8_t *encoded_p,
    size_t size)
{
    return (pbtools_message_encode(
                &self_p->base,
                encoded_p,
                size,
                (pbtools_message_encode_inner_t)importing_message_encode_inner));
}

int importing_message_decode(
    struct importing_message_t *self_p,
    const uint8_t *encoded_p,
    size_t size)
{
    return (pbtools_message_decode(
                &self_p->base,
                encoded_p,
                size,
                (pbtools_message_decode_inner_t)importing_message_decode_inner));
}

void importing_message2_init(
    struct importing_message2_t *self_p,
    struct pbtools_heap_t *heap_p,
    struct importing_message2_t *next_p)
{
    self_p->base.heap_p = heap_p;
    self_p->base.next_p = &next_p->base;
    importing_message_init(&self_p->v1, heap_p, NULL);
    imported2_foo_bar_imported2_message_init(&self_p->v2, heap_p, NULL);
}

void importing_message2_encode_inner(
    struct pbtools_encoder_t *encoder_p,
    struct importing_message2_t *self_p)
{
    pbtools_encoder_sub_message_encode(
        encoder_p,
        2,
        &self_p->v2.base,
        (pbtools_message_encode_inner_t)imported2_foo_bar_imported2_message_encode_inner);
    pbtools_encoder_sub_message_encode(
        encoder_p,
        1,
        &self_p->v1.base,
        (pbtools_message_encode_inner_t)importing_message_encode_inner);
}

void importing_message2_decode_inner(
    struct pbtools_decoder_t *decoder_p,
    struct importing_message2_t *self_p)
{
    int wire_type;

    while (pbtools_decoder_available(decoder_p)) {
        switch (pbtools_decoder_read_tag(decoder_p, &wire_type)) {

        case 1:
            pbtools_decoder_sub_message_decode(
                decoder_p,
                wire_type,
                &self_p->v1.base,
                (pbtools_message_decode_inner_t)importing_message_decode_inner);
            break;

        case 2:
            pbtools_decoder_sub_message_decode(
                decoder_p,
                wire_type,
                &self_p->v2.base,
                (pbtools_message_decode_inner_t)imported2_foo_bar_imported2_message_decode_inner);
            break;

        default:
            pbtools_decoder_skip_field(decoder_p, wire_type);
            break;
        }
    }
}

void importing_message2_encode_repeated_inner(
    struct pbtools_encoder_t *encoder_p,
    int field_number,
    struct importing_message2_repeated_t *repeated_p)
{
    pbtools_encode_repeated_inner(
        encoder_p,
        field_number,
        (struct pbtools_repeated_message_t *)repeated_p,
        (pbtools_message_encode_inner_t)importing_message2_encode_inner);
}

void importing_message2_decode_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    int wire_type,
    struct importing_message2_repeated_t *repeated_p)
{
    pbtools_decode_repeated_inner(
        decoder_p,
        wire_type,
        (struct pbtools_repeated_message_t *)repeated_p,
        sizeof(struct importing_message2_t),
        (pbtools_message_init_t)importing_message2_init,
        (pbtools_message_decode_inner_t)importing_message2_decode_inner);
}

void importing_message2_finalize_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    struct importing_message2_repeated_t *repeated_p)
{
    pbtools_finalize_repeated_inner(
        decoder_p,
        (struct pbtools_repeated_message_t *)repeated_p);
}

struct importing_message2_t *
importing_message2_new(
    void *workspace_p,
    size_t size)
{
    return (pbtools_message_new(
                workspace_p,
                size,
                sizeof(struct importing_message2_t),
                (pbtools_message_init_t)importing_message2_init));
}

int importing_message2_encode(
    struct importing_message2_t *self_p,
    uint8_t *encoded_p,
    size_t size)
{
    return (pbtools_message_encode(
                &self_p->base,
                encoded_p,
                size,
                (pbtools_message_encode_inner_t)importing_message2_encode_inner));
}

int importing_message2_decode(
    struct importing_message2_t *self_p,
    const uint8_t *encoded_p,
    size_t size)
{
    return (pbtools_message_decode(
                &self_p->base,
                encoded_p,
                size,
                (pbtools_message_decode_inner_t)importing_message2_decode_inner));
}

void importing_message3_init(
    struct importing_message3_t *self_p,
    struct pbtools_heap_t *heap_p,
    struct importing_message3_t *next_p)
{
    self_p->base.heap_p = heap_p;
    self_p->base.next_p = &next_p->base;
    self_p->v1 = 0;
    imported_imported_duplicated_package_message_init(&self_p->v2, heap_p, NULL);
}

void importing_message3_encode_inner(
    struct pbtools_encoder_t *encoder_p,
    struct importing_message3_t *self_p)
{
    pbtools_encoder_sub_message_encode(
        encoder_p,
        2,
        &self_p->v2.base,
        (pbtools_message_encode_inner_t)imported_imported_duplicated_package_message_encode_inner);
    pbtools_encoder_write_enum(encoder_p, 1, self_p->v1);
}

void importing_message3_decode_inner(
    struct pbtools_decoder_t *decoder_p,
    struct importing_message3_t *self_p)
{
    int wire_type;

    while (pbtools_decoder_available(decoder_p)) {
        switch (pbtools_decoder_read_tag(decoder_p, &wire_type)) {

        case 1:
            self_p->v1 = pbtools_decoder_read_enum(decoder_p, wire_type);
            break;

        case 2:
            pbtools_decoder_sub_message_decode(
                decoder_p,
                wire_type,
                &self_p->v2.base,
                (pbtools_message_decode_inner_t)imported_imported_duplicated_package_message_decode_inner);
            break;

        default:
            pbtools_decoder_skip_field(decoder_p, wire_type);
            break;
        }
    }
}

void importing_message3_encode_repeated_inner(
    struct pbtools_encoder_t *encoder_p,
    int field_number,
    struct importing_message3_repeated_t *repeated_p)
{
    pbtools_encode_repeated_inner(
        encoder_p,
        field_number,
        (struct pbtools_repeated_message_t *)repeated_p,
        (pbtools_message_encode_inner_t)importing_message3_encode_inner);
}

void importing_message3_decode_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    int wire_type,
    struct importing_message3_repeated_t *repeated_p)
{
    pbtools_decode_repeated_inner(
        decoder_p,
        wire_type,
        (struct pbtools_repeated_message_t *)repeated_p,
        sizeof(struct importing_message3_t),
        (pbtools_message_init_t)importing_message3_init,
        (pbtools_message_decode_inner_t)importing_message3_decode_inner);
}

void importing_message3_finalize_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    struct importing_message3_repeated_t *repeated_p)
{
    pbtools_finalize_repeated_inner(
        decoder_p,
        (struct pbtools_repeated_message_t *)repeated_p);
}

struct importing_message3_t *
importing_message3_new(
    void *workspace_p,
    size_t size)
{
    return (pbtools_message_new(
                workspace_p,
                size,
                sizeof(struct importing_message3_t),
                (pbtools_message_init_t)importing_message3_init));
}

int importing_message3_encode(
    struct importing_message3_t *self_p,
    uint8_t *encoded_p,
    size_t size)
{
    return (pbtools_message_encode(
                &self_p->base,
                encoded_p,
                size,
                (pbtools_message_encode_inner_t)importing_message3_encode_inner));
}

int importing_message3_decode(
    struct importing_message3_t *self_p,
    const uint8_t *encoded_p,
    size_t size)
{
    return (pbtools_message_decode(
                &self_p->base,
                encoded_p,
                size,
                (pbtools_message_decode_inner_t)importing_message3_decode_inner));
}
