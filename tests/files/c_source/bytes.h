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

#ifndef BYTES_H
#define BYTES_H

#include "pbtools.h"

/**
 * Message bytes.Message.
 */
struct bytes_message_repeated_t {
    int length;
    struct bytes_message_t **items_pp;
    struct bytes_message_t *head_p;
    struct bytes_message_t *tail_p;
};

struct bytes_message_t {
    struct pbtools_message_base_t base;
    struct pbtools_bytes_t value;
};

struct bytes_message_t *
bytes_message_new(
    void *workspace_p,
    size_t size);

int bytes_message_encode(
    struct bytes_message_t *self_p,
    uint8_t *encoded_p,
    size_t size);

int bytes_message_decode(
    struct bytes_message_t *self_p,
    const uint8_t *encoded_p,
    size_t size);

#endif
