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

#ifndef IMPORTING_H
#define IMPORTING_H

#include "pbtools.h"
#include "imported.h"
#include "imported2.h"

/**
 * Message importing.Message.
 */
struct importing_message_repeated_t {
    int length;
    struct importing_message_t **items_pp;
    struct importing_message_t *head_p;
    struct importing_message_t *tail_p;
};

struct importing_message_t {
    struct pbtools_message_base_t base;
    enum imported_imported_enum_e v1;
    struct imported_imported_message_t v2;
};

/**
 * Message importing.Message2.
 */
struct importing_message2_repeated_t {
    int length;
    struct importing_message2_t **items_pp;
    struct importing_message2_t *head_p;
    struct importing_message2_t *tail_p;
};

struct importing_message2_t {
    struct pbtools_message_base_t base;
    struct importing_message_t v1;
    struct imported2_foo_bar_imported2_message_t v2;
};

/**
 * Create a new message importing.Message in given workspace.
 *
 * @param[in] workspace_p Message workspace.
 * @param[in] size Workspace size.
 *
 * @return Initialized address book, or NULL on failure.
 */
struct importing_message_t *
importing_message_new(
    void *workspace_p,
    size_t size);

/**
 * Encode message importing.Message.
 *
 * @param[in] self_p Message to encode.
 * @param[out] encoded_p Buffer to encode the message into.
 * @param[in] size Encoded buffer size.
 *
 * @return Encoded data length or negative error code.
 */
int importing_message_encode(
    struct importing_message_t *self_p,
    uint8_t *encoded_p,
    size_t size);

/**
 * Decode message importing.Message.
 *
 * @param[in,out] self_p Initialized message to decode into.
 * @param[in] encoded_p Buffer to decode.
 * @param[in] size Size of the encoded message.
 *
 * @return Number of bytes decoded or negative error code.
 */
int importing_message_decode(
    struct importing_message_t *self_p,
    const uint8_t *encoded_p,
    size_t size);

#endif
